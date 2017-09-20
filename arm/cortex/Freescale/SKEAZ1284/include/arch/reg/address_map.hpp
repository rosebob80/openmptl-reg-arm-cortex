/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/SKEAZ1284.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZ1284
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZ1284 Freescale Microcontroller
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

template<> struct address_map< 0x00000400 > { static constexpr const char * name_str = "FTMRE_FlashConfig::BACKKEY0"; };
template<> struct address_map< 0x00000401 > { static constexpr const char * name_str = "FTMRE_FlashConfig::BACKKEY1"; };
template<> struct address_map< 0x00000402 > { static constexpr const char * name_str = "FTMRE_FlashConfig::BACKKEY2"; };
template<> struct address_map< 0x00000403 > { static constexpr const char * name_str = "FTMRE_FlashConfig::BACKKEY3"; };
template<> struct address_map< 0x00000404 > { static constexpr const char * name_str = "FTMRE_FlashConfig::BACKKEY4"; };
template<> struct address_map< 0x00000405 > { static constexpr const char * name_str = "FTMRE_FlashConfig::BACKKEY5"; };
template<> struct address_map< 0x00000406 > { static constexpr const char * name_str = "FTMRE_FlashConfig::BACKKEY6"; };
template<> struct address_map< 0x00000407 > { static constexpr const char * name_str = "FTMRE_FlashConfig::BACKKEY7"; };
template<> struct address_map< 0x0000040d > { static constexpr const char * name_str = "FTMRE_FlashConfig::FPROT"; };
template<> struct address_map< 0x0000040e > { static constexpr const char * name_str = "FTMRE_FlashConfig::FSEC"; };
template<> struct address_map< 0x0000040f > { static constexpr const char * name_str = "FTMRE_FlashConfig::FOPT"; };
template<> struct address_map< 0x40020001 > { static constexpr const char * name_str = "FTMRE::FCCOBIX"; };
template<> struct address_map< 0x40020002 > { static constexpr const char * name_str = "FTMRE::FSEC"; };
template<> struct address_map< 0x40020003 > { static constexpr const char * name_str = "FTMRE::FCLKDIV"; };
template<> struct address_map< 0x40020005 > { static constexpr const char * name_str = "FTMRE::FSTAT"; };
template<> struct address_map< 0x40020007 > { static constexpr const char * name_str = "FTMRE::FCNFG"; };
template<> struct address_map< 0x40020008 > { static constexpr const char * name_str = "FTMRE::FCCOBLO"; };
template<> struct address_map< 0x40020009 > { static constexpr const char * name_str = "FTMRE::FCCOBHI"; };
template<> struct address_map< 0x4002000b > { static constexpr const char * name_str = "FTMRE::FPROT"; };
template<> struct address_map< 0x4002000f > { static constexpr const char * name_str = "FTMRE::FOPT"; };
template<> struct address_map< 0x40024000 > { static constexpr const char * name_str = "MSCAN::CANCTL0"; };
template<> struct address_map< 0x40024001 > { static constexpr const char * name_str = "MSCAN::CANCTL1"; };
template<> struct address_map< 0x40024002 > { static constexpr const char * name_str = "MSCAN::CANBTR0"; };
template<> struct address_map< 0x40024003 > { static constexpr const char * name_str = "MSCAN::CANBTR1"; };
template<> struct address_map< 0x40024004 > { static constexpr const char * name_str = "MSCAN::CANRFLG"; };
template<> struct address_map< 0x40024005 > { static constexpr const char * name_str = "MSCAN::CANRIER"; };
template<> struct address_map< 0x40024006 > { static constexpr const char * name_str = "MSCAN::CANTFLG"; };
template<> struct address_map< 0x40024007 > { static constexpr const char * name_str = "MSCAN::CANTIER"; };
template<> struct address_map< 0x40024008 > { static constexpr const char * name_str = "MSCAN::CANTARQ"; };
template<> struct address_map< 0x40024009 > { static constexpr const char * name_str = "MSCAN::CANTAAK"; };
template<> struct address_map< 0x4002400a > { static constexpr const char * name_str = "MSCAN::CANTBSEL"; };
template<> struct address_map< 0x4002400b > { static constexpr const char * name_str = "MSCAN::CANIDAC"; };
template<> struct address_map< 0x4002400d > { static constexpr const char * name_str = "MSCAN::CANMISC"; };
template<> struct address_map< 0x4002400e > { static constexpr const char * name_str = "MSCAN::CANRXERR"; };
template<> struct address_map< 0x4002400f > { static constexpr const char * name_str = "MSCAN::CANTXERR"; };
template<> struct address_map< 0x40024010 > { static constexpr const char * name_str = "MSCAN::CANIDAR0"; };
template<> struct address_map< 0x40024011 > { static constexpr const char * name_str = "MSCAN::CANIDAR1"; };
template<> struct address_map< 0x40024012 > { static constexpr const char * name_str = "MSCAN::CANIDAR2"; };
template<> struct address_map< 0x40024013 > { static constexpr const char * name_str = "MSCAN::CANIDAR3"; };
template<> struct address_map< 0x40024014 > { static constexpr const char * name_str = "MSCAN::CANIDMR0"; };
template<> struct address_map< 0x40024015 > { static constexpr const char * name_str = "MSCAN::CANIDMR1"; };
template<> struct address_map< 0x40024016 > { static constexpr const char * name_str = "MSCAN::CANIDMR2"; };
template<> struct address_map< 0x40024017 > { static constexpr const char * name_str = "MSCAN::CANIDMR3"; };
template<> struct address_map< 0x40024018 > { static constexpr const char * name_str = "MSCAN::CANIDAR4"; };
template<> struct address_map< 0x40024019 > { static constexpr const char * name_str = "MSCAN::CANIDAR5"; };
template<> struct address_map< 0x4002401a > { static constexpr const char * name_str = "MSCAN::CANIDAR6"; };
template<> struct address_map< 0x4002401b > { static constexpr const char * name_str = "MSCAN::CANIDAR7"; };
template<> struct address_map< 0x4002401c > { static constexpr const char * name_str = "MSCAN::CANIDMR4"; };
template<> struct address_map< 0x4002401d > { static constexpr const char * name_str = "MSCAN::CANIDMR5"; };
template<> struct address_map< 0x4002401e > { static constexpr const char * name_str = "MSCAN::CANIDMR6"; };
template<> struct address_map< 0x4002401f > { static constexpr const char * name_str = "MSCAN::CANIDMR7"; };
template<> struct address_map< 0x40024020 > { static constexpr const char * name_str = "MSCAN::RSIDR0"; };  /* svd2hpp: duplicate address for: MSCAN::REIDR0, MSCAN::RSIDR0 */
template<> struct address_map< 0x40024021 > { static constexpr const char * name_str = "MSCAN::RSIDR1"; };  /* svd2hpp: duplicate address for: MSCAN::REIDR1, MSCAN::RSIDR1 */
template<> struct address_map< 0x40024022 > { static constexpr const char * name_str = "MSCAN::REIDR2"; };
template<> struct address_map< 0x40024023 > { static constexpr const char * name_str = "MSCAN::REIDR3"; };
template<> struct address_map< 0x40024024 > { static constexpr const char * name_str = "MSCAN::REDSR%s"; };
template<> struct address_map< 0x4002402c > { static constexpr const char * name_str = "MSCAN::RDLR"; };
template<> struct address_map< 0x4002402e > { static constexpr const char * name_str = "MSCAN::RTSRH"; };
template<> struct address_map< 0x4002402f > { static constexpr const char * name_str = "MSCAN::RTSRL"; };
template<> struct address_map< 0x40024030 > { static constexpr const char * name_str = "MSCAN::TSIDR0"; };  /* svd2hpp: duplicate address for: MSCAN::TEIDR0, MSCAN::TSIDR0 */
template<> struct address_map< 0x40024031 > { static constexpr const char * name_str = "MSCAN::TSIDR1"; };  /* svd2hpp: duplicate address for: MSCAN::TEIDR1, MSCAN::TSIDR1 */
template<> struct address_map< 0x40024032 > { static constexpr const char * name_str = "MSCAN::TEIDR2"; };
template<> struct address_map< 0x40024033 > { static constexpr const char * name_str = "MSCAN::TEIDR3"; };
template<> struct address_map< 0x40024034 > { static constexpr const char * name_str = "MSCAN::TEDSR%s"; };
template<> struct address_map< 0x4002403c > { static constexpr const char * name_str = "MSCAN::TDLR"; };
template<> struct address_map< 0x4002403d > { static constexpr const char * name_str = "MSCAN::TBPR"; };
template<> struct address_map< 0x4002403e > { static constexpr const char * name_str = "MSCAN::TTSRH"; };
template<> struct address_map< 0x4002403f > { static constexpr const char * name_str = "MSCAN::TTSRL"; };
template<> struct address_map< 0x40031000 > { static constexpr const char * name_str = "IRQ::SC"; };
template<> struct address_map< 0x40032000 > { static constexpr const char * name_str = "CRC::DATA"; };  /* svd2hpp: duplicate address for: CRC::DATA, CRC::DATAL, CRC::DATALL */
template<> struct address_map< 0x40032001 > { static constexpr const char * name_str = "CRC::DATALU"; };
template<> struct address_map< 0x40032002 > { static constexpr const char * name_str = "CRC::DATAH"; };  /* svd2hpp: duplicate address for: CRC::DATAH, CRC::DATAHL */
template<> struct address_map< 0x40032003 > { static constexpr const char * name_str = "CRC::DATAHU"; };
template<> struct address_map< 0x40032004 > { static constexpr const char * name_str = "CRC::GPOLY"; };  /* svd2hpp: duplicate address for: CRC::GPOLY, CRC::GPOLYL, CRC::GPOLYLL */
template<> struct address_map< 0x40032005 > { static constexpr const char * name_str = "CRC::GPOLYLU"; };
template<> struct address_map< 0x40032006 > { static constexpr const char * name_str = "CRC::GPOLYH"; };  /* svd2hpp: duplicate address for: CRC::GPOLYH, CRC::GPOLYHL */
template<> struct address_map< 0x40032007 > { static constexpr const char * name_str = "CRC::GPOLYHU"; };
template<> struct address_map< 0x40032008 > { static constexpr const char * name_str = "CRC::CTRL"; };
template<> struct address_map< 0x4003200b > { static constexpr const char * name_str = "CRC::CTRLHU"; };
template<> struct address_map< 0x40033000 > { static constexpr const char * name_str = "PWT::R1"; };
template<> struct address_map< 0x40033004 > { static constexpr const char * name_str = "PWT::R2"; };
template<> struct address_map< 0x40037000 > { static constexpr const char * name_str = "PIT::MCR"; };
template<> struct address_map< 0x40037100 > { static constexpr const char * name_str = "PIT::LDVAL%s"; };
template<> struct address_map< 0x40037104 > { static constexpr const char * name_str = "PIT::CVAL%s"; };
template<> struct address_map< 0x40037108 > { static constexpr const char * name_str = "PIT::TCTRL%s"; };
template<> struct address_map< 0x4003710c > { static constexpr const char * name_str = "PIT::TFLG%s"; };
template<> struct address_map< 0x40038000 > { static constexpr const char * name_str = "FTM0::SC"; };
template<> struct address_map< 0x40038004 > { static constexpr const char * name_str = "FTM0::CNT"; };
template<> struct address_map< 0x40038008 > { static constexpr const char * name_str = "FTM0::MOD"; };
template<> struct address_map< 0x4003800c > { static constexpr const char * name_str = "FTM0::C%sSC"; };
template<> struct address_map< 0x40038010 > { static constexpr const char * name_str = "FTM0::C%sV"; };
template<> struct address_map< 0x4003806c > { static constexpr const char * name_str = "FTM0::EXTTRIG"; };
template<> struct address_map< 0x40039000 > { static constexpr const char * name_str = "FTM1::SC"; };
template<> struct address_map< 0x40039004 > { static constexpr const char * name_str = "FTM1::CNT"; };
template<> struct address_map< 0x40039008 > { static constexpr const char * name_str = "FTM1::MOD"; };
template<> struct address_map< 0x4003900c > { static constexpr const char * name_str = "FTM1::C%sSC"; };
template<> struct address_map< 0x40039010 > { static constexpr const char * name_str = "FTM1::C%sV"; };
template<> struct address_map< 0x4003a000 > { static constexpr const char * name_str = "FTM2::SC"; };
template<> struct address_map< 0x4003a004 > { static constexpr const char * name_str = "FTM2::CNT"; };
template<> struct address_map< 0x4003a008 > { static constexpr const char * name_str = "FTM2::MOD"; };
template<> struct address_map< 0x4003a00c > { static constexpr const char * name_str = "FTM2::C%sSC"; };
template<> struct address_map< 0x4003a010 > { static constexpr const char * name_str = "FTM2::C%sV"; };
template<> struct address_map< 0x4003a04c > { static constexpr const char * name_str = "FTM2::CNTIN"; };
template<> struct address_map< 0x4003a050 > { static constexpr const char * name_str = "FTM2::STATUS"; };
template<> struct address_map< 0x4003a054 > { static constexpr const char * name_str = "FTM2::MODE"; };
template<> struct address_map< 0x4003a058 > { static constexpr const char * name_str = "FTM2::SYNC"; };
template<> struct address_map< 0x4003a05c > { static constexpr const char * name_str = "FTM2::OUTINIT"; };
template<> struct address_map< 0x4003a060 > { static constexpr const char * name_str = "FTM2::OUTMASK"; };
template<> struct address_map< 0x4003a064 > { static constexpr const char * name_str = "FTM2::COMBINE"; };
template<> struct address_map< 0x4003a068 > { static constexpr const char * name_str = "FTM2::DEADTIME"; };
template<> struct address_map< 0x4003a06c > { static constexpr const char * name_str = "FTM2::EXTTRIG"; };
template<> struct address_map< 0x4003a070 > { static constexpr const char * name_str = "FTM2::POL"; };
template<> struct address_map< 0x4003a074 > { static constexpr const char * name_str = "FTM2::FMS"; };
template<> struct address_map< 0x4003a078 > { static constexpr const char * name_str = "FTM2::FILTER"; };
template<> struct address_map< 0x4003a07c > { static constexpr const char * name_str = "FTM2::FLTCTRL"; };
template<> struct address_map< 0x4003a084 > { static constexpr const char * name_str = "FTM2::CONF"; };
template<> struct address_map< 0x4003a088 > { static constexpr const char * name_str = "FTM2::FLTPOL"; };
template<> struct address_map< 0x4003a08c > { static constexpr const char * name_str = "FTM2::SYNCONF"; };
template<> struct address_map< 0x4003a090 > { static constexpr const char * name_str = "FTM2::INVCTRL"; };
template<> struct address_map< 0x4003a094 > { static constexpr const char * name_str = "FTM2::SWOCTRL"; };
template<> struct address_map< 0x4003a098 > { static constexpr const char * name_str = "FTM2::PWMLOAD"; };
template<> struct address_map< 0x4003b000 > { static constexpr const char * name_str = "ADC::SC1"; };
template<> struct address_map< 0x4003b004 > { static constexpr const char * name_str = "ADC::SC2"; };
template<> struct address_map< 0x4003b008 > { static constexpr const char * name_str = "ADC::SC3"; };
template<> struct address_map< 0x4003b00c > { static constexpr const char * name_str = "ADC::SC4"; };
template<> struct address_map< 0x4003b010 > { static constexpr const char * name_str = "ADC::R"; };
template<> struct address_map< 0x4003b014 > { static constexpr const char * name_str = "ADC::CV"; };
template<> struct address_map< 0x4003b018 > { static constexpr const char * name_str = "ADC::APCTL1"; };
template<> struct address_map< 0x4003b01c > { static constexpr const char * name_str = "ADC::SC5"; };
template<> struct address_map< 0x4003d000 > { static constexpr const char * name_str = "RTC::SC"; };
template<> struct address_map< 0x4003d004 > { static constexpr const char * name_str = "RTC::MOD"; };
template<> struct address_map< 0x4003d008 > { static constexpr const char * name_str = "RTC::CNT"; };
template<> struct address_map< 0x40048000 > { static constexpr const char * name_str = "SIM::SRSID"; };
template<> struct address_map< 0x40048004 > { static constexpr const char * name_str = "SIM::SOPT0"; };
template<> struct address_map< 0x40048008 > { static constexpr const char * name_str = "SIM::SOPT1"; };
template<> struct address_map< 0x4004800c > { static constexpr const char * name_str = "SIM::PINSEL0"; };
template<> struct address_map< 0x40048010 > { static constexpr const char * name_str = "SIM::PINSEL1"; };
template<> struct address_map< 0x40048014 > { static constexpr const char * name_str = "SIM::SCGC"; };
template<> struct address_map< 0x40048018 > { static constexpr const char * name_str = "SIM::UUIDL"; };
template<> struct address_map< 0x4004801c > { static constexpr const char * name_str = "SIM::UUIDML"; };
template<> struct address_map< 0x40048020 > { static constexpr const char * name_str = "SIM::UUIDMH"; };
template<> struct address_map< 0x40048024 > { static constexpr const char * name_str = "SIM::CLKDIV"; };
template<> struct address_map< 0x40049000 > { static constexpr const char * name_str = "PORT::IOFLT0"; };
template<> struct address_map< 0x40049004 > { static constexpr const char * name_str = "PORT::IOFLT1"; };
template<> struct address_map< 0x40049008 > { static constexpr const char * name_str = "PORT::PUE0"; };
template<> struct address_map< 0x4004900c > { static constexpr const char * name_str = "PORT::PUE1"; };
template<> struct address_map< 0x40049010 > { static constexpr const char * name_str = "PORT::PUE2"; };
template<> struct address_map< 0x40049014 > { static constexpr const char * name_str = "PORT::HDRVE"; };
template<> struct address_map< 0x40052000 > { static constexpr const char * name_str = "WDOG::CS1"; };
template<> struct address_map< 0x40052001 > { static constexpr const char * name_str = "WDOG::CS2"; };
template<> struct address_map< 0x40052002 > { static constexpr const char * name_str = "WDOG::CNT"; };  /* svd2hpp: duplicate address for: WDOG::CNT, WDOG::CNTH */
template<> struct address_map< 0x40052003 > { static constexpr const char * name_str = "WDOG::CNTL"; };
template<> struct address_map< 0x40052004 > { static constexpr const char * name_str = "WDOG::TOVAL"; };  /* svd2hpp: duplicate address for: WDOG::TOVAL, WDOG::TOVALH */
template<> struct address_map< 0x40052005 > { static constexpr const char * name_str = "WDOG::TOVALL"; };
template<> struct address_map< 0x40052006 > { static constexpr const char * name_str = "WDOG::WIN"; };  /* svd2hpp: duplicate address for: WDOG::WIN, WDOG::WINH */
template<> struct address_map< 0x40052007 > { static constexpr const char * name_str = "WDOG::WINL"; };
template<> struct address_map< 0x40064000 > { static constexpr const char * name_str = "ICS::C1"; };
template<> struct address_map< 0x40064001 > { static constexpr const char * name_str = "ICS::C2"; };
template<> struct address_map< 0x40064002 > { static constexpr const char * name_str = "ICS::C3"; };
template<> struct address_map< 0x40064003 > { static constexpr const char * name_str = "ICS::C4"; };
template<> struct address_map< 0x40064004 > { static constexpr const char * name_str = "ICS::S"; };
template<> struct address_map< 0x40065000 > { static constexpr const char * name_str = "OSC::CR"; };
template<> struct address_map< 0x40066000 > { static constexpr const char * name_str = "I2C0::A1"; };
template<> struct address_map< 0x40066001 > { static constexpr const char * name_str = "I2C0::F"; };
template<> struct address_map< 0x40066002 > { static constexpr const char * name_str = "I2C0::C1"; };
template<> struct address_map< 0x40066003 > { static constexpr const char * name_str = "I2C0::S1"; };
template<> struct address_map< 0x40066004 > { static constexpr const char * name_str = "I2C0::D"; };
template<> struct address_map< 0x40066005 > { static constexpr const char * name_str = "I2C0::C2"; };
template<> struct address_map< 0x40066006 > { static constexpr const char * name_str = "I2C0::FLT"; };
template<> struct address_map< 0x40066007 > { static constexpr const char * name_str = "I2C0::RA"; };
template<> struct address_map< 0x40066008 > { static constexpr const char * name_str = "I2C0::SMB"; };
template<> struct address_map< 0x40066009 > { static constexpr const char * name_str = "I2C0::A2"; };
template<> struct address_map< 0x4006600a > { static constexpr const char * name_str = "I2C0::SLTH"; };
template<> struct address_map< 0x4006600b > { static constexpr const char * name_str = "I2C0::SLTL"; };
template<> struct address_map< 0x40067000 > { static constexpr const char * name_str = "I2C1::A1"; };
template<> struct address_map< 0x40067001 > { static constexpr const char * name_str = "I2C1::F"; };
template<> struct address_map< 0x40067002 > { static constexpr const char * name_str = "I2C1::C1"; };
template<> struct address_map< 0x40067003 > { static constexpr const char * name_str = "I2C1::S1"; };
template<> struct address_map< 0x40067004 > { static constexpr const char * name_str = "I2C1::D"; };
template<> struct address_map< 0x40067005 > { static constexpr const char * name_str = "I2C1::C2"; };
template<> struct address_map< 0x40067006 > { static constexpr const char * name_str = "I2C1::FLT"; };
template<> struct address_map< 0x40067007 > { static constexpr const char * name_str = "I2C1::RA"; };
template<> struct address_map< 0x40067008 > { static constexpr const char * name_str = "I2C1::SMB"; };
template<> struct address_map< 0x40067009 > { static constexpr const char * name_str = "I2C1::A2"; };
template<> struct address_map< 0x4006700a > { static constexpr const char * name_str = "I2C1::SLTH"; };
template<> struct address_map< 0x4006700b > { static constexpr const char * name_str = "I2C1::SLTL"; };
template<> struct address_map< 0x4006a000 > { static constexpr const char * name_str = "UART0::BDH"; };
template<> struct address_map< 0x4006a001 > { static constexpr const char * name_str = "UART0::BDL"; };
template<> struct address_map< 0x4006a002 > { static constexpr const char * name_str = "UART0::C1"; };
template<> struct address_map< 0x4006a003 > { static constexpr const char * name_str = "UART0::C2"; };
template<> struct address_map< 0x4006a004 > { static constexpr const char * name_str = "UART0::S1"; };
template<> struct address_map< 0x4006a005 > { static constexpr const char * name_str = "UART0::S2"; };
template<> struct address_map< 0x4006a006 > { static constexpr const char * name_str = "UART0::C3"; };
template<> struct address_map< 0x4006a007 > { static constexpr const char * name_str = "UART0::D"; };
template<> struct address_map< 0x4006b000 > { static constexpr const char * name_str = "UART1::BDH"; };
template<> struct address_map< 0x4006b001 > { static constexpr const char * name_str = "UART1::BDL"; };
template<> struct address_map< 0x4006b002 > { static constexpr const char * name_str = "UART1::C1"; };
template<> struct address_map< 0x4006b003 > { static constexpr const char * name_str = "UART1::C2"; };
template<> struct address_map< 0x4006b004 > { static constexpr const char * name_str = "UART1::S1"; };
template<> struct address_map< 0x4006b005 > { static constexpr const char * name_str = "UART1::S2"; };
template<> struct address_map< 0x4006b006 > { static constexpr const char * name_str = "UART1::C3"; };
template<> struct address_map< 0x4006b007 > { static constexpr const char * name_str = "UART1::D"; };
template<> struct address_map< 0x4006c000 > { static constexpr const char * name_str = "UART2::BDH"; };
template<> struct address_map< 0x4006c001 > { static constexpr const char * name_str = "UART2::BDL"; };
template<> struct address_map< 0x4006c002 > { static constexpr const char * name_str = "UART2::C1"; };
template<> struct address_map< 0x4006c003 > { static constexpr const char * name_str = "UART2::C2"; };
template<> struct address_map< 0x4006c004 > { static constexpr const char * name_str = "UART2::S1"; };
template<> struct address_map< 0x4006c005 > { static constexpr const char * name_str = "UART2::S2"; };
template<> struct address_map< 0x4006c006 > { static constexpr const char * name_str = "UART2::C3"; };
template<> struct address_map< 0x4006c007 > { static constexpr const char * name_str = "UART2::D"; };
template<> struct address_map< 0x40073000 > { static constexpr const char * name_str = "ACMP0::CS"; };
template<> struct address_map< 0x40073001 > { static constexpr const char * name_str = "ACMP0::C0"; };
template<> struct address_map< 0x40073002 > { static constexpr const char * name_str = "ACMP0::C1"; };
template<> struct address_map< 0x40073003 > { static constexpr const char * name_str = "ACMP0::C2"; };
template<> struct address_map< 0x40074000 > { static constexpr const char * name_str = "ACMP1::CS"; };
template<> struct address_map< 0x40074001 > { static constexpr const char * name_str = "ACMP1::C0"; };
template<> struct address_map< 0x40074002 > { static constexpr const char * name_str = "ACMP1::C1"; };
template<> struct address_map< 0x40074003 > { static constexpr const char * name_str = "ACMP1::C2"; };
template<> struct address_map< 0x40076000 > { static constexpr const char * name_str = "SPI0::C1"; };
template<> struct address_map< 0x40076001 > { static constexpr const char * name_str = "SPI0::C2"; };
template<> struct address_map< 0x40076002 > { static constexpr const char * name_str = "SPI0::BR"; };
template<> struct address_map< 0x40076003 > { static constexpr const char * name_str = "SPI0::S"; };
template<> struct address_map< 0x40076005 > { static constexpr const char * name_str = "SPI0::D"; };
template<> struct address_map< 0x40076007 > { static constexpr const char * name_str = "SPI0::M"; };
template<> struct address_map< 0x40077000 > { static constexpr const char * name_str = "SPI1::C1"; };
template<> struct address_map< 0x40077001 > { static constexpr const char * name_str = "SPI1::C2"; };
template<> struct address_map< 0x40077002 > { static constexpr const char * name_str = "SPI1::BR"; };
template<> struct address_map< 0x40077003 > { static constexpr const char * name_str = "SPI1::S"; };
template<> struct address_map< 0x40077005 > { static constexpr const char * name_str = "SPI1::D"; };
template<> struct address_map< 0x40077007 > { static constexpr const char * name_str = "SPI1::M"; };
template<> struct address_map< 0x40079000 > { static constexpr const char * name_str = "KBI0::PE"; };
template<> struct address_map< 0x40079004 > { static constexpr const char * name_str = "KBI0::ES"; };
template<> struct address_map< 0x40079008 > { static constexpr const char * name_str = "KBI0::SC"; };
template<> struct address_map< 0x4007900c > { static constexpr const char * name_str = "KBI0::SP"; };
template<> struct address_map< 0x4007a000 > { static constexpr const char * name_str = "KBI1::PE"; };
template<> struct address_map< 0x4007a004 > { static constexpr const char * name_str = "KBI1::ES"; };
template<> struct address_map< 0x4007a008 > { static constexpr const char * name_str = "KBI1::SC"; };
template<> struct address_map< 0x4007a00c > { static constexpr const char * name_str = "KBI1::SP"; };
template<> struct address_map< 0x4007d000 > { static constexpr const char * name_str = "PMC::SPMSC1"; };
template<> struct address_map< 0x4007d001 > { static constexpr const char * name_str = "PMC::SPMSC2"; };
template<> struct address_map< 0x400ff000 > { static constexpr const char * name_str = "GPIOA::PDOR"; };
template<> struct address_map< 0x400ff004 > { static constexpr const char * name_str = "GPIOA::PSOR"; };
template<> struct address_map< 0x400ff008 > { static constexpr const char * name_str = "GPIOA::PCOR"; };
template<> struct address_map< 0x400ff00c > { static constexpr const char * name_str = "GPIOA::PTOR"; };
template<> struct address_map< 0x400ff010 > { static constexpr const char * name_str = "GPIOA::PDIR"; };
template<> struct address_map< 0x400ff014 > { static constexpr const char * name_str = "GPIOA::PDDR"; };
template<> struct address_map< 0x400ff018 > { static constexpr const char * name_str = "GPIOA::PIDR"; };
template<> struct address_map< 0x400ff040 > { static constexpr const char * name_str = "GPIOB::PDOR"; };
template<> struct address_map< 0x400ff044 > { static constexpr const char * name_str = "GPIOB::PSOR"; };
template<> struct address_map< 0x400ff048 > { static constexpr const char * name_str = "GPIOB::PCOR"; };
template<> struct address_map< 0x400ff04c > { static constexpr const char * name_str = "GPIOB::PTOR"; };
template<> struct address_map< 0x400ff050 > { static constexpr const char * name_str = "GPIOB::PDIR"; };
template<> struct address_map< 0x400ff054 > { static constexpr const char * name_str = "GPIOB::PDDR"; };
template<> struct address_map< 0x400ff058 > { static constexpr const char * name_str = "GPIOB::PIDR"; };
template<> struct address_map< 0x400ff080 > { static constexpr const char * name_str = "GPIOC::PDOR"; };
template<> struct address_map< 0x400ff084 > { static constexpr const char * name_str = "GPIOC::PSOR"; };
template<> struct address_map< 0x400ff088 > { static constexpr const char * name_str = "GPIOC::PCOR"; };
template<> struct address_map< 0x400ff08c > { static constexpr const char * name_str = "GPIOC::PTOR"; };
template<> struct address_map< 0x400ff090 > { static constexpr const char * name_str = "GPIOC::PDIR"; };
template<> struct address_map< 0x400ff094 > { static constexpr const char * name_str = "GPIOC::PDDR"; };
template<> struct address_map< 0x400ff098 > { static constexpr const char * name_str = "GPIOC::PIDR"; };
template<> struct address_map< 0xe000e008 > { static constexpr const char * name_str = "SystemControl::ACTLR"; };
template<> struct address_map< 0xe000e010 > { static constexpr const char * name_str = "SysTick::CSR"; };
template<> struct address_map< 0xe000e014 > { static constexpr const char * name_str = "SysTick::RVR"; };
template<> struct address_map< 0xe000e018 > { static constexpr const char * name_str = "SysTick::CVR"; };
template<> struct address_map< 0xe000e01c > { static constexpr const char * name_str = "SysTick::CALIB"; };
template<> struct address_map< 0xe000e100 > { static constexpr const char * name_str = "NVIC::NVIC_ISER"; };
template<> struct address_map< 0xe000e180 > { static constexpr const char * name_str = "NVIC::NVIC_ICER"; };
template<> struct address_map< 0xe000e200 > { static constexpr const char * name_str = "NVIC::NVIC_ISPR"; };
template<> struct address_map< 0xe000e280 > { static constexpr const char * name_str = "NVIC::NVIC_ICPR"; };
template<> struct address_map< 0xe000e400 > { static constexpr const char * name_str = "NVIC::NVIC_IPR0"; };
template<> struct address_map< 0xe000e404 > { static constexpr const char * name_str = "NVIC::NVIC_IPR1"; };
template<> struct address_map< 0xe000e408 > { static constexpr const char * name_str = "NVIC::NVIC_IPR2"; };
template<> struct address_map< 0xe000e40c > { static constexpr const char * name_str = "NVIC::NVIC_IPR3"; };
template<> struct address_map< 0xe000e410 > { static constexpr const char * name_str = "NVIC::NVIC_IPR4"; };
template<> struct address_map< 0xe000e414 > { static constexpr const char * name_str = "NVIC::NVIC_IPR5"; };
template<> struct address_map< 0xe000e418 > { static constexpr const char * name_str = "NVIC::NVIC_IPR6"; };
template<> struct address_map< 0xe000e41c > { static constexpr const char * name_str = "NVIC::NVIC_IPR7"; };
template<> struct address_map< 0xe000ed00 > { static constexpr const char * name_str = "SystemControl::CPUID"; };
template<> struct address_map< 0xe000ed04 > { static constexpr const char * name_str = "SystemControl::ICSR"; };
template<> struct address_map< 0xe000ed08 > { static constexpr const char * name_str = "SystemControl::VTOR"; };
template<> struct address_map< 0xe000ed0c > { static constexpr const char * name_str = "SystemControl::AIRCR"; };
template<> struct address_map< 0xe000ed10 > { static constexpr const char * name_str = "SystemControl::SCR"; };
template<> struct address_map< 0xe000ed14 > { static constexpr const char * name_str = "SystemControl::CCR"; };
template<> struct address_map< 0xe000ed1c > { static constexpr const char * name_str = "SystemControl::SHPR2"; };
template<> struct address_map< 0xe000ed20 > { static constexpr const char * name_str = "SystemControl::SHPR3"; };
template<> struct address_map< 0xe000ed24 > { static constexpr const char * name_str = "SystemControl::SHCSR"; };
template<> struct address_map< 0xe000ed30 > { static constexpr const char * name_str = "SystemControl::DFSR"; };
template<> struct address_map< 0xf0002000 > { static constexpr const char * name_str = "ROM::ENTRY"; };
template<> struct address_map< 0xf0002004 > { static constexpr const char * name_str = "ROM::TABLEMARK"; };
template<> struct address_map< 0xf0002fcc > { static constexpr const char * name_str = "ROM::SYSACCESS"; };
template<> struct address_map< 0xf0002fd0 > { static constexpr const char * name_str = "ROM::PERIPHID%s"; };
template<> struct address_map< 0xf0002ff0 > { static constexpr const char * name_str = "ROM::COMPID%s"; };
template<> struct address_map< 0xf0003008 > { static constexpr const char * name_str = "MCM::PLASC"; };
template<> struct address_map< 0xf000300a > { static constexpr const char * name_str = "MCM::PLAMC"; };
template<> struct address_map< 0xf000300c > { static constexpr const char * name_str = "MCM::PLACR"; };
template<> struct address_map< 0xf8000000 > { static constexpr const char * name_str = "FGPIOA::PDOR"; };
template<> struct address_map< 0xf8000004 > { static constexpr const char * name_str = "FGPIOA::PSOR"; };
template<> struct address_map< 0xf8000008 > { static constexpr const char * name_str = "FGPIOA::PCOR"; };
template<> struct address_map< 0xf800000c > { static constexpr const char * name_str = "FGPIOA::PTOR"; };
template<> struct address_map< 0xf8000010 > { static constexpr const char * name_str = "FGPIOA::PDIR"; };
template<> struct address_map< 0xf8000014 > { static constexpr const char * name_str = "FGPIOA::PDDR"; };
template<> struct address_map< 0xf8000018 > { static constexpr const char * name_str = "FGPIOA::PIDR"; };
template<> struct address_map< 0xf8000040 > { static constexpr const char * name_str = "FGPIOB::PDOR"; };
template<> struct address_map< 0xf8000044 > { static constexpr const char * name_str = "FGPIOB::PSOR"; };
template<> struct address_map< 0xf8000048 > { static constexpr const char * name_str = "FGPIOB::PCOR"; };
template<> struct address_map< 0xf800004c > { static constexpr const char * name_str = "FGPIOB::PTOR"; };
template<> struct address_map< 0xf8000050 > { static constexpr const char * name_str = "FGPIOB::PDIR"; };
template<> struct address_map< 0xf8000054 > { static constexpr const char * name_str = "FGPIOB::PDDR"; };
template<> struct address_map< 0xf8000058 > { static constexpr const char * name_str = "FGPIOB::PIDR"; };
template<> struct address_map< 0xf8000080 > { static constexpr const char * name_str = "FGPIOC::PDOR"; };
template<> struct address_map< 0xf8000084 > { static constexpr const char * name_str = "FGPIOC::PSOR"; };
template<> struct address_map< 0xf8000088 > { static constexpr const char * name_str = "FGPIOC::PCOR"; };
template<> struct address_map< 0xf800008c > { static constexpr const char * name_str = "FGPIOC::PTOR"; };
template<> struct address_map< 0xf8000090 > { static constexpr const char * name_str = "FGPIOC::PDIR"; };
template<> struct address_map< 0xf8000094 > { static constexpr const char * name_str = "FGPIOC::PDDR"; };
template<> struct address_map< 0xf8000098 > { static constexpr const char * name_str = "FGPIOC::PIDR"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
