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
//  Import from CMSIS-SVD: "STMicro/STM32L062x.svd"
//
//  name: STM32L062x
//  version: 1.0
//  description: STM32L062x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DAC_HPP_INCLUDED
#define ARCH_REG_DAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Digital-to-analog converter
 */
struct DAC
{
  static constexpr reg_addr_t base_addr = 0x40007400;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using DMAUDRIE1  = regbits< type, 13,  1 >;  /**< DAC channel1 DMA Underrun Interrupt enable          */
    using DMAEN1     = regbits< type, 12,  1 >;  /**< DAC channel1 DMA enable                             */
    using MAMP1      = regbits< type,  8,  4 >;  /**< DAC channel1 mask/amplitude selector                */
    using WAVE1      = regbits< type,  6,  2 >;  /**< DAC channel1 noise/triangle wave generation enable  */
    using TSEL1      = regbits< type,  3,  3 >;  /**< DAC channel1 trigger selection                      */
    using TEN1       = regbits< type,  2,  1 >;  /**< DAC channel1 trigger enable                         */
    using BOFF1      = regbits< type,  1,  1 >;  /**< DAC channel1 output buffer disable                  */
    using EN1        = regbits< type,  0,  1 >;  /**< DAC channel1 enable                                 */
  };

  /**
   * software trigger register
   */
  struct SWTRIGR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    using SWTRIG1  = regbits< type,  0,  1 >;  /**< DAC channel1 software trigger  */
  };

  /**
   * channel1 12-bit right-aligned data holding register
   */
  struct DHR12R1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0, 12 >;  /**< DAC channel1 12-bit right-aligned data  */
  };

  /**
   * channel1 12-bit left-aligned data holding register
   */
  struct DHR12L1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  4, 12 >;  /**< DAC channel1 12-bit left-aligned data  */
  };

  /**
   * channel1 8-bit right-aligned data holding register
   */
  struct DHR8R1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0,  8 >;  /**< DAC channel1 8-bit right-aligned data  */
  };

  /**
   * channel1 data output register
   */
  struct DOR1
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >;

    using DACC1DOR  = regbits< type,  0, 12 >;  /**< DAC channel1 data output  */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x34, Access::rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, Access::rw, 0x00000000 >;

    using DMAUDR1  = regbits< type, 13,  1 >;  /**< DAC channel1 DMA underrun flag  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC_HPP_INCLUDED
