/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Fujitsu/MB9BF31xN.svd"
//
//  name: MB9BF31xN
//  version: 1.8
//  description: MB9BF31xN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EXTI_HPP_INCLUDED
#define ARCH_REG_EXTI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * External Interrupt and NMI Control
 */
struct EXTI
{
  static constexpr reg_addr_t base_addr = 0x40030000;

  /**
   * Enable Interrupt Request Register
   */
  struct ENIR
  : public reg< uint16_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0x0000 >;

    using EN15  = regbits< type, 15,  1 >;  /**< Bit15 of ENIR  */
    using EN14  = regbits< type, 14,  1 >;  /**< Bit14 of ENIR  */
    using EN13  = regbits< type, 13,  1 >;  /**< Bit13 of ENIR  */
    using EN12  = regbits< type, 12,  1 >;  /**< Bit12 of ENIR  */
    using EN11  = regbits< type, 11,  1 >;  /**< Bit11 of ENIR  */
    using EN10  = regbits< type, 10,  1 >;  /**< Bit10 of ENIR  */
    using EN9   = regbits< type,  9,  1 >;  /**< Bit9 of ENIR   */
    using EN8   = regbits< type,  8,  1 >;  /**< Bit8 of ENIR   */
    using EN7   = regbits< type,  7,  1 >;  /**< Bit7 of ENIR   */
    using EN6   = regbits< type,  6,  1 >;  /**< Bit6 of ENIR   */
    using EN5   = regbits< type,  5,  1 >;  /**< Bit5 of ENIR   */
    using EN4   = regbits< type,  4,  1 >;  /**< Bit4 of ENIR   */
    using EN3   = regbits< type,  3,  1 >;  /**< Bit3 of ENIR   */
    using EN2   = regbits< type,  2,  1 >;  /**< Bit2 of ENIR   */
    using EN1   = regbits< type,  1,  1 >;  /**< Bit1 of ENIR   */
    using EN0   = regbits< type,  0,  1 >;  /**< Bit0 of ENIR   */
  };

  /**
   * External Interrupt Request Register
   */
  struct EIRR
  : public reg< uint16_t, base_addr + 0x4, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x4, ro, 0x0000 >;

    using ER15  = regbits< type, 15,  1 >;  /**< Bit15 of EIRR  */
    using ER14  = regbits< type, 14,  1 >;  /**< Bit14 of EIRR  */
    using ER13  = regbits< type, 13,  1 >;  /**< Bit13 of EIRR  */
    using ER12  = regbits< type, 12,  1 >;  /**< Bit12 of EIRR  */
    using ER11  = regbits< type, 11,  1 >;  /**< Bit11 of EIRR  */
    using ER10  = regbits< type, 10,  1 >;  /**< Bit10 of EIRR  */
    using ER9   = regbits< type,  9,  1 >;  /**< Bit9 of EIRR   */
    using ER8   = regbits< type,  8,  1 >;  /**< Bit8 of EIRR   */
    using ER7   = regbits< type,  7,  1 >;  /**< Bit7 of EIRR   */
    using ER6   = regbits< type,  6,  1 >;  /**< Bit6 of EIRR   */
    using ER5   = regbits< type,  5,  1 >;  /**< Bit5 of EIRR   */
    using ER4   = regbits< type,  4,  1 >;  /**< Bit4 of EIRR   */
    using ER3   = regbits< type,  3,  1 >;  /**< Bit3 of EIRR   */
    using ER2   = regbits< type,  2,  1 >;  /**< Bit2 of EIRR   */
    using ER1   = regbits< type,  1,  1 >;  /**< Bit1 of EIRR   */
    using ER0   = regbits< type,  0,  1 >;  /**< Bit0 of EIRR   */
  };

  /**
   * External Interrupt Clear Register
   */
  struct EICL
  : public reg< uint16_t, base_addr + 0x8, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0xFFFF >;

    using ECL15  = regbits< type, 15,  1 >;  /**< Bit15 of EICL  */
    using ECL14  = regbits< type, 14,  1 >;  /**< Bit14 of EICL  */
    using ECL13  = regbits< type, 13,  1 >;  /**< Bit13 of EICL  */
    using ECL12  = regbits< type, 12,  1 >;  /**< Bit12 of EICL  */
    using ECL11  = regbits< type, 11,  1 >;  /**< Bit11 of EICL  */
    using ECL10  = regbits< type, 10,  1 >;  /**< Bit10 of EICL  */
    using ECL9   = regbits< type,  9,  1 >;  /**< Bit9 of EICL   */
    using ECL8   = regbits< type,  8,  1 >;  /**< Bit8 of EICL   */
    using ECL7   = regbits< type,  7,  1 >;  /**< Bit7 of EICL   */
    using ECL6   = regbits< type,  6,  1 >;  /**< Bit6 of EICL   */
    using ECL5   = regbits< type,  5,  1 >;  /**< Bit5 of EICL   */
    using ECL4   = regbits< type,  4,  1 >;  /**< Bit4 of EICL   */
    using ECL3   = regbits< type,  3,  1 >;  /**< Bit3 of EICL   */
    using ECL2   = regbits< type,  2,  1 >;  /**< Bit2 of EICL   */
    using ECL1   = regbits< type,  1,  1 >;  /**< Bit1 of EICL   */
    using ECL0   = regbits< type,  0,  1 >;  /**< Bit0 of EICL   */
  };

  /**
   * External Interrupt Level Register
   */
  struct ELVR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using LB15  = regbits< type, 31,  1 >;  /**< Bit31 of ELVR  */
    using LA15  = regbits< type, 30,  1 >;  /**< Bit30 of ELVR  */
    using LB14  = regbits< type, 29,  1 >;  /**< Bit29 of ELVR  */
    using LA14  = regbits< type, 28,  1 >;  /**< Bit28 of ELVR  */
    using LB13  = regbits< type, 27,  1 >;  /**< Bit27 of ELVR  */
    using LA13  = regbits< type, 26,  1 >;  /**< Bit26 of ELVR  */
    using LB12  = regbits< type, 25,  1 >;  /**< Bit25 of ELVR  */
    using LA12  = regbits< type, 24,  1 >;  /**< Bit24 of ELVR  */
    using LB11  = regbits< type, 23,  1 >;  /**< Bit23 of ELVR  */
    using LA11  = regbits< type, 22,  1 >;  /**< Bit22 of ELVR  */
    using LB10  = regbits< type, 21,  1 >;  /**< Bit21 of ELVR  */
    using LA10  = regbits< type, 20,  1 >;  /**< Bit20 of ELVR  */
    using LB9   = regbits< type, 19,  1 >;  /**< Bit19 of ELVR  */
    using LA9   = regbits< type, 18,  1 >;  /**< Bit18 of ELVR  */
    using LB8   = regbits< type, 17,  1 >;  /**< Bit17 of ELVR  */
    using LA8   = regbits< type, 16,  1 >;  /**< Bit16 of ELVR  */
    using LB7   = regbits< type, 15,  1 >;  /**< Bit15 of ELVR  */
    using LA7   = regbits< type, 14,  1 >;  /**< Bit14 of ELVR  */
    using LB6   = regbits< type, 13,  1 >;  /**< Bit13 of ELVR  */
    using LA6   = regbits< type, 12,  1 >;  /**< Bit12 of ELVR  */
    using LB5   = regbits< type, 11,  1 >;  /**< Bit11 of ELVR  */
    using LA5   = regbits< type, 10,  1 >;  /**< Bit10 of ELVR  */
    using LB4   = regbits< type,  9,  1 >;  /**< Bit9 of ELVR   */
    using LA4   = regbits< type,  8,  1 >;  /**< Bit8 of ELVR   */
    using LB3   = regbits< type,  7,  1 >;  /**< Bit7 of ELVR   */
    using LA3   = regbits< type,  6,  1 >;  /**< Bit6 of ELVR   */
    using LB2   = regbits< type,  5,  1 >;  /**< Bit5 of ELVR   */
    using LA2   = regbits< type,  4,  1 >;  /**< Bit4 of ELVR   */
    using LB1   = regbits< type,  3,  1 >;  /**< Bit3 of ELVR   */
    using LA1   = regbits< type,  2,  1 >;  /**< Bit2 of ELVR   */
    using LB0   = regbits< type,  1,  1 >;  /**< Bit1 of ELVR   */
    using LA0   = regbits< type,  0,  1 >;  /**< Bit0 of ELVR   */
  };

  /**
   * Non Maskable Interrupt Request Register
   */
  struct NMIRR
  : public reg< uint8_t, base_addr + 0x14, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, ro, 0x00 >;

    using NR  = regbits< type,  0,  1 >;  /**< NMI interrupt request detection bit  */
  };

  /**
   * Non Maskable Interrupt Clear Register
   */
  struct NMICL
  : public reg< uint8_t, base_addr + 0x18, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x01 >;

    using NCL  = regbits< type,  0,  1 >;  /**< NMI interrupt cause clear bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
