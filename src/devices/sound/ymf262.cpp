// license:BSD-3-Clause
// copyright-holders:Aaron Giles

#include "emu.h"
#include "ymf262.h"


DEFINE_DEVICE_TYPE(YMF262, ymf262_device, "YMF262", "YMF262 OPL3")


//*********************************************************
//  YMF262 DEVICE
//*********************************************************

//-------------------------------------------------
//  ymf262_device - constructor
//-------------------------------------------------

ymf262_device::ymf262_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock, device_type type) :
	device_t(mconfig, type, tag, owner, clock),
	device_sound_interface(mconfig, *this),
	m_address(0),
	m_stream(nullptr),
	m_opl(*this)
{
}


//-------------------------------------------------
//  read - handle a read from the device
//-------------------------------------------------

u8 ymf262_device::read(offs_t offset)
{
	u8 result = 0xff;
	switch (offset & 1)
	{
		case 0: // status port
			result = m_opl.status() | 0x06;
			break;

		case 1:	// data port (unused)
			logerror("Unexpected read from YMF262 offset %d\n", offset & 3);
			break;
	}
	return result;
}


//-------------------------------------------------
//  write - handle a write to the register
//  interface
//-------------------------------------------------

void ymf262_device::write(offs_t offset, u8 value)
{
	switch (offset & 3)
	{
		case 0:	// address port
			m_address = value;
			break;

		case 1: // data port

			// ignore if paired with upper address
			if (BIT(m_address, 8))
				break;

			// force an update
			m_stream->update();

			// write to OPL
			m_opl.write(m_address, value);
			break;

		case 2: // upper address port
			m_address = 0x100 | value;
			break;

		case 3: // upper data port

			// ignore if paired with lower address
			if (!BIT(m_address, 8))
				break;

			// write to OPN
			m_stream->update();
			m_opl.write(m_address, value);
			break;
	}
}


//-------------------------------------------------
//  device_start - start of emulation
//-------------------------------------------------

void ymf262_device::device_start()
{
	// create our stream
	m_stream = stream_alloc(0, ymopl3_registers::OUTPUTS, clock() / (ymopl3_registers::DEFAULT_PRESCALE * ymopl3_registers::OPERATORS));

	// call this for the variants that need to adjust the rate
	device_clock_changed();

	// save our data
	save_item(YMFM_NAME(m_address));

	// save the engines
	m_opl.save(*this);
}


//-------------------------------------------------
//  device_reset - start of emulation
//-------------------------------------------------

void ymf262_device::device_reset()
{
	// reset the engines
	m_opl.reset();
}


//-------------------------------------------------
//  device_clock_changed - update if clock changes
//-------------------------------------------------

void ymf262_device::device_clock_changed()
{
	m_stream->set_sample_rate(clock() / (ymopl3_registers::DEFAULT_PRESCALE * ymopl3_registers::OPERATORS));
}


//-------------------------------------------------
//  sound_stream_update - update the sound stream
//-------------------------------------------------

void ymf262_device::sound_stream_update(sound_stream &stream, std::vector<read_stream_view> const &inputs, std::vector<write_stream_view> &outputs)
{
	// prepare for output
	m_opl.prepare(ymopl3_registers::ALL_CHANNELS);

	// iterate over all target samples
	for (int sampindex = 0; sampindex < outputs[0].samples(); sampindex++)
	{
		// clock the system
		m_opl.clock(ymopl3_registers::ALL_CHANNELS);

		// update the OPL content; clipping is unknown
		s32 sums[ymopl3_registers::OUTPUTS] = { 0 };
		m_opl.output(sums, 0, 32767, ymopl3_registers::ALL_CHANNELS);

		// OPL3 outputs straight 16-bit data in 4 channels
		for (int index = 0; index < ymopl3_registers::OUTPUTS; index++)
			outputs[index].put_int(sampindex, sums[index], 32768);
	}
}
