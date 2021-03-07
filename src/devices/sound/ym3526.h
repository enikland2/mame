// license:BSD-3-Clause
// copyright-holders:Aaron Giles

#ifndef MAME_SOUND_YM3526_H
#define MAME_SOUND_YM3526_H

#pragma once

#include "ymfm.h"


// ======================> ym3526_device

DECLARE_DEVICE_TYPE(YM3526, ym3526_device);

class ym3526_device : public device_t, public device_sound_interface
{
public:
	// constructor
	ym3526_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock, device_type type = YM3526);

	// configuration helpers
	auto irq_handler() { return m_opl.irq_handler(); }

	// read/write access
	u8 read(offs_t offset);
	virtual void write(offs_t offset, u8 data);

	u8 read_port_r() { return read(0); }
	u8 status_port_r() { return read(1); }
	void control_port_w(u8 data) { write(0, data); }
	void write_port_w(u8 data) { write(1, data); }

protected:
	// device-level overrides
	virtual void device_start() override;
	virtual void device_reset() override;
	virtual void device_clock_changed() override;

	// sound overrides
	virtual void sound_stream_update(sound_stream &stream, std::vector<read_stream_view> const &inputs, std::vector<write_stream_view> &outputs) override;

	// internal state
	ymopl_engine m_opl;              // core OPL engine
	sound_stream *m_stream;          // sound stream
	attotime m_busy_duration;        // precomputed busy signal duration
	u8 m_address;                    // address register
};


#endif // MAME_SOUND_YM3526_H
