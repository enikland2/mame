// license:BSD-3-Clause
// copyright-holders:

/*
Trio de Bingo (GS470)
(c) Konami

CPU   : 68000
Sound : 054539

Main board (with sound)

470A02      ; 27C4001
470A03      ;  |
470A04      ;  /
470G01      ; 27C4096 main prg
*/

#include "emu.h"
#include "cpu/m68000/m68000.h"
#include "sound/k054539.h"
#include "emupal.h"
#include "screen.h"
#include "speaker.h"


namespace {

class kongs470_state : public driver_device
{
public:
	kongs470_state(const machine_config &mconfig, device_type type, const char *tag) :
		driver_device(mconfig, type, tag),
		m_maincpu(*this, "maincpu")
	{ }

	void kongs470(machine_config &config);

protected:
	virtual void machine_start() override;

private:
	uint32_t screen_update(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);

	void main_map(address_map &map);

	required_device<cpu_device> m_maincpu;
};


uint32_t kongs470_state::screen_update(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	return 0;
}


void kongs470_state::main_map(address_map &map)
{
	map(0x000000, 0x07ffff).rom().region("maincpu", 0);
	map(0x100000, 0x10ffff).ram();
}


static INPUT_PORTS_START( tdbingo )
	PORT_START("IN0")
	PORT_BIT( 0xffff, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN1")
	PORT_BIT( 0xffff, IP_ACTIVE_LOW, IPT_UNKNOWN )
INPUT_PORTS_END


void kongs470_state::machine_start()
{
}


void kongs470_state::kongs470(machine_config &config)
{
	// basic machine hardware
	M68000(config, m_maincpu, 10'000'000); // clock unverified
	m_maincpu->set_addrmap(AS_PROGRAM, &kongs470_state::main_map);

	// video hardware, all TBD
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(40, 400-1, 16, 240-1);
	screen.set_screen_update(FUNC(kongs470_state::screen_update));

	// sound hardware
	SPEAKER(config, "lspeaker").front_left();
	SPEAKER(config, "rspeaker").front_right();

	k054539_device &k054539(K054539(config, "k054539", 10'000'000)); // clock unverified
	k054539.add_route(0, "rspeaker", 0.75);
	k054539.add_route(1, "lspeaker", 0.75);
}


ROM_START( tdbingo )
	ROM_REGION( 0x80000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "470g01.bin", 0x00000, 0x80000, CRC(c0015cfb) SHA1(633e1d6c12691ddd31ccdd41b213b6ed33ae4554) )

	ROM_REGION( 0x100000, "gfx", 0 )   // which GFX custom does this use, if any?
	ROM_LOAD( "470a02.bin", 0x000000, 0x080000, CRC(5b68522d) SHA1(2f14857d315b524ec27238f8e33e650843bda256) )
	ROM_LOAD( "470a03.bin", 0x080000, 0x080000, CRC(25ee73f3) SHA1(119c99af839f5def342930dccf45d205ad83aef7) )

	ROM_REGION( 0x80000, "k054539", 0 )
	ROM_LOAD( "470a04.bin", 0x00000, 0x80000, CRC(9b432c4b) SHA1(9ab0396579aba215c8adc81b6568b2b94c226589) )
ROM_END

} // Anonymous namespace


GAME( 199?, tdbingo,  0, kongs470, tdbingo, kongs470_state, empty_init, ROT0, "Konami", "Trio de Bingo", MACHINE_IS_SKELETON )
