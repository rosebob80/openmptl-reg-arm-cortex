/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9AF13xL.svd"
//
//  name: MB9AF13xL
//  version: 1.7
//  description: MB9AF13xL
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
#define ARCH_REG_ADDRESS_MAP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register_type.hpp>

namespace mptl {

template<reg_addr_t addr>
struct address_map {
  static constexpr const char * name_str = nullptr;
};

template<> struct address_map< 0x40000000 > { static constexpr const char * name_str = "FLASH_IF::FASZR"; };
template<> struct address_map< 0x40000008 > { static constexpr const char * name_str = "FLASH_IF::FSTR"; };
template<> struct address_map< 0x40000010 > { static constexpr const char * name_str = "FLASH_IF::FSYNDN"; };
template<> struct address_map< 0x40000100 > { static constexpr const char * name_str = "FLASH_IF::CRTRMM"; };
template<> struct address_map< 0x40010000 > { static constexpr const char * name_str = "CRG::SCM_CTL"; };
template<> struct address_map< 0x40010004 > { static constexpr const char * name_str = "CRG::SCM_STR"; };
template<> struct address_map< 0x40010008 > { static constexpr const char * name_str = "CRG::STB_CTL"; };
template<> struct address_map< 0x4001000c > { static constexpr const char * name_str = "CRG::RST_STR"; };
template<> struct address_map< 0x40010010 > { static constexpr const char * name_str = "CRG::BSC_PSR"; };
template<> struct address_map< 0x40010014 > { static constexpr const char * name_str = "CRG::APBC0_PSR"; };
template<> struct address_map< 0x40010018 > { static constexpr const char * name_str = "CRG::APBC1_PSR"; };
template<> struct address_map< 0x4001001c > { static constexpr const char * name_str = "CRG::APBC2_PSR"; };
template<> struct address_map< 0x40010020 > { static constexpr const char * name_str = "CRG::SWC_PSR"; };
template<> struct address_map< 0x40010028 > { static constexpr const char * name_str = "CRG::TTC_PSR"; };
template<> struct address_map< 0x40010030 > { static constexpr const char * name_str = "CRG::CSW_TMR"; };
template<> struct address_map< 0x40010034 > { static constexpr const char * name_str = "CRG::PSW_TMR"; };
template<> struct address_map< 0x40010038 > { static constexpr const char * name_str = "CRG::PLL_CTL1"; };
template<> struct address_map< 0x4001003c > { static constexpr const char * name_str = "CRG::PLL_CTL2"; };
template<> struct address_map< 0x40010040 > { static constexpr const char * name_str = "CRG::CSV_CTL"; };
template<> struct address_map< 0x40010044 > { static constexpr const char * name_str = "CRG::CSV_STR"; };
template<> struct address_map< 0x40010048 > { static constexpr const char * name_str = "CRG::FCSWH_CTL"; };
template<> struct address_map< 0x4001004c > { static constexpr const char * name_str = "CRG::FCSWL_CTL"; };
template<> struct address_map< 0x40010050 > { static constexpr const char * name_str = "CRG::FCSWD_CTL"; };
template<> struct address_map< 0x40010054 > { static constexpr const char * name_str = "CRG::DBWDT_CTL"; };
template<> struct address_map< 0x40010060 > { static constexpr const char * name_str = "CRG::INT_ENR"; };
template<> struct address_map< 0x40010064 > { static constexpr const char * name_str = "CRG::INT_STR"; };
template<> struct address_map< 0x40010068 > { static constexpr const char * name_str = "CRG::INT_CLR"; };
template<> struct address_map< 0x40011000 > { static constexpr const char * name_str = "HWWDT::WDG_LDR"; };
template<> struct address_map< 0x40011004 > { static constexpr const char * name_str = "HWWDT::WDG_VLR"; };
template<> struct address_map< 0x40011008 > { static constexpr const char * name_str = "HWWDT::WDG_CTL"; };
template<> struct address_map< 0x4001100c > { static constexpr const char * name_str = "HWWDT::WDG_ICL"; };
template<> struct address_map< 0x40011010 > { static constexpr const char * name_str = "HWWDT::WDG_RIS"; };
template<> struct address_map< 0x40011c00 > { static constexpr const char * name_str = "HWWDT::WDG_LCK"; };
template<> struct address_map< 0x40012000 > { static constexpr const char * name_str = "SWWDT::WDOGLOAD"; };
template<> struct address_map< 0x40012004 > { static constexpr const char * name_str = "SWWDT::WDOGVALUE"; };
template<> struct address_map< 0x40012008 > { static constexpr const char * name_str = "SWWDT::WDOGCONTROL"; };
template<> struct address_map< 0x4001200c > { static constexpr const char * name_str = "SWWDT::WDOGINTCLR"; };
template<> struct address_map< 0x40012010 > { static constexpr const char * name_str = "SWWDT::WDOGRIS"; };
template<> struct address_map< 0x40012c00 > { static constexpr const char * name_str = "SWWDT::WDOGLOCK"; };
template<> struct address_map< 0x40020000 > { static constexpr const char * name_str = "MFT0::OCU_OCCP0"; };
template<> struct address_map< 0x40020004 > { static constexpr const char * name_str = "MFT0::OCU_OCCP1"; };
template<> struct address_map< 0x40020008 > { static constexpr const char * name_str = "MFT0::OCU_OCCP2"; };
template<> struct address_map< 0x4002000c > { static constexpr const char * name_str = "MFT0::OCU_OCCP3"; };
template<> struct address_map< 0x40020010 > { static constexpr const char * name_str = "MFT0::OCU_OCCP4"; };
template<> struct address_map< 0x40020014 > { static constexpr const char * name_str = "MFT0::OCU_OCCP5"; };
template<> struct address_map< 0x40020018 > { static constexpr const char * name_str = "MFT0::OCU_OCSA10"; };
template<> struct address_map< 0x40020019 > { static constexpr const char * name_str = "MFT0::OCU_OCSB10"; };
template<> struct address_map< 0x4002001c > { static constexpr const char * name_str = "MFT0::OCU_OCSA32"; };
template<> struct address_map< 0x4002001d > { static constexpr const char * name_str = "MFT0::OCU_OCSB32"; };
template<> struct address_map< 0x40020020 > { static constexpr const char * name_str = "MFT0::OCU_OCSA54"; };
template<> struct address_map< 0x40020021 > { static constexpr const char * name_str = "MFT0::OCU_OCSB54"; };
template<> struct address_map< 0x40020024 > { static constexpr const char * name_str = "MFT0::OCU_OCSC"; };
template<> struct address_map< 0x40020028 > { static constexpr const char * name_str = "MFT0::FRT_TCCP0"; };
template<> struct address_map< 0x4002002c > { static constexpr const char * name_str = "MFT0::FRT_TCDT0"; };
template<> struct address_map< 0x40020030 > { static constexpr const char * name_str = "MFT0::FRT_TCSA0"; };
template<> struct address_map< 0x40020034 > { static constexpr const char * name_str = "MFT0::FRT_TCSB0"; };
template<> struct address_map< 0x40020038 > { static constexpr const char * name_str = "MFT0::FRT_TCCP1"; };
template<> struct address_map< 0x4002003c > { static constexpr const char * name_str = "MFT0::FRT_TCDT1"; };
template<> struct address_map< 0x40020040 > { static constexpr const char * name_str = "MFT0::FRT_TCSA1"; };
template<> struct address_map< 0x40020044 > { static constexpr const char * name_str = "MFT0::FRT_TCSB1"; };
template<> struct address_map< 0x40020048 > { static constexpr const char * name_str = "MFT0::FRT_TCCP2"; };
template<> struct address_map< 0x4002004c > { static constexpr const char * name_str = "MFT0::FRT_TCDT2"; };
template<> struct address_map< 0x40020050 > { static constexpr const char * name_str = "MFT0::FRT_TCSA2"; };
template<> struct address_map< 0x40020054 > { static constexpr const char * name_str = "MFT0::FRT_TCSB2"; };
template<> struct address_map< 0x40020058 > { static constexpr const char * name_str = "MFT0::OCU_OCFS10"; };
template<> struct address_map< 0x40020059 > { static constexpr const char * name_str = "MFT0::OCU_OCFS32"; };
template<> struct address_map< 0x4002005c > { static constexpr const char * name_str = "MFT0::OCU_OCFS54"; };
template<> struct address_map< 0x40020060 > { static constexpr const char * name_str = "MFT0::ICU_ICFS10"; };
template<> struct address_map< 0x40020061 > { static constexpr const char * name_str = "MFT0::ICU_ICFS32"; };
template<> struct address_map< 0x40020068 > { static constexpr const char * name_str = "MFT0::ICU_ICCP0"; };
template<> struct address_map< 0x4002006c > { static constexpr const char * name_str = "MFT0::ICU_ICCP1"; };
template<> struct address_map< 0x40020070 > { static constexpr const char * name_str = "MFT0::ICU_ICCP2"; };
template<> struct address_map< 0x40020074 > { static constexpr const char * name_str = "MFT0::ICU_ICCP3"; };
template<> struct address_map< 0x40020078 > { static constexpr const char * name_str = "MFT0::ICU_ICSA10"; };
template<> struct address_map< 0x40020079 > { static constexpr const char * name_str = "MFT0::ICU_ICSB10"; };
template<> struct address_map< 0x4002007c > { static constexpr const char * name_str = "MFT0::ICU_ICSA32"; };
template<> struct address_map< 0x4002007d > { static constexpr const char * name_str = "MFT0::ICU_ICSB32"; };
template<> struct address_map< 0x40020080 > { static constexpr const char * name_str = "MFT0::WFG_WFTM10"; };
template<> struct address_map< 0x40020084 > { static constexpr const char * name_str = "MFT0::WFG_WFTM32"; };
template<> struct address_map< 0x40020088 > { static constexpr const char * name_str = "MFT0::WFG_WFTM54"; };
template<> struct address_map< 0x4002008c > { static constexpr const char * name_str = "MFT0::WFG_WFSA10"; };
template<> struct address_map< 0x40020090 > { static constexpr const char * name_str = "MFT0::WFG_WFSA32"; };
template<> struct address_map< 0x40020094 > { static constexpr const char * name_str = "MFT0::WFG_WFSA54"; };
template<> struct address_map< 0x40020098 > { static constexpr const char * name_str = "MFT0::WFG_WFIR"; };
template<> struct address_map< 0x4002009c > { static constexpr const char * name_str = "MFT0::WFG_NZCL"; };
template<> struct address_map< 0x400200a0 > { static constexpr const char * name_str = "MFT0::ADCMP_ACCP0"; };
template<> struct address_map< 0x400200a4 > { static constexpr const char * name_str = "MFT0::ADCMP_ACCPDN0"; };
template<> struct address_map< 0x400200a8 > { static constexpr const char * name_str = "MFT0::ADCMP_ACCP1"; };
template<> struct address_map< 0x400200ac > { static constexpr const char * name_str = "MFT0::ADCMP_ACCPDN1"; };
template<> struct address_map< 0x400200b0 > { static constexpr const char * name_str = "MFT0::ADCMP_ACCP2"; };
template<> struct address_map< 0x400200b4 > { static constexpr const char * name_str = "MFT0::ADCMP_ACCPDN2"; };
template<> struct address_map< 0x400200b8 > { static constexpr const char * name_str = "MFT0::ADCMP_ACSB"; };
template<> struct address_map< 0x400200bc > { static constexpr const char * name_str = "MFT0::ADCMP_ACSA"; };
template<> struct address_map< 0x400200c0 > { static constexpr const char * name_str = "MFT0::ADCMP_ATSA"; };
template<> struct address_map< 0x40024000 > { static constexpr const char * name_str = "MFT_PPG::TTCR0"; };
template<> struct address_map< 0x40024008 > { static constexpr const char * name_str = "MFT_PPG::COMP0"; };
template<> struct address_map< 0x4002400c > { static constexpr const char * name_str = "MFT_PPG::COMP2"; };
template<> struct address_map< 0x40024010 > { static constexpr const char * name_str = "MFT_PPG::COMP4"; };
template<> struct address_map< 0x40024014 > { static constexpr const char * name_str = "MFT_PPG::COMP6"; };
template<> struct address_map< 0x40024100 > { static constexpr const char * name_str = "MFT_PPG::TRG"; };
template<> struct address_map< 0x40024104 > { static constexpr const char * name_str = "MFT_PPG::REVC"; };
template<> struct address_map< 0x40024200 > { static constexpr const char * name_str = "MFT_PPG::PPGC1"; };
template<> struct address_map< 0x40024201 > { static constexpr const char * name_str = "MFT_PPG::PPGC0"; };
template<> struct address_map< 0x40024204 > { static constexpr const char * name_str = "MFT_PPG::PPGC3"; };
template<> struct address_map< 0x40024205 > { static constexpr const char * name_str = "MFT_PPG::PPGC2"; };
template<> struct address_map< 0x40024208 > { static constexpr const char * name_str = "MFT_PPG::PRLL0"; };
template<> struct address_map< 0x40024209 > { static constexpr const char * name_str = "MFT_PPG::PRLH0"; };
template<> struct address_map< 0x4002420c > { static constexpr const char * name_str = "MFT_PPG::PRLL1"; };
template<> struct address_map< 0x4002420d > { static constexpr const char * name_str = "MFT_PPG::PRLH1"; };
template<> struct address_map< 0x40024210 > { static constexpr const char * name_str = "MFT_PPG::PRLL2"; };
template<> struct address_map< 0x40024211 > { static constexpr const char * name_str = "MFT_PPG::PRLH2"; };
template<> struct address_map< 0x40024214 > { static constexpr const char * name_str = "MFT_PPG::PRLL3"; };
template<> struct address_map< 0x40024215 > { static constexpr const char * name_str = "MFT_PPG::PRLH3"; };
template<> struct address_map< 0x40024218 > { static constexpr const char * name_str = "MFT_PPG::GATEC0"; };
template<> struct address_map< 0x40024240 > { static constexpr const char * name_str = "MFT_PPG::PPGC5"; };
template<> struct address_map< 0x40024241 > { static constexpr const char * name_str = "MFT_PPG::PPGC4"; };
template<> struct address_map< 0x40024244 > { static constexpr const char * name_str = "MFT_PPG::PPGC7"; };
template<> struct address_map< 0x40024245 > { static constexpr const char * name_str = "MFT_PPG::PPGC6"; };
template<> struct address_map< 0x40024248 > { static constexpr const char * name_str = "MFT_PPG::PRLL4"; };
template<> struct address_map< 0x40024249 > { static constexpr const char * name_str = "MFT_PPG::PRLH4"; };
template<> struct address_map< 0x4002424c > { static constexpr const char * name_str = "MFT_PPG::PRLL5"; };
template<> struct address_map< 0x4002424d > { static constexpr const char * name_str = "MFT_PPG::PRLH5"; };
template<> struct address_map< 0x40024250 > { static constexpr const char * name_str = "MFT_PPG::PRLL6"; };
template<> struct address_map< 0x40024251 > { static constexpr const char * name_str = "MFT_PPG::PRLH6"; };
template<> struct address_map< 0x40024254 > { static constexpr const char * name_str = "MFT_PPG::PRLL7"; };
template<> struct address_map< 0x40024255 > { static constexpr const char * name_str = "MFT_PPG::PRLH7"; };
template<> struct address_map< 0x40024258 > { static constexpr const char * name_str = "MFT_PPG::GATEC4"; };
template<> struct address_map< 0x40025000 > { static constexpr const char * name_str = "BT0::RT_PCSR"; };  /* svd2hpp: duplicate address for: BT0::PPG_PRLL, BT0::PWM_PCSR, BT0::RT_PCSR */
template<> struct address_map< 0x40025004 > { static constexpr const char * name_str = "BT0::PWC_DTBF"; };  /* svd2hpp: duplicate address for: BT0::PPG_PRLH, BT0::PWC_DTBF, BT0::PWM_PDUT */
template<> struct address_map< 0x40025008 > { static constexpr const char * name_str = "BT0::RT_TMR"; };  /* svd2hpp: duplicate address for: BT0::PPG_TMR, BT0::PWM_TMR, BT0::RT_TMR */
template<> struct address_map< 0x4002500c > { static constexpr const char * name_str = "BT0::RT_TMCR"; };  /* svd2hpp: duplicate address for: BT0::PPG_TMCR, BT0::PWC_TMCR, BT0::PWM_TMCR, BT0::RT_TMCR */
template<> struct address_map< 0x40025010 > { static constexpr const char * name_str = "BT0::RT_STC"; };  /* svd2hpp: duplicate address for: BT0::PPG_STC, BT0::PWC_STC, BT0::PWM_STC, BT0::RT_STC */
template<> struct address_map< 0x40025011 > { static constexpr const char * name_str = "BT0::RT_TMCR2"; };  /* svd2hpp: duplicate address for: BT0::PPG_TMCR2, BT0::PWC_TMCR2, BT0::PWM_TMCR2, BT0::RT_TMCR2 */
template<> struct address_map< 0x40025040 > { static constexpr const char * name_str = "BT1::RT_PCSR"; };  /* svd2hpp: duplicate address for: BT1::PPG_PRLL, BT1::PWM_PCSR, BT1::RT_PCSR */
template<> struct address_map< 0x40025044 > { static constexpr const char * name_str = "BT1::PWC_DTBF"; };  /* svd2hpp: duplicate address for: BT1::PPG_PRLH, BT1::PWC_DTBF, BT1::PWM_PDUT */
template<> struct address_map< 0x40025048 > { static constexpr const char * name_str = "BT1::RT_TMR"; };  /* svd2hpp: duplicate address for: BT1::PPG_TMR, BT1::PWM_TMR, BT1::RT_TMR */
template<> struct address_map< 0x4002504c > { static constexpr const char * name_str = "BT1::RT_TMCR"; };  /* svd2hpp: duplicate address for: BT1::PPG_TMCR, BT1::PWC_TMCR, BT1::PWM_TMCR, BT1::RT_TMCR */
template<> struct address_map< 0x40025050 > { static constexpr const char * name_str = "BT1::RT_STC"; };  /* svd2hpp: duplicate address for: BT1::PPG_STC, BT1::PWC_STC, BT1::PWM_STC, BT1::RT_STC */
template<> struct address_map< 0x40025051 > { static constexpr const char * name_str = "BT1::RT_TMCR2"; };  /* svd2hpp: duplicate address for: BT1::PPG_TMCR2, BT1::PWC_TMCR2, BT1::PWM_TMCR2, BT1::RT_TMCR2 */
template<> struct address_map< 0x40025080 > { static constexpr const char * name_str = "BT2::RT_PCSR"; };  /* svd2hpp: duplicate address for: BT2::PPG_PRLL, BT2::PWM_PCSR, BT2::RT_PCSR */
template<> struct address_map< 0x40025084 > { static constexpr const char * name_str = "BT2::PWC_DTBF"; };  /* svd2hpp: duplicate address for: BT2::PPG_PRLH, BT2::PWC_DTBF, BT2::PWM_PDUT */
template<> struct address_map< 0x40025088 > { static constexpr const char * name_str = "BT2::RT_TMR"; };  /* svd2hpp: duplicate address for: BT2::PPG_TMR, BT2::PWM_TMR, BT2::RT_TMR */
template<> struct address_map< 0x4002508c > { static constexpr const char * name_str = "BT2::RT_TMCR"; };  /* svd2hpp: duplicate address for: BT2::PPG_TMCR, BT2::PWC_TMCR, BT2::PWM_TMCR, BT2::RT_TMCR */
template<> struct address_map< 0x40025090 > { static constexpr const char * name_str = "BT2::RT_STC"; };  /* svd2hpp: duplicate address for: BT2::PPG_STC, BT2::PWC_STC, BT2::PWM_STC, BT2::RT_STC */
template<> struct address_map< 0x40025091 > { static constexpr const char * name_str = "BT2::RT_TMCR2"; };  /* svd2hpp: duplicate address for: BT2::PPG_TMCR2, BT2::PWC_TMCR2, BT2::PWM_TMCR2, BT2::RT_TMCR2 */
template<> struct address_map< 0x400250c0 > { static constexpr const char * name_str = "BT3::RT_PCSR"; };  /* svd2hpp: duplicate address for: BT3::PPG_PRLL, BT3::PWM_PCSR, BT3::RT_PCSR */
template<> struct address_map< 0x400250c4 > { static constexpr const char * name_str = "BT3::PWC_DTBF"; };  /* svd2hpp: duplicate address for: BT3::PPG_PRLH, BT3::PWC_DTBF, BT3::PWM_PDUT */
template<> struct address_map< 0x400250c8 > { static constexpr const char * name_str = "BT3::RT_TMR"; };  /* svd2hpp: duplicate address for: BT3::PPG_TMR, BT3::PWM_TMR, BT3::RT_TMR */
template<> struct address_map< 0x400250cc > { static constexpr const char * name_str = "BT3::RT_TMCR"; };  /* svd2hpp: duplicate address for: BT3::PPG_TMCR, BT3::PWC_TMCR, BT3::PWM_TMCR, BT3::RT_TMCR */
template<> struct address_map< 0x400250d0 > { static constexpr const char * name_str = "BT3::RT_STC"; };  /* svd2hpp: duplicate address for: BT3::PPG_STC, BT3::PWC_STC, BT3::PWM_STC, BT3::RT_STC */
template<> struct address_map< 0x400250d1 > { static constexpr const char * name_str = "BT3::RT_TMCR2"; };  /* svd2hpp: duplicate address for: BT3::PPG_TMCR2, BT3::PWC_TMCR2, BT3::PWM_TMCR2, BT3::RT_TMCR2 */
template<> struct address_map< 0x40025100 > { static constexpr const char * name_str = "BTIOSEL03::BTSEL0123"; };
template<> struct address_map< 0x40025200 > { static constexpr const char * name_str = "BT4::RT_PCSR"; };  /* svd2hpp: duplicate address for: BT4::PPG_PRLL, BT4::PWM_PCSR, BT4::RT_PCSR */
template<> struct address_map< 0x40025204 > { static constexpr const char * name_str = "BT4::PWC_DTBF"; };  /* svd2hpp: duplicate address for: BT4::PPG_PRLH, BT4::PWC_DTBF, BT4::PWM_PDUT */
template<> struct address_map< 0x40025208 > { static constexpr const char * name_str = "BT4::RT_TMR"; };  /* svd2hpp: duplicate address for: BT4::PPG_TMR, BT4::PWM_TMR, BT4::RT_TMR */
template<> struct address_map< 0x4002520c > { static constexpr const char * name_str = "BT4::RT_TMCR"; };  /* svd2hpp: duplicate address for: BT4::PPG_TMCR, BT4::PWC_TMCR, BT4::PWM_TMCR, BT4::RT_TMCR */
template<> struct address_map< 0x40025210 > { static constexpr const char * name_str = "BT4::RT_STC"; };  /* svd2hpp: duplicate address for: BT4::PPG_STC, BT4::PWC_STC, BT4::PWM_STC, BT4::RT_STC */
template<> struct address_map< 0x40025211 > { static constexpr const char * name_str = "BT4::RT_TMCR2"; };  /* svd2hpp: duplicate address for: BT4::PPG_TMCR2, BT4::PWC_TMCR2, BT4::PWM_TMCR2, BT4::RT_TMCR2 */
template<> struct address_map< 0x40025240 > { static constexpr const char * name_str = "BT5::RT_PCSR"; };  /* svd2hpp: duplicate address for: BT5::PPG_PRLL, BT5::PWM_PCSR, BT5::RT_PCSR */
template<> struct address_map< 0x40025244 > { static constexpr const char * name_str = "BT5::PWC_DTBF"; };  /* svd2hpp: duplicate address for: BT5::PPG_PRLH, BT5::PWC_DTBF, BT5::PWM_PDUT */
template<> struct address_map< 0x40025248 > { static constexpr const char * name_str = "BT5::RT_TMR"; };  /* svd2hpp: duplicate address for: BT5::PPG_TMR, BT5::PWM_TMR, BT5::RT_TMR */
template<> struct address_map< 0x4002524c > { static constexpr const char * name_str = "BT5::RT_TMCR"; };  /* svd2hpp: duplicate address for: BT5::PPG_TMCR, BT5::PWC_TMCR, BT5::PWM_TMCR, BT5::RT_TMCR */
template<> struct address_map< 0x40025250 > { static constexpr const char * name_str = "BT5::RT_STC"; };  /* svd2hpp: duplicate address for: BT5::PPG_STC, BT5::PWC_STC, BT5::PWM_STC, BT5::RT_STC */
template<> struct address_map< 0x40025251 > { static constexpr const char * name_str = "BT5::RT_TMCR2"; };  /* svd2hpp: duplicate address for: BT5::PPG_TMCR2, BT5::PWC_TMCR2, BT5::PWM_TMCR2, BT5::RT_TMCR2 */
template<> struct address_map< 0x40025280 > { static constexpr const char * name_str = "BT6::RT_PCSR"; };  /* svd2hpp: duplicate address for: BT6::PPG_PRLL, BT6::PWM_PCSR, BT6::RT_PCSR */
template<> struct address_map< 0x40025284 > { static constexpr const char * name_str = "BT6::PWC_DTBF"; };  /* svd2hpp: duplicate address for: BT6::PPG_PRLH, BT6::PWC_DTBF, BT6::PWM_PDUT */
template<> struct address_map< 0x40025288 > { static constexpr const char * name_str = "BT6::RT_TMR"; };  /* svd2hpp: duplicate address for: BT6::PPG_TMR, BT6::PWM_TMR, BT6::RT_TMR */
template<> struct address_map< 0x4002528c > { static constexpr const char * name_str = "BT6::RT_TMCR"; };  /* svd2hpp: duplicate address for: BT6::PPG_TMCR, BT6::PWC_TMCR, BT6::PWM_TMCR, BT6::RT_TMCR */
template<> struct address_map< 0x40025290 > { static constexpr const char * name_str = "BT6::RT_STC"; };  /* svd2hpp: duplicate address for: BT6::PPG_STC, BT6::PWC_STC, BT6::PWM_STC, BT6::RT_STC */
template<> struct address_map< 0x40025291 > { static constexpr const char * name_str = "BT6::RT_TMCR2"; };  /* svd2hpp: duplicate address for: BT6::PPG_TMCR2, BT6::PWC_TMCR2, BT6::PWM_TMCR2, BT6::RT_TMCR2 */
template<> struct address_map< 0x400252c0 > { static constexpr const char * name_str = "BT7::RT_PCSR"; };  /* svd2hpp: duplicate address for: BT7::PPG_PRLL, BT7::PWM_PCSR, BT7::RT_PCSR */
template<> struct address_map< 0x400252c4 > { static constexpr const char * name_str = "BT7::PWC_DTBF"; };  /* svd2hpp: duplicate address for: BT7::PPG_PRLH, BT7::PWC_DTBF, BT7::PWM_PDUT */
template<> struct address_map< 0x400252c8 > { static constexpr const char * name_str = "BT7::RT_TMR"; };  /* svd2hpp: duplicate address for: BT7::PPG_TMR, BT7::PWM_TMR, BT7::RT_TMR */
template<> struct address_map< 0x400252cc > { static constexpr const char * name_str = "BT7::RT_TMCR"; };  /* svd2hpp: duplicate address for: BT7::PPG_TMCR, BT7::PWC_TMCR, BT7::PWM_TMCR, BT7::RT_TMCR */
template<> struct address_map< 0x400252d0 > { static constexpr const char * name_str = "BT7::RT_STC"; };  /* svd2hpp: duplicate address for: BT7::PPG_STC, BT7::PWC_STC, BT7::PWM_STC, BT7::RT_STC */
template<> struct address_map< 0x400252d1 > { static constexpr const char * name_str = "BT7::RT_TMCR2"; };  /* svd2hpp: duplicate address for: BT7::PPG_TMCR2, BT7::PWC_TMCR2, BT7::PWM_TMCR2, BT7::RT_TMCR2 */
template<> struct address_map< 0x40025300 > { static constexpr const char * name_str = "BTIOSEL47::BTSEL4567"; };
template<> struct address_map< 0x40025ffc > { static constexpr const char * name_str = "SBSSR::BTSSSR"; };
template<> struct address_map< 0x40027000 > { static constexpr const char * name_str = "ADC0::ADSR"; };
template<> struct address_map< 0x40027001 > { static constexpr const char * name_str = "ADC0::ADCR"; };
template<> struct address_map< 0x40027008 > { static constexpr const char * name_str = "ADC0::SFNS"; };
template<> struct address_map< 0x40027009 > { static constexpr const char * name_str = "ADC0::SCCR"; };
template<> struct address_map< 0x4002700c > { static constexpr const char * name_str = "ADC0::SCFD"; };
template<> struct address_map< 0x40027010 > { static constexpr const char * name_str = "ADC0::SCIS2"; };
template<> struct address_map< 0x40027011 > { static constexpr const char * name_str = "ADC0::SCIS3"; };
template<> struct address_map< 0x40027014 > { static constexpr const char * name_str = "ADC0::SCIS0"; };
template<> struct address_map< 0x40027015 > { static constexpr const char * name_str = "ADC0::SCIS1"; };
template<> struct address_map< 0x40027018 > { static constexpr const char * name_str = "ADC0::PFNS"; };
template<> struct address_map< 0x40027019 > { static constexpr const char * name_str = "ADC0::PCCR"; };
template<> struct address_map< 0x4002701c > { static constexpr const char * name_str = "ADC0::PCFD"; };
template<> struct address_map< 0x40027020 > { static constexpr const char * name_str = "ADC0::PCIS"; };
template<> struct address_map< 0x40027024 > { static constexpr const char * name_str = "ADC0::CMPCR"; };
template<> struct address_map< 0x40027026 > { static constexpr const char * name_str = "ADC0::CMPD"; };
template<> struct address_map< 0x40027028 > { static constexpr const char * name_str = "ADC0::ADSS2"; };
template<> struct address_map< 0x40027029 > { static constexpr const char * name_str = "ADC0::ADSS3"; };
template<> struct address_map< 0x4002702c > { static constexpr const char * name_str = "ADC0::ADSS0"; };
template<> struct address_map< 0x4002702d > { static constexpr const char * name_str = "ADC0::ADSS1"; };
template<> struct address_map< 0x40027030 > { static constexpr const char * name_str = "ADC0::ADST1"; };
template<> struct address_map< 0x40027031 > { static constexpr const char * name_str = "ADC0::ADST0"; };
template<> struct address_map< 0x40027034 > { static constexpr const char * name_str = "ADC0::ADCT"; };
template<> struct address_map< 0x40027038 > { static constexpr const char * name_str = "ADC0::PRTSL"; };
template<> struct address_map< 0x40027039 > { static constexpr const char * name_str = "ADC0::SCTSL"; };
template<> struct address_map< 0x4002703c > { static constexpr const char * name_str = "ADC0::ADCEN"; };
template<> struct address_map< 0x4002e000 > { static constexpr const char * name_str = "CRTRIM::MCR_PSR"; };
template<> struct address_map< 0x4002e004 > { static constexpr const char * name_str = "CRTRIM::MCR_FTRM"; };
template<> struct address_map< 0x4002e00c > { static constexpr const char * name_str = "CRTRIM::MCR_RLR"; };
template<> struct address_map< 0x40030000 > { static constexpr const char * name_str = "EXTI::ENIR"; };
template<> struct address_map< 0x40030004 > { static constexpr const char * name_str = "EXTI::EIRR"; };
template<> struct address_map< 0x40030008 > { static constexpr const char * name_str = "EXTI::EICL"; };
template<> struct address_map< 0x4003000c > { static constexpr const char * name_str = "EXTI::ELVR"; };
template<> struct address_map< 0x40030014 > { static constexpr const char * name_str = "EXTI::NMIRR"; };
template<> struct address_map< 0x40030018 > { static constexpr const char * name_str = "EXTI::NMICL"; };
template<> struct address_map< 0x40031010 > { static constexpr const char * name_str = "INTREQ::EXC02MON"; };
template<> struct address_map< 0x40031014 > { static constexpr const char * name_str = "INTREQ::IRQ00MON"; };
template<> struct address_map< 0x40031018 > { static constexpr const char * name_str = "INTREQ::IRQ01MON"; };
template<> struct address_map< 0x4003101c > { static constexpr const char * name_str = "INTREQ::IRQ02MON"; };
template<> struct address_map< 0x40031020 > { static constexpr const char * name_str = "INTREQ::IRQ03MON"; };
template<> struct address_map< 0x40031024 > { static constexpr const char * name_str = "INTREQ::IRQ04MON"; };
template<> struct address_map< 0x40031028 > { static constexpr const char * name_str = "INTREQ::IRQ05MON"; };
template<> struct address_map< 0x4003102c > { static constexpr const char * name_str = "INTREQ::IRQ06MON"; };
template<> struct address_map< 0x40031030 > { static constexpr const char * name_str = "INTREQ::IRQ07MON"; };
template<> struct address_map< 0x40031034 > { static constexpr const char * name_str = "INTREQ::IRQ08MON"; };
template<> struct address_map< 0x40031038 > { static constexpr const char * name_str = "INTREQ::IRQ09MON"; };
template<> struct address_map< 0x4003103c > { static constexpr const char * name_str = "INTREQ::IRQ10MON"; };
template<> struct address_map< 0x40031040 > { static constexpr const char * name_str = "INTREQ::IRQ11MON"; };
template<> struct address_map< 0x40031044 > { static constexpr const char * name_str = "INTREQ::IRQ12MON"; };
template<> struct address_map< 0x40031048 > { static constexpr const char * name_str = "INTREQ::IRQ13MON"; };
template<> struct address_map< 0x4003104c > { static constexpr const char * name_str = "INTREQ::IRQ14MON"; };
template<> struct address_map< 0x40031050 > { static constexpr const char * name_str = "INTREQ::IRQ15MON"; };
template<> struct address_map< 0x40031054 > { static constexpr const char * name_str = "INTREQ::IRQ16MON"; };
template<> struct address_map< 0x40031058 > { static constexpr const char * name_str = "INTREQ::IRQ17MON"; };
template<> struct address_map< 0x4003105c > { static constexpr const char * name_str = "INTREQ::IRQ18MON"; };
template<> struct address_map< 0x40031060 > { static constexpr const char * name_str = "INTREQ::IRQ19MON"; };
template<> struct address_map< 0x40031064 > { static constexpr const char * name_str = "INTREQ::IRQ20MON"; };
template<> struct address_map< 0x40031068 > { static constexpr const char * name_str = "INTREQ::IRQ21MON"; };
template<> struct address_map< 0x4003106c > { static constexpr const char * name_str = "INTREQ::IRQ22MON"; };
template<> struct address_map< 0x40031070 > { static constexpr const char * name_str = "INTREQ::IRQ23MON"; };
template<> struct address_map< 0x40031074 > { static constexpr const char * name_str = "INTREQ::IRQ24MON"; };
template<> struct address_map< 0x40031078 > { static constexpr const char * name_str = "INTREQ::IRQ25MON"; };
template<> struct address_map< 0x4003107c > { static constexpr const char * name_str = "INTREQ::IRQ26MON"; };
template<> struct address_map< 0x40031080 > { static constexpr const char * name_str = "INTREQ::IRQ27MON"; };
template<> struct address_map< 0x40031084 > { static constexpr const char * name_str = "INTREQ::IRQ28MON"; };
template<> struct address_map< 0x40033000 > { static constexpr const char * name_str = "GPIO::PFR0"; };
template<> struct address_map< 0x40033004 > { static constexpr const char * name_str = "GPIO::PFR1"; };
template<> struct address_map< 0x40033008 > { static constexpr const char * name_str = "GPIO::PFR2"; };
template<> struct address_map< 0x4003300c > { static constexpr const char * name_str = "GPIO::PFR3"; };
template<> struct address_map< 0x40033010 > { static constexpr const char * name_str = "GPIO::PFR4"; };
template<> struct address_map< 0x40033014 > { static constexpr const char * name_str = "GPIO::PFR5"; };
template<> struct address_map< 0x40033018 > { static constexpr const char * name_str = "GPIO::PFR6"; };
template<> struct address_map< 0x40033020 > { static constexpr const char * name_str = "GPIO::PFR8"; };
template<> struct address_map< 0x40033038 > { static constexpr const char * name_str = "GPIO::PFRE"; };
template<> struct address_map< 0x40033100 > { static constexpr const char * name_str = "GPIO::PCR0"; };
template<> struct address_map< 0x40033104 > { static constexpr const char * name_str = "GPIO::PCR1"; };
template<> struct address_map< 0x40033108 > { static constexpr const char * name_str = "GPIO::PCR2"; };
template<> struct address_map< 0x4003310c > { static constexpr const char * name_str = "GPIO::PCR3"; };
template<> struct address_map< 0x40033110 > { static constexpr const char * name_str = "GPIO::PCR4"; };
template<> struct address_map< 0x40033114 > { static constexpr const char * name_str = "GPIO::PCR5"; };
template<> struct address_map< 0x40033118 > { static constexpr const char * name_str = "GPIO::PCR6"; };
template<> struct address_map< 0x40033138 > { static constexpr const char * name_str = "GPIO::PCRE"; };
template<> struct address_map< 0x40033200 > { static constexpr const char * name_str = "GPIO::DDR0"; };
template<> struct address_map< 0x40033204 > { static constexpr const char * name_str = "GPIO::DDR1"; };
template<> struct address_map< 0x40033208 > { static constexpr const char * name_str = "GPIO::DDR2"; };
template<> struct address_map< 0x4003320c > { static constexpr const char * name_str = "GPIO::DDR3"; };
template<> struct address_map< 0x40033210 > { static constexpr const char * name_str = "GPIO::DDR4"; };
template<> struct address_map< 0x40033214 > { static constexpr const char * name_str = "GPIO::DDR5"; };
template<> struct address_map< 0x40033218 > { static constexpr const char * name_str = "GPIO::DDR6"; };
template<> struct address_map< 0x40033220 > { static constexpr const char * name_str = "GPIO::DDR8"; };
template<> struct address_map< 0x40033238 > { static constexpr const char * name_str = "GPIO::DDRE"; };
template<> struct address_map< 0x40033300 > { static constexpr const char * name_str = "GPIO::PDIR0"; };
template<> struct address_map< 0x40033304 > { static constexpr const char * name_str = "GPIO::PDIR1"; };
template<> struct address_map< 0x40033308 > { static constexpr const char * name_str = "GPIO::PDIR2"; };
template<> struct address_map< 0x4003330c > { static constexpr const char * name_str = "GPIO::PDIR3"; };
template<> struct address_map< 0x40033310 > { static constexpr const char * name_str = "GPIO::PDIR4"; };
template<> struct address_map< 0x40033314 > { static constexpr const char * name_str = "GPIO::PDIR5"; };
template<> struct address_map< 0x40033318 > { static constexpr const char * name_str = "GPIO::PDIR6"; };
template<> struct address_map< 0x40033320 > { static constexpr const char * name_str = "GPIO::PDIR8"; };
template<> struct address_map< 0x40033338 > { static constexpr const char * name_str = "GPIO::PDIRE"; };
template<> struct address_map< 0x40033400 > { static constexpr const char * name_str = "GPIO::PDOR0"; };
template<> struct address_map< 0x40033404 > { static constexpr const char * name_str = "GPIO::PDOR1"; };
template<> struct address_map< 0x40033408 > { static constexpr const char * name_str = "GPIO::PDOR2"; };
template<> struct address_map< 0x4003340c > { static constexpr const char * name_str = "GPIO::PDOR3"; };
template<> struct address_map< 0x40033410 > { static constexpr const char * name_str = "GPIO::PDOR4"; };
template<> struct address_map< 0x40033414 > { static constexpr const char * name_str = "GPIO::PDOR5"; };
template<> struct address_map< 0x40033418 > { static constexpr const char * name_str = "GPIO::PDOR6"; };
template<> struct address_map< 0x40033420 > { static constexpr const char * name_str = "GPIO::PDOR8"; };
template<> struct address_map< 0x40033438 > { static constexpr const char * name_str = "GPIO::PDORE"; };
template<> struct address_map< 0x40033500 > { static constexpr const char * name_str = "GPIO::ADE"; };
template<> struct address_map< 0x40033580 > { static constexpr const char * name_str = "GPIO::SPSR"; };
template<> struct address_map< 0x40033600 > { static constexpr const char * name_str = "GPIO::EPFR00"; };
template<> struct address_map< 0x40033604 > { static constexpr const char * name_str = "GPIO::EPFR01"; };
template<> struct address_map< 0x40033610 > { static constexpr const char * name_str = "GPIO::EPFR04"; };
template<> struct address_map< 0x40033614 > { static constexpr const char * name_str = "GPIO::EPFR05"; };
template<> struct address_map< 0x40033618 > { static constexpr const char * name_str = "GPIO::EPFR06"; };
template<> struct address_map< 0x4003361c > { static constexpr const char * name_str = "GPIO::EPFR07"; };
template<> struct address_map< 0x40033620 > { static constexpr const char * name_str = "GPIO::EPFR08"; };
template<> struct address_map< 0x40033624 > { static constexpr const char * name_str = "GPIO::EPFR09"; };
template<> struct address_map< 0x40033700 > { static constexpr const char * name_str = "GPIO::PZR0"; };
template<> struct address_map< 0x40033704 > { static constexpr const char * name_str = "GPIO::PZR1"; };
template<> struct address_map< 0x40033708 > { static constexpr const char * name_str = "GPIO::PZR2"; };
template<> struct address_map< 0x4003370c > { static constexpr const char * name_str = "GPIO::PZR3"; };
template<> struct address_map< 0x40033710 > { static constexpr const char * name_str = "GPIO::PZR4"; };
template<> struct address_map< 0x40033714 > { static constexpr const char * name_str = "GPIO::PZR5"; };
template<> struct address_map< 0x40033718 > { static constexpr const char * name_str = "GPIO::PZR6"; };
template<> struct address_map< 0x40033720 > { static constexpr const char * name_str = "GPIO::PZR8"; };
template<> struct address_map< 0x40033738 > { static constexpr const char * name_str = "GPIO::PZRE"; };
template<> struct address_map< 0x40035000 > { static constexpr const char * name_str = "LVD::LVD_CTL"; };
template<> struct address_map< 0x40035004 > { static constexpr const char * name_str = "LVD::LVD_STR"; };
template<> struct address_map< 0x40035008 > { static constexpr const char * name_str = "LVD::LVD_CLR"; };
template<> struct address_map< 0x4003500c > { static constexpr const char * name_str = "LVD::LVD_RLR"; };
template<> struct address_map< 0x40035010 > { static constexpr const char * name_str = "LVD::LVD_STR2"; };
template<> struct address_map< 0x40035800 > { static constexpr const char * name_str = "DS::PMD_CTL"; };
template<> struct address_map< 0x40035804 > { static constexpr const char * name_str = "DS::WRFSR"; };
template<> struct address_map< 0x40035808 > { static constexpr const char * name_str = "DS::WIFSR"; };
template<> struct address_map< 0x4003580c > { static constexpr const char * name_str = "DS::WIER"; };
template<> struct address_map< 0x40035810 > { static constexpr const char * name_str = "DS::WILVR"; };
template<> struct address_map< 0x40035900 > { static constexpr const char * name_str = "DS::BUR01"; };
template<> struct address_map< 0x40035901 > { static constexpr const char * name_str = "DS::BUR02"; };
template<> struct address_map< 0x40035902 > { static constexpr const char * name_str = "DS::BUR03"; };
template<> struct address_map< 0x40035903 > { static constexpr const char * name_str = "DS::BUR04"; };
template<> struct address_map< 0x40035904 > { static constexpr const char * name_str = "DS::BUR05"; };
template<> struct address_map< 0x40035905 > { static constexpr const char * name_str = "DS::BUR06"; };
template<> struct address_map< 0x40035906 > { static constexpr const char * name_str = "DS::BUR07"; };
template<> struct address_map< 0x40035907 > { static constexpr const char * name_str = "DS::BUR08"; };
template<> struct address_map< 0x40035908 > { static constexpr const char * name_str = "DS::BUR09"; };
template<> struct address_map< 0x40035909 > { static constexpr const char * name_str = "DS::BUR10"; };
template<> struct address_map< 0x4003590a > { static constexpr const char * name_str = "DS::BUR11"; };
template<> struct address_map< 0x4003590b > { static constexpr const char * name_str = "DS::BUR12"; };
template<> struct address_map< 0x4003590c > { static constexpr const char * name_str = "DS::BUR13"; };
template<> struct address_map< 0x4003590d > { static constexpr const char * name_str = "DS::BUR14"; };
template<> struct address_map< 0x4003590e > { static constexpr const char * name_str = "DS::BUR15"; };
template<> struct address_map< 0x4003590f > { static constexpr const char * name_str = "DS::BUR16"; };
template<> struct address_map< 0x40038000 > { static constexpr const char * name_str = "MFS0::I2C_SMR"; };  /* svd2hpp: duplicate address for: MFS0::CSIO_SMR, MFS0::I2C_SMR, MFS0::UART_SMR */
template<> struct address_map< 0x40038001 > { static constexpr const char * name_str = "MFS0::I2C_IBCR"; };  /* svd2hpp: duplicate address for: MFS0::CSIO_SCR, MFS0::I2C_IBCR, MFS0::UART_SCR */
template<> struct address_map< 0x40038004 > { static constexpr const char * name_str = "MFS0::I2C_IBSR"; };  /* svd2hpp: duplicate address for: MFS0::CSIO_ESCR, MFS0::I2C_IBSR, MFS0::UART_ESCR */
template<> struct address_map< 0x40038005 > { static constexpr const char * name_str = "MFS0::I2C_SSR"; };  /* svd2hpp: duplicate address for: MFS0::CSIO_SSR, MFS0::I2C_SSR, MFS0::UART_SSR */
template<> struct address_map< 0x40038008 > { static constexpr const char * name_str = "MFS0::I2C_TDR"; };  /* svd2hpp: duplicate address for: MFS0::CSIO_RDR, MFS0::CSIO_TDR, MFS0::I2C_RDR, MFS0::I2C_TDR, MFS0::UART_RDR, MFS0::UART_TDR */
template<> struct address_map< 0x4003800c > { static constexpr const char * name_str = "MFS0::I2C_BGR"; };  /* svd2hpp: duplicate address for: MFS0::CSIO_BGR, MFS0::I2C_BGR, MFS0::UART_BGR */
template<> struct address_map< 0x40038010 > { static constexpr const char * name_str = "MFS0::I2C_ISBA"; };
template<> struct address_map< 0x40038011 > { static constexpr const char * name_str = "MFS0::I2C_ISMK"; };
template<> struct address_map< 0x40038100 > { static constexpr const char * name_str = "MFS1::I2C_SMR"; };  /* svd2hpp: duplicate address for: MFS1::CSIO_SMR, MFS1::I2C_SMR, MFS1::UART_SMR */
template<> struct address_map< 0x40038101 > { static constexpr const char * name_str = "MFS1::I2C_IBCR"; };  /* svd2hpp: duplicate address for: MFS1::CSIO_SCR, MFS1::I2C_IBCR, MFS1::UART_SCR */
template<> struct address_map< 0x40038104 > { static constexpr const char * name_str = "MFS1::I2C_IBSR"; };  /* svd2hpp: duplicate address for: MFS1::CSIO_ESCR, MFS1::I2C_IBSR, MFS1::UART_ESCR */
template<> struct address_map< 0x40038105 > { static constexpr const char * name_str = "MFS1::I2C_SSR"; };  /* svd2hpp: duplicate address for: MFS1::CSIO_SSR, MFS1::I2C_SSR, MFS1::UART_SSR */
template<> struct address_map< 0x40038108 > { static constexpr const char * name_str = "MFS1::I2C_TDR"; };  /* svd2hpp: duplicate address for: MFS1::CSIO_RDR, MFS1::CSIO_TDR, MFS1::I2C_RDR, MFS1::I2C_TDR, MFS1::UART_RDR, MFS1::UART_TDR */
template<> struct address_map< 0x4003810c > { static constexpr const char * name_str = "MFS1::I2C_BGR"; };  /* svd2hpp: duplicate address for: MFS1::CSIO_BGR, MFS1::I2C_BGR, MFS1::UART_BGR */
template<> struct address_map< 0x40038110 > { static constexpr const char * name_str = "MFS1::I2C_ISBA"; };
template<> struct address_map< 0x40038111 > { static constexpr const char * name_str = "MFS1::I2C_ISMK"; };
template<> struct address_map< 0x40038200 > { static constexpr const char * name_str = "MFS2::I2C_SMR"; };  /* svd2hpp: duplicate address for: MFS2::CSIO_SMR, MFS2::I2C_SMR, MFS2::UART_SMR */
template<> struct address_map< 0x40038201 > { static constexpr const char * name_str = "MFS2::I2C_IBCR"; };  /* svd2hpp: duplicate address for: MFS2::CSIO_SCR, MFS2::I2C_IBCR, MFS2::UART_SCR */
template<> struct address_map< 0x40038204 > { static constexpr const char * name_str = "MFS2::I2C_IBSR"; };  /* svd2hpp: duplicate address for: MFS2::CSIO_ESCR, MFS2::I2C_IBSR, MFS2::UART_ESCR */
template<> struct address_map< 0x40038205 > { static constexpr const char * name_str = "MFS2::I2C_SSR"; };  /* svd2hpp: duplicate address for: MFS2::CSIO_SSR, MFS2::I2C_SSR, MFS2::UART_SSR */
template<> struct address_map< 0x40038208 > { static constexpr const char * name_str = "MFS2::I2C_TDR"; };  /* svd2hpp: duplicate address for: MFS2::CSIO_RDR, MFS2::CSIO_TDR, MFS2::I2C_RDR, MFS2::I2C_TDR, MFS2::UART_RDR, MFS2::UART_TDR */
template<> struct address_map< 0x4003820c > { static constexpr const char * name_str = "MFS2::I2C_BGR"; };  /* svd2hpp: duplicate address for: MFS2::CSIO_BGR, MFS2::I2C_BGR, MFS2::UART_BGR */
template<> struct address_map< 0x40038210 > { static constexpr const char * name_str = "MFS2::I2C_ISBA"; };
template<> struct address_map< 0x40038211 > { static constexpr const char * name_str = "MFS2::I2C_ISMK"; };
template<> struct address_map< 0x40038300 > { static constexpr const char * name_str = "MFS3::I2C_SMR"; };  /* svd2hpp: duplicate address for: MFS3::CSIO_SMR, MFS3::I2C_SMR, MFS3::UART_SMR */
template<> struct address_map< 0x40038301 > { static constexpr const char * name_str = "MFS3::I2C_IBCR"; };  /* svd2hpp: duplicate address for: MFS3::CSIO_SCR, MFS3::I2C_IBCR, MFS3::UART_SCR */
template<> struct address_map< 0x40038304 > { static constexpr const char * name_str = "MFS3::I2C_IBSR"; };  /* svd2hpp: duplicate address for: MFS3::CSIO_ESCR, MFS3::I2C_IBSR, MFS3::UART_ESCR */
template<> struct address_map< 0x40038305 > { static constexpr const char * name_str = "MFS3::I2C_SSR"; };  /* svd2hpp: duplicate address for: MFS3::CSIO_SSR, MFS3::I2C_SSR, MFS3::UART_SSR */
template<> struct address_map< 0x40038308 > { static constexpr const char * name_str = "MFS3::I2C_TDR"; };  /* svd2hpp: duplicate address for: MFS3::CSIO_RDR, MFS3::CSIO_TDR, MFS3::I2C_RDR, MFS3::I2C_TDR, MFS3::UART_RDR, MFS3::UART_TDR */
template<> struct address_map< 0x4003830c > { static constexpr const char * name_str = "MFS3::I2C_BGR"; };  /* svd2hpp: duplicate address for: MFS3::CSIO_BGR, MFS3::I2C_BGR, MFS3::UART_BGR */
template<> struct address_map< 0x40038310 > { static constexpr const char * name_str = "MFS3::I2C_ISBA"; };
template<> struct address_map< 0x40038311 > { static constexpr const char * name_str = "MFS3::I2C_ISMK"; };
template<> struct address_map< 0x40038400 > { static constexpr const char * name_str = "MFS4::I2C_SMR"; };  /* svd2hpp: duplicate address for: MFS4::CSIO_SMR, MFS4::I2C_SMR, MFS4::UART_SMR */
template<> struct address_map< 0x40038401 > { static constexpr const char * name_str = "MFS4::I2C_IBCR"; };  /* svd2hpp: duplicate address for: MFS4::CSIO_SCR, MFS4::I2C_IBCR, MFS4::UART_SCR */
template<> struct address_map< 0x40038404 > { static constexpr const char * name_str = "MFS4::I2C_IBSR"; };  /* svd2hpp: duplicate address for: MFS4::CSIO_ESCR, MFS4::I2C_IBSR, MFS4::UART_ESCR */
template<> struct address_map< 0x40038405 > { static constexpr const char * name_str = "MFS4::I2C_SSR"; };  /* svd2hpp: duplicate address for: MFS4::CSIO_SSR, MFS4::I2C_SSR, MFS4::UART_SSR */
template<> struct address_map< 0x40038408 > { static constexpr const char * name_str = "MFS4::I2C_TDR"; };  /* svd2hpp: duplicate address for: MFS4::CSIO_RDR, MFS4::CSIO_TDR, MFS4::I2C_RDR, MFS4::I2C_TDR, MFS4::UART_RDR, MFS4::UART_TDR */
template<> struct address_map< 0x4003840c > { static constexpr const char * name_str = "MFS4::I2C_BGR"; };  /* svd2hpp: duplicate address for: MFS4::CSIO_BGR, MFS4::I2C_BGR, MFS4::UART_BGR */
template<> struct address_map< 0x40038410 > { static constexpr const char * name_str = "MFS4::I2C_ISBA"; };
template<> struct address_map< 0x40038411 > { static constexpr const char * name_str = "MFS4::I2C_ISMK"; };
template<> struct address_map< 0x40038500 > { static constexpr const char * name_str = "MFS5::I2C_SMR"; };  /* svd2hpp: duplicate address for: MFS5::CSIO_SMR, MFS5::I2C_SMR, MFS5::UART_SMR */
template<> struct address_map< 0x40038501 > { static constexpr const char * name_str = "MFS5::I2C_IBCR"; };  /* svd2hpp: duplicate address for: MFS5::CSIO_SCR, MFS5::I2C_IBCR, MFS5::UART_SCR */
template<> struct address_map< 0x40038504 > { static constexpr const char * name_str = "MFS5::I2C_IBSR"; };  /* svd2hpp: duplicate address for: MFS5::CSIO_ESCR, MFS5::I2C_IBSR, MFS5::UART_ESCR */
template<> struct address_map< 0x40038505 > { static constexpr const char * name_str = "MFS5::I2C_SSR"; };  /* svd2hpp: duplicate address for: MFS5::CSIO_SSR, MFS5::I2C_SSR, MFS5::UART_SSR */
template<> struct address_map< 0x40038508 > { static constexpr const char * name_str = "MFS5::I2C_TDR"; };  /* svd2hpp: duplicate address for: MFS5::CSIO_RDR, MFS5::CSIO_TDR, MFS5::I2C_RDR, MFS5::I2C_TDR, MFS5::UART_RDR, MFS5::UART_TDR */
template<> struct address_map< 0x4003850c > { static constexpr const char * name_str = "MFS5::I2C_BGR"; };  /* svd2hpp: duplicate address for: MFS5::CSIO_BGR, MFS5::I2C_BGR, MFS5::UART_BGR */
template<> struct address_map< 0x40038510 > { static constexpr const char * name_str = "MFS5::I2C_ISBA"; };
template<> struct address_map< 0x40038511 > { static constexpr const char * name_str = "MFS5::I2C_ISMK"; };
template<> struct address_map< 0x40038600 > { static constexpr const char * name_str = "MFS6::I2C_SMR"; };  /* svd2hpp: duplicate address for: MFS6::CSIO_SMR, MFS6::I2C_SMR, MFS6::UART_SMR */
template<> struct address_map< 0x40038601 > { static constexpr const char * name_str = "MFS6::I2C_IBCR"; };  /* svd2hpp: duplicate address for: MFS6::CSIO_SCR, MFS6::I2C_IBCR, MFS6::UART_SCR */
template<> struct address_map< 0x40038604 > { static constexpr const char * name_str = "MFS6::I2C_IBSR"; };  /* svd2hpp: duplicate address for: MFS6::CSIO_ESCR, MFS6::I2C_IBSR, MFS6::UART_ESCR */
template<> struct address_map< 0x40038605 > { static constexpr const char * name_str = "MFS6::I2C_SSR"; };  /* svd2hpp: duplicate address for: MFS6::CSIO_SSR, MFS6::I2C_SSR, MFS6::UART_SSR */
template<> struct address_map< 0x40038608 > { static constexpr const char * name_str = "MFS6::I2C_TDR"; };  /* svd2hpp: duplicate address for: MFS6::CSIO_RDR, MFS6::CSIO_TDR, MFS6::I2C_RDR, MFS6::I2C_TDR, MFS6::UART_RDR, MFS6::UART_TDR */
template<> struct address_map< 0x4003860c > { static constexpr const char * name_str = "MFS6::I2C_BGR"; };  /* svd2hpp: duplicate address for: MFS6::CSIO_BGR, MFS6::I2C_BGR, MFS6::UART_BGR */
template<> struct address_map< 0x40038610 > { static constexpr const char * name_str = "MFS6::I2C_ISBA"; };
template<> struct address_map< 0x40038611 > { static constexpr const char * name_str = "MFS6::I2C_ISMK"; };
template<> struct address_map< 0x40038700 > { static constexpr const char * name_str = "MFS7::I2C_SMR"; };  /* svd2hpp: duplicate address for: MFS7::CSIO_SMR, MFS7::I2C_SMR, MFS7::UART_SMR */
template<> struct address_map< 0x40038701 > { static constexpr const char * name_str = "MFS7::I2C_IBCR"; };  /* svd2hpp: duplicate address for: MFS7::CSIO_SCR, MFS7::I2C_IBCR, MFS7::UART_SCR */
template<> struct address_map< 0x40038704 > { static constexpr const char * name_str = "MFS7::I2C_IBSR"; };  /* svd2hpp: duplicate address for: MFS7::CSIO_ESCR, MFS7::I2C_IBSR, MFS7::UART_ESCR */
template<> struct address_map< 0x40038705 > { static constexpr const char * name_str = "MFS7::I2C_SSR"; };  /* svd2hpp: duplicate address for: MFS7::CSIO_SSR, MFS7::I2C_SSR, MFS7::UART_SSR */
template<> struct address_map< 0x40038708 > { static constexpr const char * name_str = "MFS7::I2C_TDR"; };  /* svd2hpp: duplicate address for: MFS7::CSIO_RDR, MFS7::CSIO_TDR, MFS7::I2C_RDR, MFS7::I2C_TDR, MFS7::UART_RDR, MFS7::UART_TDR */
template<> struct address_map< 0x4003870c > { static constexpr const char * name_str = "MFS7::I2C_BGR"; };  /* svd2hpp: duplicate address for: MFS7::CSIO_BGR, MFS7::I2C_BGR, MFS7::UART_BGR */
template<> struct address_map< 0x40038710 > { static constexpr const char * name_str = "MFS7::I2C_ISBA"; };
template<> struct address_map< 0x40038711 > { static constexpr const char * name_str = "MFS7::I2C_ISMK"; };
template<> struct address_map< 0x4003b000 > { static constexpr const char * name_str = "RTC::WTCR1"; };
template<> struct address_map< 0x4003b004 > { static constexpr const char * name_str = "RTC::WTCR2"; };
template<> struct address_map< 0x4003b008 > { static constexpr const char * name_str = "RTC::WTBR"; };
template<> struct address_map< 0x4003b00c > { static constexpr const char * name_str = "RTC::WTSR"; };
template<> struct address_map< 0x4003b00d > { static constexpr const char * name_str = "RTC::WTMIR"; };
template<> struct address_map< 0x4003b00e > { static constexpr const char * name_str = "RTC::WTHR"; };
template<> struct address_map< 0x4003b00f > { static constexpr const char * name_str = "RTC::WTDR"; };
template<> struct address_map< 0x4003b010 > { static constexpr const char * name_str = "RTC::WTDW"; };
template<> struct address_map< 0x4003b011 > { static constexpr const char * name_str = "RTC::WTMOR"; };
template<> struct address_map< 0x4003b012 > { static constexpr const char * name_str = "RTC::WTYR"; };
template<> struct address_map< 0x4003b015 > { static constexpr const char * name_str = "RTC::ALMIR"; };
template<> struct address_map< 0x4003b016 > { static constexpr const char * name_str = "RTC::ALHR"; };
template<> struct address_map< 0x4003b017 > { static constexpr const char * name_str = "RTC::ALDR"; };
template<> struct address_map< 0x4003b019 > { static constexpr const char * name_str = "RTC::ALMOR"; };
template<> struct address_map< 0x4003b01a > { static constexpr const char * name_str = "RTC::ALYR"; };
template<> struct address_map< 0x4003b01c > { static constexpr const char * name_str = "RTC::WTTR"; };
template<> struct address_map< 0x4003b020 > { static constexpr const char * name_str = "RTC::WTCLKS"; };
template<> struct address_map< 0x4003b021 > { static constexpr const char * name_str = "RTC::WTCLKM"; };
template<> struct address_map< 0x4003b024 > { static constexpr const char * name_str = "RTC::WTCAL"; };
template<> struct address_map< 0x4003b025 > { static constexpr const char * name_str = "RTC::WTCALEN"; };
template<> struct address_map< 0x4003b028 > { static constexpr const char * name_str = "RTC::WTDIV"; };
template<> struct address_map< 0x4003b029 > { static constexpr const char * name_str = "RTC::WTDIVEN"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
