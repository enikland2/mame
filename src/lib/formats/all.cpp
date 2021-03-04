// license:BSD-3-Clause
// copyright-holders:Olivier Galibert

// Enumerate all the compiled-in formats

#include "emu.h"
#include "all.h"

#include "has_formats.h" // Generated by genie

#include "cqm_dsk.h"
#include "dsk_dsk.h"
#include "td0_dsk.h"
#include "hxchfe_dsk.h"
#include "hxcmfm_dsk.h"
#include "mfi_dsk.h"
#include "imd_dsk.h"
#include "upd765_dsk.h"
#include "pc_dsk.h"
#include "d88_dsk.h"
#include "dfi_dsk.h"

#ifdef HAS_FORMATS_2D_DSK
#include "2d_dsk.h"
#endif

#ifdef HAS_FORMATS_A26_CAS
#include "a26_cas.h"
#endif

#ifdef HAS_FORMATS_A5105_DSK
#include "a5105_dsk.h"
#endif

#ifdef HAS_FORMATS_ABC800_DSK
#include "abc800_dsk.h"
#endif

#ifdef HAS_FORMATS_ABCFD2_DSK
#include "abcfd2_dsk.h"
#endif

#ifdef HAS_FORMATS_ACE_TAP
#include "ace_tap.h"
#endif

#ifdef HAS_FORMATS_ACORN_DSK
#include "acorn_dsk.h"
#endif

#ifdef HAS_FORMATS_ADAM_CAS
#include "adam_cas.h"
#endif

#ifdef HAS_FORMATS_ADAM_DSK
#include "adam_dsk.h"
#endif

#ifdef HAS_FORMATS_AFS_DSK
#include "afs_dsk.h"
#endif

#ifdef HAS_FORMATS_AIM_DSK
#include "aim_dsk.h"
#endif

#ifdef HAS_FORMATS_AMI_DSK
#include "ami_dsk.h"
#endif

#ifdef HAS_FORMATS_AP2_DSK
#include "ap2_dsk.h"
#endif

#ifdef HAS_FORMATS_APD_DSK
#include "apd_dsk.h"
#endif

#ifdef HAS_FORMATS_APF_APT
#include "apf_apt.h"
#endif

#ifdef HAS_FORMATS_APOLLO_DSK
#include "apollo_dsk.h"
#endif

#ifdef HAS_FORMATS_APPLIX_DSK
#include "applix_dsk.h"
#endif

#ifdef HAS_FORMATS_APRIDISK
#include "apridisk.h"
#endif

#ifdef HAS_FORMATS_AP_DSK35
#include "ap_dsk35.h"
#endif

#ifdef HAS_FORMATS_AQUARIUS_CAQ
#include "aquarius_caq.h"
#endif

#ifdef HAS_FORMATS_ASST128_DSK
#include "asst128_dsk.h"
#endif

#ifdef HAS_FORMATS_ATARI_DSK
#include "atari_dsk.h"
#endif

#ifdef HAS_FORMATS_ATOM_DSK
#include "atom_dsk.h"
#endif

#ifdef HAS_FORMATS_ATOM_TAP
#include "atom_tap.h"
#endif

#ifdef HAS_FORMATS_BW12_DSK
#include "bw12_dsk.h"
#endif

#ifdef HAS_FORMATS_BW2_DSK
#include "bw2_dsk.h"
#endif

#ifdef HAS_FORMATS_C3040_DSK
#include "c3040_dsk.h"
#endif

#ifdef HAS_FORMATS_C4040_DSK
#include "c4040_dsk.h"
#endif

#ifdef HAS_FORMATS_C8280_DSK
#include "c8280_dsk.h"
#endif

#ifdef HAS_FORMATS_CAMPLYNX_CAS
#include "camplynx_cas.h"
#endif

#ifdef HAS_FORMATS_CAMPLYNX_DSK
#include "camplynx_dsk.h"
#endif

#ifdef HAS_FORMATS_CBM_CRT
#include "cbm_crt.h"
#endif

#ifdef HAS_FORMATS_CBM_TAP
#include "cbm_tap.h"
#endif

#ifdef HAS_FORMATS_CCVF_DSK
#include "ccvf_dsk.h"
#endif

#ifdef HAS_FORMATS_CGENIE_DSK
#include "cgenie_dsk.h"
#endif

#ifdef HAS_FORMATS_CGEN_CAS
#include "cgen_cas.h"
#endif

#ifdef HAS_FORMATS_COCO_CAS
#include "coco_cas.h"
#endif

#ifdef HAS_FORMATS_COMX35_DSK
#include "comx35_dsk.h"
#endif

#ifdef HAS_FORMATS_CONCEPT_DSK
#include "concept_dsk.h"
#endif

#ifdef HAS_FORMATS_COUPEDSK
#include "coupedsk.h"
#endif

#ifdef HAS_FORMATS_CPIS_DSK
#include "cpis_dsk.h"
#endif

#ifdef HAS_FORMATS_CSW_CAS
#include "csw_cas.h"
#endif

#ifdef HAS_FORMATS_D64_DSK
#include "d64_dsk.h"
#endif

#ifdef HAS_FORMATS_D71_DSK
#include "d71_dsk.h"
#endif

#ifdef HAS_FORMATS_D80_DSK
#include "d80_dsk.h"
#endif

#ifdef HAS_FORMATS_D81_DSK
#include "d81_dsk.h"
#endif

#ifdef HAS_FORMATS_D82_DSK
#include "d82_dsk.h"
#endif

#ifdef HAS_FORMATS_DCP_DSK
#include "dcp_dsk.h"
#endif

#ifdef HAS_FORMATS_DIM_DSK
#include "dim_dsk.h"
#endif

#ifdef HAS_FORMATS_DIP_DSK
#include "dip_dsk.h"
#endif

#ifdef HAS_FORMATS_DMK_DSK
#include "dmk_dsk.h"
#endif

#ifdef HAS_FORMATS_DS9_DSK
#include "ds9_dsk.h"
#endif

#ifdef HAS_FORMATS_SDF_DSK
#include "sdf_dsk.h"
#endif

#ifdef HAS_FORMATS_EP64_DSK
#include "ep64_dsk.h"
#endif

#ifdef HAS_FORMATS_DMV_DSK
#include "dmv_dsk.h"
#endif

#ifdef HAS_FORMATS_DVK_MX_DSK
#include "dvk_mx_dsk.h"
#endif

#ifdef HAS_FORMATS_ESQ16_DSK
#include "esq16_dsk.h"
#endif

#ifdef HAS_FORMATS_ESQ8_DSK
#include "esq8_dsk.h"
#endif

#ifdef HAS_FORMATS_EXCALI64_DSK
#include "excali64_dsk.h"
#endif

#ifdef HAS_FORMATS_FC100_CAS
#include "fc100_cas.h"
#endif

#ifdef HAS_FORMATS_FDD_DSK
#include "fdd_dsk.h"
#endif

#ifdef HAS_FORMATS_FL1_DSK
#include "fl1_dsk.h"
#endif

#ifdef HAS_FORMATS_FLEX_DSK
#include "flex_dsk.h"
#endif

#ifdef HAS_FORMATS_UNIFLEX_DSK
#include "uniflex_dsk.h"
#endif

#ifdef HAS_FORMATS_FM7_CAS
#include "fm7_cas.h"
#endif

#ifdef HAS_FORMATS_FMSX_CAS
#include "fmsx_cas.h"
#endif

#ifdef HAS_FORMATS_FMTOWNS_DSK
#include "fmtowns_dsk.h"
#endif

#ifdef HAS_FORMATS_FSD_DSK
#include "fsd_dsk.h"
#endif

#ifdef HAS_FORMATS_G64_DSK
#include "g64_dsk.h"
#endif

#ifdef HAS_FORMATS_GTP_CAS
#include "gtp_cas.h"
#endif

#ifdef HAS_FORMATS_GUAB_DSK
#include "guab_dsk.h"
#endif

#ifdef HAS_FORMATS_H8_CAS
#include "h8_cas.h"
#endif

#ifdef HAS_FORMATS_HECTOR_MINIDISC
#include "hector_minidisc.h"
#endif

#ifdef HAS_FORMATS_HECT_DSK
#include "hect_dsk.h"
#endif

#ifdef HAS_FORMATS_HECT_TAP
#include "hect_tap.h"
#endif

#ifdef HAS_FORMATS_HTI_TAP
#include "hti_tape.h"
#endif

#ifdef HAS_FORMATS_HPI_DSK
#include "hpi_dsk.h"
#endif

#ifdef HAS_FORMATS_HP_IPC_DSK
#include "hp_ipc_dsk.h"
#endif

#ifdef HAS_FORMATS_IMG_DSK
#include "img_dsk.h"
#endif

#ifdef HAS_FORMATS_IQ151_DSK
#include "iq151_dsk.h"
#endif

#ifdef HAS_FORMATS_ITT3030_DSK
#include "itt3030_dsk.h"
#endif

#ifdef HAS_FORMATS_JUKU_DSK
#include "juku_dsk.h"
#endif

#ifdef HAS_FORMATS_JVC_DSK
#include "jvc_dsk.h"
#endif

#ifdef HAS_FORMATS_OS9_DSK
#include "os9_dsk.h"
#endif

#ifdef HAS_FORMATS_JFD_DSK
#include "jfd_dsk.h"
#endif

#ifdef HAS_FORMATS_KAYPRO_DSK
#include "kaypro_dsk.h"
#endif

#ifdef HAS_FORMATS_KC85_DSK
#include "kc85_dsk.h"
#endif

#ifdef HAS_FORMATS_KC_CAS
#include "kc_cas.h"
#endif

#ifdef HAS_FORMATS_KIM1_CAS
#include "kim1_cas.h"
#endif

#ifdef HAS_FORMATS_LVIV_LVT
#include "lviv_lvt.h"
#endif

#ifdef HAS_FORMATS_M20_DSK
#include "m20_dsk.h"
#endif

#ifdef HAS_FORMATS_M5_DSK
#include "m5_dsk.h"
#endif

#ifdef HAS_FORMATS_MBEE_CAS
#include "mbee_cas.h"
#endif

#ifdef HAS_FORMATS_MDOS_DSK
#include "mdos_dsk.h"
#endif

#ifdef HAS_FORMATS_MFM_HD
#include "mfm_hd.h"
#endif

#ifdef HAS_FORMATS_MM_DSK
#include "mm_dsk.h"
#endif

#ifdef HAS_FORMATS_MS0515_DSK
#include "ms0515_dsk.h"
#endif

#ifdef HAS_FORMATS_MSX_DSK
#include "msx_dsk.h"
#endif

#ifdef HAS_FORMATS_MTX_DSK
#include "mtx_dsk.h"
#endif

#ifdef HAS_FORMATS_MZ_CAS
#include "mz_cas.h"
#endif

#ifdef HAS_FORMATS_NANOS_DSK
#include "nanos_dsk.h"
#endif

#ifdef HAS_FORMATS_NASCOM_DSK
#include "nascom_dsk.h"
#endif

#ifdef HAS_FORMATS_NASLITE_DSK
#include "naslite_dsk.h"
#endif

#ifdef HAS_FORMATS_NES_DSK
#include "nes_dsk.h"
#endif

#ifdef HAS_FORMATS_NFD_DSK
#include "nfd_dsk.h"
#endif

#ifdef HAS_FORMATS_OPD_DSK
#include "opd_dsk.h"
#endif

#ifdef HAS_FORMATS_ORAO_CAS
#include "orao_cas.h"
#endif

#ifdef HAS_FORMATS_ORIC_DSK
#include "oric_dsk.h"
#endif

#ifdef HAS_FORMATS_ORIC_TAP
#include "oric_tap.h"
#endif

#ifdef HAS_FORMATS_IBMXDF_DSK
#include "ibmxdf_dsk.h"
#endif

#ifdef HAS_FORMATS_P2000T_CAS
#include "p2000t_cas.h"
#endif

#ifdef HAS_FORMATS_P6001_CAS
#include "p6001_cas.h"
#endif

#ifdef HAS_FORMATS_PASTI_DSK
#include "pasti_dsk.h"
#endif

#ifdef HAS_FORMATS_PC98FDI_DSK
#include "pc98fdi_dsk.h"
#endif

#ifdef HAS_FORMATS_PC98_DSK
#include "pc98_dsk.h"
#endif

#ifdef HAS_FORMATS_IPF_DSK
#include "ipf_dsk.h"
#endif

#ifdef HAS_FORMATS_PHC25_CAS
#include "phc25_cas.h"
#endif

#ifdef HAS_FORMATS_PK8020_DSK
#include "pk8020_dsk.h"
#endif

#ifdef HAS_FORMATS_PMD_CAS
#include "pmd_cas.h"
#endif

#ifdef HAS_FORMATS_POLY_DSK
#include "poly_dsk.h"
#endif

#ifdef HAS_FORMATS_PPG_DSK
#include "ppg_dsk.h"
#endif

#ifdef HAS_FORMATS_PRIMOPTP
#include "primoptp.h"
#endif

#ifdef HAS_FORMATS_PYLDIN_DSK
#include "pyldin_dsk.h"
#endif

#ifdef HAS_FORMATS_QL_DSK
#include "ql_dsk.h"
#endif

#ifdef HAS_FORMATS_RK_CAS
#include "rk_cas.h"
#endif

#ifdef HAS_FORMATS_RX50_DSK
#include "rx50_dsk.h"
#endif

#ifdef HAS_FORMATS_SC3000_BIT
#include "sc3000_bit.h"
#endif

#ifdef HAS_FORMATS_SDD_DSK
#include "sdd_dsk.h"
#endif

#ifdef HAS_FORMATS_SF7000_DSK
#include "sf7000_dsk.h"
#endif

#ifdef HAS_FORMATS_SMX_DSK
#include "smx_dsk.h"
#endif

#ifdef HAS_FORMATS_SOL_CAS
#include "sol_cas.h"
#endif

#ifdef HAS_FORMATS_SORC_CAS
#include "sorc_cas.h"
#endif

#ifdef HAS_FORMATS_SORC_DSK
#include "sorc_dsk.h"
#endif

#ifdef HAS_FORMATS_SORD_CAS
#include "sord_cas.h"
#endif

#ifdef HAS_FORMATS_SPC1000_CAS
#include "spc1000_cas.h"
#endif

#ifdef HAS_FORMATS_ST_DSK
#include "st_dsk.h"
#endif

#ifdef HAS_FORMATS_SVI_CAS
#include "svi_cas.h"
#endif

#ifdef HAS_FORMATS_SVI_DSK
#include "svi_dsk.h"
#endif

#ifdef HAS_FORMATS_SWD_DSK
#include "swd_dsk.h"
#endif

#ifdef HAS_FORMATS_TANDY2K_DSK
#include "tandy2k_dsk.h"
#endif

#ifdef HAS_FORMATS_THOM_CAS
#include "thom_cas.h"
#endif

#ifdef HAS_FORMATS_TI99_DSK
#include "ti99_dsk.h"
#endif

#ifdef HAS_FORMATS_TIKI100_DSK
#include "tiki100_dsk.h"
#endif

#ifdef HAS_FORMATS_TRD_DSK
#include "trd_dsk.h"
#endif

#ifdef HAS_FORMATS_TRS80_DSK
#include "trs80_dsk.h"
#endif

#ifdef HAS_FORMATS_TRS_CAS
#include "trs_cas.h"
#endif

#ifdef HAS_FORMATS_TVC_CAS
#include "tvc_cas.h"
#endif

#ifdef HAS_FORMATS_TVC_DSK
#include "tvc_dsk.h"
#endif

#ifdef HAS_FORMATS_TZX_CAS
#include "tzx_cas.h"
#endif

#ifdef HAS_FORMATS_UEF_CAS
#include "uef_cas.h"
#endif

#ifdef HAS_FORMATS_VDK_DSK
#include "vdk_dsk.h"
#endif

#ifdef HAS_FORMATS_VECTOR06_DSK
#include "vector06_dsk.h"
#endif

#ifdef HAS_FORMATS_VG5K_CAS
#include "vg5k_cas.h"
#endif

#ifdef HAS_FORMATS_VICTOR9K_DSK
#include "victor9k_dsk.h"
#endif

#ifdef HAS_FORMATS_VT_CAS
#include "vt_cas.h"
#endif

#ifdef HAS_FORMATS_WD177X_DSK
#include "wd177x_dsk.h"
#endif

#ifdef HAS_FORMATS_X07_CAS
#include "x07_cas.h"
#endif

#ifdef HAS_FORMATS_X1_TAP
#include "x1_tap.h"
#endif

#ifdef HAS_FORMATS_XDF_DSK
#include "xdf_dsk.h"
#endif

#ifdef HAS_FORMATS_ZX81_P
#include "zx81_p.h"
#endif

void mame_formats_full_list(mame_formats_enumerator &en)
{
	en.category("Generic");
	en.add(cassette_default_formats);
#ifdef HAS_FORMATS_UEF_CAS
	en.add(uef_cassette_formats); // uef_cas.h
#endif
	en.add(FLOPPY_MFI_FORMAT); // mfi_dsk.h
	en.add(FLOPPY_DFI_FORMAT); // dfi_dsk.h

	en.category("Container FM/MFM");
	en.add(FLOPPY_HFE_FORMAT); // hxchfe_dsk.h
	en.add(FLOPPY_MFM_FORMAT); // hxcmfm_dsk.h
	en.add(FLOPPY_TD0_FORMAT); // td0_dsk.h
	en.add(FLOPPY_IMD_FORMAT); // imd_dsk.h

	en.category("Container MFM");
	en.add(FLOPPY_D88_FORMAT); // d88_dsk.h
	en.add(FLOPPY_CQM_FORMAT); // cqm_dsk.h
	en.add(FLOPPY_DSK_FORMAT); // dsk_dsk.h
#ifdef HAS_FORMATS_DMK_DSK
	en.add(FLOPPY_DMK_FORMAT); // dmk_dsk.h
#endif

	en.category("Apple");
#ifdef HAS_FORMATS_AP2_DSK
	en.add(FLOPPY_A216S_FORMAT); // ap2_dsk.h
	en.add(FLOPPY_RWTS18_FORMAT); // ap2_dsk.h
	en.add(FLOPPY_EDD_FORMAT); // ap2_dsk.h
	en.add(FLOPPY_WOZ_FORMAT); // ap2_dsk.h
	en.add(FLOPPY_NIB_FORMAT); // ap2_dsk.h
#endif
#ifdef HAS_FORMATS_AIM_DSK
	en.add(FLOPPY_AIM_FORMAT); // aim_dsk.h
#endif
#ifdef HAS_FORMATS_DS9_DSK
	en.add(FLOPPY_DS9_FORMAT); // ds9_dsk.h
#endif
#ifdef HAS_FORMATS_AP_DSK35
	en.add(FLOPPY_DC42_FORMAT); // ap_dsk35.h
	en.add(FLOPPY_APPLE_GCR_FORMAT); // ap_dsk35.h
	en.add(FLOPPY_APPLE_2MG_FORMAT); // ap_dsk35.h
#endif

	en.category("PC");
	en.add(FLOPPY_PC_FORMAT); // pc_dsk.h
#ifdef HAS_FORMATS_IBMXDF_DSK
	en.add(FLOPPY_IBMXDF_FORMAT); // ibmxdf_dsk.h
#endif
#ifdef HAS_FORMATS_NASLITE_DSK
	en.add(FLOPPY_NASLITE_FORMAT); // naslite_dsk.h
#endif

	en.category("Sharp");
#ifdef HAS_FORMATS_MZ_CAS
	en.add(mz700_cassette_formats); // mz_cas.h
#endif
#ifdef HAS_FORMATS_X1_TAP
	en.add(x1_cassette_formats); // x1_tap.h
#endif
#ifdef HAS_FORMATS_2D_DSK
	en.add(FLOPPY_2D_FORMAT); // 2d_dsk.h
#endif

	en.category("Robotron");
#ifdef HAS_FORMATS_A5105_DSK
	en.add(FLOPPY_A5105_FORMAT); // a5105_dsk.h
#endif

	en.category("Luxor ABC");
#ifdef HAS_FORMATS_ABC800_DSK
	en.add(FLOPPY_ABC800_FORMAT); // abc800_dsk.h
#endif
#ifdef HAS_FORMATS_ABCFD2_DSK
	en.add(FLOPPY_ABC_FD2_FORMAT); // abcfd2_dsk.h
#endif

	en.category("Acorn");
#ifdef HAS_FORMATS_ATOM_TAP
	en.add(atom_cassette_formats); // atom_tap.h
#endif
#ifdef HAS_FORMATS_CSW_CAS
	en.add(csw_cassette_formats); // csw_cas.h
	en.add(bbc_cassette_formats); // csw_cas.h
#endif
#ifdef HAS_FORMATS_ACORN_DSK
	en.add(FLOPPY_ACORN_SSD_FORMAT); // acorn_dsk.h
	en.add(FLOPPY_ACORN_DSD_FORMAT); // acorn_dsk.h
	en.add(FLOPPY_ACORN_DOS_FORMAT); // acorn_dsk.h
	en.add(FLOPPY_ACORN_ADFS_OLD_FORMAT); // acorn_dsk.h
	en.add(FLOPPY_ACORN_ADFS_NEW_FORMAT); // acorn_dsk.h
	en.add(FLOPPY_OPUS_DDOS_FORMAT); // acorn_dsk.h
	en.add(FLOPPY_OPUS_DDCPM_FORMAT); // acorn_dsk.h
#endif
#ifdef HAS_FORMATS_FSD_DSK
	en.add(FLOPPY_FSD_FORMAT); // fsd_dsk.h
#endif
#ifdef HAS_FORMATS_AFS_DSK
	en.add(FLOPPY_AFS_FORMAT); // afs_dsk.h
#endif
#ifdef HAS_FORMATS_ATOM_DSK
	en.add(FLOPPY_ATOM_FORMAT); // atom_dsk.h
#endif
#ifdef HAS_FORMATS_JFD_DSK
	en.add(FLOPPY_JFD_FORMAT); // jfd_dsk.h
#endif

	en.category("Coleco");
#ifdef HAS_FORMATS_ADAM_CAS
	en.add(coleco_adam_cassette_formats); // adam_cas.h
#endif
#ifdef HAS_FORMATS_ADAM_DSK
	en.add(FLOPPY_ADAM_FORMAT); // adam_dsk.h
#endif

	en.category("Amiga");
#ifdef HAS_FORMATS_AMI_DSK
	en.add(FLOPPY_ADF_FORMAT); // ami_dsk.h
#endif
#ifdef HAS_FORMATS_IPF_DSK
	en.add(FLOPPY_IPF_FORMAT); // ipf_dsk.h
#endif

	en.category("Archimedes");
#ifdef HAS_FORMATS_APD_DSK
	en.add(FLOPPY_APD_FORMAT); // apd_dsk.h
#endif

	en.category("HP");
#ifdef HAS_FORMATS_APOLLO_DSK
	en.add(FLOPPY_APOLLO_FORMAT); // apollo_dsk.h
#endif
#ifdef HAS_FORMATS_HP_IPC_DSK
	en.add(FLOPPY_HP_IPC_FORMAT); // hp_ipc_dsk.h
#endif
#ifdef HAS_FORMATS_HPI_DSK
	en.add(FLOPPY_HPI_FORMAT); // hpi_dsk.h
#endif

	en.category("Applix");
#ifdef HAS_FORMATS_APPLIX_DSK
	en.add(FLOPPY_APPLIX_FORMAT); // applix_dsk.h
#endif

	en.category("Apricot");
#ifdef HAS_FORMATS_APRIDISK
	en.add(FLOPPY_APRIDISK_FORMAT); // apridisk.h
#endif

	en.category("Assistent");
#ifdef HAS_FORMATS_ASST128_DSK
	en.add(FLOPPY_ASST128_FORMAT); // asst128_dsk.h
#endif

	en.category("Bondwell");
#ifdef HAS_FORMATS_BW12_DSK
	en.add(FLOPPY_BW12_FORMAT); // bw12_dsk.h
#endif
#ifdef HAS_FORMATS_BW2_DSK
	en.add(FLOPPY_BW2_FORMAT); // bw2_dsk.h
#endif

	en.category("Commodore");
#ifdef HAS_FORMATS_CBM_TAP
	en.add(cbm_cassette_formats); // cbm_tap.h
#endif
#ifdef HAS_FORMATS_C3040_DSK
	en.add(FLOPPY_C3040_FORMAT); // c3040_dsk.h
#endif
#ifdef HAS_FORMATS_C4040_DSK
	en.add(FLOPPY_C4040_FORMAT); // c4040_dsk.h
#endif
#ifdef HAS_FORMATS_C8280_DSK
	en.add(FLOPPY_C8280_FORMAT); // c8280_dsk.h
#endif
#ifdef HAS_FORMATS_D64_DSK
	en.add(FLOPPY_D64_FORMAT); // d64_dsk.h
#endif
#ifdef HAS_FORMATS_D71_DSK
	en.add(FLOPPY_D71_FORMAT); // d71_dsk.h
#endif
#ifdef HAS_FORMATS_D80_DSK
	en.add(FLOPPY_D80_FORMAT); // d80_dsk.h
#endif
#ifdef HAS_FORMATS_D81_DSK
	en.add(FLOPPY_D81_FORMAT); // d81_dsk.h
#endif
#ifdef HAS_FORMATS_D82_DSK
	en.add(FLOPPY_D82_FORMAT); // d82_dsk.h
#endif
#ifdef HAS_FORMATS_G64_DSK
	en.add(FLOPPY_G64_FORMAT); // g64_dsk.h
#endif

	en.category("Camputers");
#ifdef HAS_FORMATS_CAMPLYNX_CAS
	en.add(lynx48k_cassette_formats); // camplynx_cas.h
	en.add(lynx128k_cassette_formats); // camplynx_cas.h
#endif
#ifdef HAS_FORMATS_CAMPLYNX_DSK
	en.add(FLOPPY_CAMPLYNX_FORMAT); // camplynx_dsk.h
#endif

	en.category("Compucolor");
#ifdef HAS_FORMATS_CCVF_DSK
	en.add(FLOPPY_CCVF_FORMAT); // ccvf_dsk.h
#endif

	en.category("Colour Genie");
#ifdef HAS_FORMATS_CGEN_CAS
	en.add(cgenie_cassette_formats); // cgen_cas.h
#endif
#ifdef HAS_FORMATS_CGENIE_DSK
	en.add(FLOPPY_CGENIE_FORMAT); // cgenie_dsk.h
#endif

	en.category("Comx");
#ifdef HAS_FORMATS_COMX35_DSK
	en.add(FLOPPY_COMX35_FORMAT); // comx35_dsk.h
#endif

	en.category("Concept");
#ifdef HAS_FORMATS_CONCEPT_DSK
	en.add(FLOPPY_CONCEPT_525DSDD_FORMAT); // concept_dsk.h
#endif

	en.category("Compis");
#ifdef HAS_FORMATS_CPIS_DSK
	en.add(FLOPPY_CPIS_FORMAT); // cpis_dsk.h
#endif

	en.category("PC98");
#ifdef HAS_FORMATS_DCP_DSK
	en.add(FLOPPY_DCP_FORMAT); // dcp_dsk.h
#endif
#ifdef HAS_FORMATS_DIP_DSK
	en.add(FLOPPY_DIP_FORMAT); // dip_dsk.h
#endif
#ifdef HAS_FORMATS_FDD_DSK
	en.add(FLOPPY_FDD_FORMAT); // fdd_dsk.h
#endif
#ifdef HAS_FORMATS_NFD_DSK
	en.add(FLOPPY_NFD_FORMAT); // nfd_dsk.h
#endif
#ifdef HAS_FORMATS_PC98_DSK
	en.add(FLOPPY_PC98_FORMAT); // pc98_dsk.h
#endif
#ifdef HAS_FORMATS_PC98FDI_DSK
	en.add(FLOPPY_PC98FDI_FORMAT); // pc98fdi_dsk.h
#endif

	en.category("X68k");
#ifdef HAS_FORMATS_DIM_DSK
	en.add(FLOPPY_DIM_FORMAT); // dim_dsk.h
#endif
#ifdef HAS_FORMATS_XDF_DSK
	en.add(FLOPPY_XDF_FORMAT); // xdf_dsk.h
#endif

	en.category("NCR Decision Mate V");
#ifdef HAS_FORMATS_DMV_DSK
	en.add(FLOPPY_DMV_FORMAT); // dmv_dsk.h
#endif

	en.category("DVK MX");
#ifdef HAS_FORMATS_DVK_MX_DSK
	en.add(FLOPPY_DVK_MX_FORMAT); // dvk_mx_dsk.h
#endif

	en.category("Enterprise");
#ifdef HAS_FORMATS_EP64_DSK
	en.add(FLOPPY_EP64_FORMAT); // ep64_dsk.h
#endif

	en.category("Ensoniq");
#ifdef HAS_FORMATS_ESQ16_DSK
	en.add(FLOPPY_ESQIMG_FORMAT); // esq16_dsk.h
#endif
#ifdef HAS_FORMATS_ESQ8_DSK
	en.add(FLOPPY_ESQ8IMG_FORMAT); // esq8_dsk.h
#endif

	en.category("Excalibur 64");
#ifdef HAS_FORMATS_EXCALI64_DSK
	en.add(FLOPPY_EXCALI64_FORMAT); // excali64_dsk.h
#endif

	en.category("Sinclair");
#ifdef HAS_FORMATS_ZX81_P
	en.add(zx81_p_format); // zx81_p.h
	en.add(zx81_cassette_formats); // zx81_p.h
	en.add(zx80_o_format); // zx81_p.h
#endif
#ifdef HAS_FORMATS_TZX_CAS
	en.add(tzx_cassette_formats); // tzx_cas.h
	en.add(cdt_cassette_formats); // tzx_cas.h
#endif
#ifdef HAS_FORMATS_FL1_DSK
	en.add(FLOPPY_FL1_FORMAT); // fl1_dsk.h
#endif
#ifdef HAS_FORMATS_TRD_DSK
	en.add(FLOPPY_TRD_FORMAT); // trd_dsk.h
#endif
#ifdef HAS_FORMATS_COUPEDSK
	en.add(FLOPPY_MGT_FORMAT); // coupedsk.h
#endif
#ifdef HAS_FORMATS_OPD_DSK
	en.add(FLOPPY_OPD_FORMAT); // opd_dsk.h
#endif
#ifdef HAS_FORMATS_SWD_DSK
	en.add(FLOPPY_SWD_FORMAT); // swd_dsk.h
#endif
#ifdef HAS_FORMATS_SDD_DSK
	en.add(FLOPPY_SDD_FORMAT); // sdd_dsk.h
#endif
#ifdef HAS_FORMATS_QL_DSK
	en.add(FLOPPY_QL_FORMAT); // ql_dsk.h
#endif

	en.category("Flex");
#ifdef HAS_FORMATS_FLEX_DSK
	en.add(FLOPPY_FLEX_FORMAT); // flex_dsk.h
#endif

	en.category("FM Towns");
#ifdef HAS_FORMATS_FMTOWNS_DSK
	en.add(FLOPPY_FMTOWNS_FORMAT); // fmtowns_dsk.h
#endif

	en.category("JPM");
#ifdef HAS_FORMATS_GUAB_DSK
	en.add(FLOPPY_GUAB_FORMAT); // guab_dsk.h
#endif

	en.category("Hector");
#ifdef HAS_FORMATS_HECT_TAP
	en.add(hector_cassette_formats); // hect_tap.h
#endif
#ifdef HAS_FORMATS_HECTOR_MINIDISC
	en.add(FLOPPY_HMD_FORMAT); // hector_minidisc.h
#endif

	en.category("Intel");
#ifdef HAS_FORMATS_IMG_DSK
	en.add(FLOPPY_IMG_FORMAT); // img_dsk.h
#endif

	en.category("IQ151");
#ifdef HAS_FORMATS_IQ151_DSK
	en.add(FLOPPY_IQ151_FORMAT); // iq151_dsk.h
#endif

	en.category("ITT3030");
#ifdef HAS_FORMATS_ITT3030_DSK
	en.add(FLOPPY_ITT3030_FORMAT); // itt3030_dsk.h
#endif

	en.category("Juku");
#ifdef HAS_FORMATS_JUKU_DSK
	en.add(FLOPPY_JUKU_FORMAT); // juku_dsk.h
#endif

	en.category("CoCo");
#ifdef HAS_FORMATS_COCO_CAS
	en.add(coco_cassette_formats); // coco_cas.h
	en.add(alice32_cassette_formats); // coco_cas.h
#endif
#ifdef HAS_FORMATS_JVC_DSK
	en.add(FLOPPY_JVC_FORMAT); // jvc_dsk.h
#endif
#ifdef HAS_FORMATS_OS9_DSK
	en.add(FLOPPY_OS9_FORMAT); // os9_dsk.h
#endif
#ifdef HAS_FORMATS_VDK_DSK
	en.add(FLOPPY_VDK_FORMAT); // vdk_dsk.h
#endif
#ifdef HAS_FORMATS_SDF_DSK
	en.add(FLOPPY_SDF_FORMAT); // sdf_dsk.h
#endif
#ifdef HAS_FORMATS_TRS80_DSK
	en.add(FLOPPY_TRS80_FORMAT); // trs80_dsk.h
#endif

	en.category("Kaypro");
#ifdef HAS_FORMATS_KAYPRO_DSK
	en.add(FLOPPY_KAYPROII_FORMAT); // kaypro_dsk.h
	en.add(FLOPPY_KAYPRO2X_FORMAT); // kaypro_dsk.h
#endif

	en.category("KC85");
#ifdef HAS_FORMATS_KC85_DSK
	en.add(FLOPPY_KC85_FORMAT); // kc85_dsk.h
#endif

	en.category("Olivetti");
#ifdef HAS_FORMATS_M20_DSK
	en.add(FLOPPY_M20_FORMAT); // m20_dsk.h
#endif

	en.category("Sord M5");
#ifdef HAS_FORMATS_SORD_CAS
	en.add(sordm5_cassette_formats); // sord_cas.h
#endif
#ifdef HAS_FORMATS_M5_DSK
	en.add(FLOPPY_M5_FORMAT); // m5_dsk.h
#endif

	en.category("Motorola MDOS");
#ifdef HAS_FORMATS_MDOS_DSK
	en.add(FLOPPY_MDOS_FORMAT); // mdos_dsk.h
#endif

	en.category("MikroMikko");
#ifdef HAS_FORMATS_MM_DSK
	en.add(FLOPPY_MM1_FORMAT); // mm_dsk.h
	en.add(FLOPPY_MM2_FORMAT); // mm_dsk.h
#endif

	en.category("Elektronika");
#ifdef HAS_FORMATS_MS0515_DSK
	en.add(FLOPPY_MS0515_FORMAT); // ms0515_dsk.h
#endif

	en.category("MSX");
#ifdef HAS_FORMATS_FMSX_CAS
	en.add(fmsx_cassette_formats); // fmsx_cas.h
#endif
#ifdef HAS_FORMATS_MSX_DSK
	en.add(FLOPPY_MSX_FORMAT); // msx_dsk.h
#endif

	en.category("MTX");
#ifdef HAS_FORMATS_MTX_DSK
	en.add(FLOPPY_MTX_FORMAT); // mtx_dsk.h
#endif

	en.category("Nanos");
#ifdef HAS_FORMATS_NANOS_DSK
	en.add(FLOPPY_NANOS_FORMAT); // nanos_dsk.h
#endif

	en.category("Nascom");
#ifdef HAS_FORMATS_NASCOM_DSK
	en.add(FLOPPY_NASCOM_FORMAT); // nascom_dsk.h
#endif

	en.category("Oric");
#ifdef HAS_FORMATS_ORIC_TAP
	en.add(oric_cassette_formats); // oric_tap.h
#endif
#ifdef HAS_FORMATS_ORIC_DSK
	en.add(FLOPPY_ORIC_DSK_FORMAT); // oric_dsk.h
#endif

	en.category("Atari");
#ifdef HAS_FORMATS_A26_CAS
	en.add(a26_cassette_formats); // a26_cas.h
#endif
#ifdef HAS_FORMATS_ST_DSK
	en.add(FLOPPY_ST_FORMAT); // st_dsk.h
	en.add(FLOPPY_MSA_FORMAT); // st_dsk.h
#endif
#ifdef HAS_FORMATS_PASTI_DSK
	en.add(FLOPPY_PASTI_FORMAT); // pasti_dsk.h
#endif

	en.category("PK 8020");
#ifdef HAS_FORMATS_PK8020_DSK
	en.add(FLOPPY_PK8020_FORMAT); // pk8020_dsk.h
#endif

	en.category("Poly");
#ifdef HAS_FORMATS_POLY_DSK
	en.add(FLOPPY_POLY_CPM_FORMAT); // poly_dsk.h
#endif

	en.category("Eltek Eurocom");
#ifdef HAS_FORMATS_PPG_DSK
	en.add(FLOPPY_PPG_FORMAT); // ppg_dsk.h
#endif

	en.category("Pyldin");
#ifdef HAS_FORMATS_PYLDIN_DSK
	en.add(FLOPPY_PYLDIN_FORMAT); // pyldin_dsk.h
#endif

	en.category("DEC");
#ifdef HAS_FORMATS_RX50_DSK
	en.add(FLOPPY_RX50IMG_FORMAT); // rx50_dsk.h
#endif

	en.category("Sega");
#ifdef HAS_FORMATS_SF7000_DSK
	en.add(FLOPPY_SF7000_FORMAT); // sf7000_dsk.h
#endif

	en.category("Specialist");
#ifdef HAS_FORMATS_SMX_DSK
	en.add(FLOPPY_SMX_FORMAT); // smx_dsk.h
#endif

	en.category("Spectravideo");
#ifdef HAS_FORMATS_SVI_CAS
	en.add(svi_cassette_formats); // svi_cas.h
#endif
#ifdef HAS_FORMATS_SVI_DSK
	en.add(FLOPPY_SVI_FORMAT); // svi_dsk.h
#endif

	en.category("Tandy");
#ifdef HAS_FORMATS_TRS_CAS
	en.add(trs80l2_cassette_formats); // trs_cas.h
#endif
#ifdef HAS_FORMATS_TANDY2K_DSK
	en.add(FLOPPY_TANDY_2000_FORMAT); // tandy2k_dsk.h
#endif

	en.category("Thomson");
#ifdef HAS_FORMATS_THOM_CAS
	en.add(to7_cassette_formats); // thom_cas.h
	en.add(mo5_cassette_formats); // thom_cas.h
#endif

	en.category("Texas Instruments");
#ifdef HAS_FORMATS_TI99_DSK
	en.add(FLOPPY_TI99_SDF_FORMAT); // ti99_dsk.h
	en.add(FLOPPY_TI99_TDF_FORMAT); // ti99_dsk.h
#endif

	en.category("Tiki 100");
#ifdef HAS_FORMATS_TIKI100_DSK
	en.add(FLOPPY_TIKI100_FORMAT); // tiki100_dsk.h
#endif

	en.category("Videoton");
#ifdef HAS_FORMATS_TVC_CAS
	en.add(tvc64_cassette_formats); // tvc_cas.h
#endif
#ifdef HAS_FORMATS_TVC_DSK
	en.add(FLOPPY_TVC_FORMAT); // tvc_dsk.h
#endif

	en.category("SWTPC");
#ifdef HAS_FORMATS_UNIFLEX_DSK
	en.add(FLOPPY_UNIFLEX_FORMAT); // uniflex_dsk.h
#endif

	en.category("Vector 06");
#ifdef HAS_FORMATS_VECTOR06_DSK
	en.add(FLOPPY_VECTOR06_FORMAT); // vector06_dsk.h
#endif

	en.category("Victor");
#ifdef HAS_FORMATS_VICTOR9K_DSK
	en.add(FLOPPY_VICTOR_9000_FORMAT); // victor9k_dsk.h
#endif

	en.category("Jupiter ACE");
#ifdef HAS_FORMATS_ACE_TAP
	en.add(ace_cassette_formats); // ace_tap.h
#endif

	en.category("APF");
#ifdef HAS_FORMATS_APF_APT
	en.add(apf_cassette_formats); // apf_apt.h
#endif

	en.category("Mattel");
#ifdef HAS_FORMATS_AQUARIUS_CAQ
	en.add(aquarius_cassette_formats); // aquarius_caq.h
#endif

	en.category("Goldstar");
#ifdef HAS_FORMATS_FC100_CAS
	en.add(fc100_cassette_formats); // fc100_cas.h
#endif

	en.category("Fujitsu");
#ifdef HAS_FORMATS_FM7_CAS
	en.add(fm7_cassette_formats); // fm7_cas.h
#endif

	en.category("Galaksija");
#ifdef HAS_FORMATS_GTP_CAS
	en.add(gtp_cassette_formats); // gtp_cas.h
#endif

	en.category("Heathkit");
#ifdef HAS_FORMATS_H8_CAS
	en.add(h8_cassette_formats); // h8_cas.h
#endif

	en.category("KC 85");
#ifdef HAS_FORMATS_KC_CAS
	en.add(kc_cassette_formats); // kc_cas.h
#endif

	en.category("KIM 1");
#ifdef HAS_FORMATS_KIM1_CAS
	en.add(kim1_cassette_formats); // kim1_cas.h
#endif

	en.category("Lviv");
#ifdef HAS_FORMATS_LVIV_LVT
	en.add(lviv_lvt_format); // lviv_lvt.h
#endif

	en.category("Microbee");
#ifdef HAS_FORMATS_MBEE_CAS
	en.add(mbee_cassette_formats); // mbee_cas.h
#endif

	en.category("Orao");
#ifdef HAS_FORMATS_ORAO_CAS
	en.add(orao_cassette_formats); // orao_cas.h
#endif

	en.category("Philips");
#ifdef HAS_FORMATS_VG5K_CAS
	en.add(vg5k_cassette_formats); // vg5k_cas.h
#endif
#ifdef HAS_FORMATS_P2000T_CAS
	en.add(p2000t_cassette_formats); // p2000t_cas.h
#endif

	en.category("NEC");
#ifdef HAS_FORMATS_P6001_CAS
	en.add(pc6001_cassette_formats); // p6001_cas.h
#endif

	en.category("Sanyo");
#ifdef HAS_FORMATS_PHC25_CAS
	en.add(phc25_cassette_formats); // phc25_cas.h
#endif

	en.category("Tesla");
#ifdef HAS_FORMATS_PMD_CAS
	en.add(pmd85_cassette_formats); // pmd_cas.h
#endif

	en.category("Microkey");
#ifdef HAS_FORMATS_PRIMOPTP
	en.add(primo_ptp_format); // primoptp.h
#endif

	en.category("UT 88");
#ifdef HAS_FORMATS_RK_CAS
	en.add(rku_cassette_formats); // rk_cas.h
	en.add(rk8_cassette_formats); // rk_cas.h
	en.add(rks_cassette_formats); // rk_cas.h
	en.add(rko_cassette_formats); // rk_cas.h
	en.add(rkr_cassette_formats); // rk_cas.h
	en.add(rka_cassette_formats); // rk_cas.h
	en.add(rkm_cassette_formats); // rk_cas.h
	en.add(rkp_cassette_formats); // rk_cas.h
	en.add(gam_cassette_formats); // rk_cas.h
#endif

	en.category("SG 1000");
#ifdef HAS_FORMATS_SC3000_BIT
	en.add(sc3000_cassette_formats); // sc3000_bit.h
#endif

	en.category("Sol 20");
#ifdef HAS_FORMATS_SOL_CAS
	en.add(sol20_cassette_formats); // sol_cas.h
#endif

	en.category("Exidy");
#ifdef HAS_FORMATS_SORC_CAS
	en.add(sorcerer_cassette_formats); // sorc_cas.h
#endif

	en.category("Samsung");
#ifdef HAS_FORMATS_SPC1000_CAS
	en.add(spc1000_cassette_formats); // spc1000_cas.h
#endif

	en.category("Video Technology");
#ifdef HAS_FORMATS_VT_CAS
	en.add(vtech1_cassette_formats); // vt_cas.h
	en.add(vtech2_cassette_formats); // vt_cas.h
#endif

	en.category("Canon");
#ifdef HAS_FORMATS_X07_CAS
	en.add(x07_cassette_formats); // x07_cas.h
#endif
}
