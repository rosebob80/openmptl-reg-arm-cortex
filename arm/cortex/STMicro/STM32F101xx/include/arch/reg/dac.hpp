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
//  Import from CMSIS-SVD: "STMicro/STM32F101xx.svd"
//
//  name: STM32F101xx
//  version: 1.1
//  description: STM32F101xx
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
 * Digital to analog converter
 */
struct DAC
{
  static constexpr reg_addr_t base_addr = 0x40007400;

  /**
   * Control register (DAC_CR)
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EN1     = regbits< type,  0,  1 >;  /**< DAC channel1 enable                                 */
    using BOFF1   = regbits< type,  1,  1 >;  /**< DAC channel1 output buffer disable                  */
    using TEN1    = regbits< type,  2,  1 >;  /**< DAC channel1 trigger enable                         */
    using TSEL1   = regbits< type,  3,  3 >;  /**< DAC channel1 trigger selection                      */
    using WAVE1   = regbits< type,  6,  2 >;  /**< DAC channel1 noise/triangle wave generation enable  */
    using MAMP1   = regbits< type,  8,  4 >;  /**< DAC channel1 mask/amplitude selector                */
    using DMAEN1  = regbits< type, 12,  1 >;  /**< DAC channel1 DMA enable                             */
    using EN2     = regbits< type, 16,  1 >;  /**< DAC channel2 enable                                 */
    using BOFF2   = regbits< type, 17,  1 >;  /**< DAC channel2 output buffer disable                  */
    using TEN2    = regbits< type, 18,  1 >;  /**< DAC channel2 trigger enable                         */
    using TSEL2   = regbits< type, 19,  3 >;  /**< DAC channel2 trigger selection                      */
    using WAVE2   = regbits< type, 22,  2 >;  /**< DAC channel2 noise/triangle wave generation enable  */
    using MAMP2   = regbits< type, 24,  4 >;  /**< DAC channel2 mask/amplitude selector                */
    using DMAEN2  = regbits< type, 28,  1 >;  /**< DAC channel2 DMA enable                             */
  };

  /**
   * DAC software trigger register (DAC_SWTRIGR)
   */
  struct SWTRIGR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    using SWTRIG1  = regbits< type,  0,  1 >;  /**< DAC channel1 software trigger  */
    using SWTRIG2  = regbits< type,  1,  1 >;  /**< DAC channel2 software trigger  */
  };

  /**
   * DAC channel1 12-bit right-aligned data holding register(DAC_DHR12R1)
   */
  struct DHR12R1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0, 12 >;  /**< DAC channel1 12-bit right-aligned data  */
  };

  /**
   * DAC channel1 12-bit left aligned data holding register (DAC_DHR12L1)
   */
  struct DHR12L1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  4, 12 >;  /**< DAC channel1 12-bit left-aligned data  */
  };

  /**
   * DAC channel1 8-bit right aligned data holding register (DAC_DHR8R1)
   */
  struct DHR8R1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0,  8 >;  /**< DAC channel1 8-bit right-aligned data  */
  };

  /**
   * DAC channel2 12-bit right aligned data holding register (DAC_DHR12R2)
   */
  struct DHR12R2
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using DACC2DHR  = regbits< type,  0, 12 >;  /**< DAC channel2 12-bit right-aligned data  */
  };

  /**
   * DAC channel2 12-bit left aligned data holding register (DAC_DHR12L2)
   */
  struct DHR12L2
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using DACC2DHR  = regbits< type,  4, 12 >;  /**< DAC channel2 12-bit left-aligned data  */
  };

  /**
   * DAC channel2 8-bit right-aligned data holding register (DAC_DHR8R2)
   */
  struct DHR8R2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using DACC2DHR  = regbits< type,  0,  8 >;  /**< DAC channel2 8-bit right-aligned data  */
  };

  /**
   * Dual DAC 12-bit right-aligned data holding register (DAC_DHR12RD), Bits 31:28 Reserved, Bits 15:12 Reserved
   */
  struct DHR12RD
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0, 12 >;  /**< DAC channel1 12-bit right-aligned data  */
    using DACC2DHR  = regbits< type, 16, 12 >;  /**< DAC channel2 12-bit right-aligned data  */
  };

  /**
   * DUAL DAC 12-bit left aligned data holding register (DAC_DHR12LD), Bits 19:16 Reserved, Bits 3:0 Reserved
   */
  struct DHR12LD
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  4, 12 >;  /**< DAC channel1 12-bit left-aligned data   */
    using DACC2DHR  = regbits< type, 20, 12 >;  /**< DAC channel2 12-bit right-aligned data  */
  };

  /**
   * DUAL DAC 8-bit right aligned data holding register (DAC_DHR8RD), Bits 31:16 Reserved
   */
  struct DHR8RD
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0,  8 >;  /**< DAC channel1 8-bit right-aligned data  */
    using DACC2DHR  = regbits< type,  8,  8 >;  /**< DAC channel2 8-bit right-aligned data  */
  };

  /**
   * DAC channel1 data output register (DAC_DOR1)
   */
  struct DOR1
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >;

    using DACC1DOR  = regbits< type,  0, 12 >;  /**< DAC channel1 data output  */
  };

  /**
   * DAC channel2 data output register (DAC_DOR2)
   */
  struct DOR2
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using DACC2DOR  = regbits< type,  0, 12 >;  /**< DAC channel2 data output  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC_HPP_INCLUDED
