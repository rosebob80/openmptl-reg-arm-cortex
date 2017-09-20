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
//  Import from CMSIS-SVD: "STMicro/STM32F303xE.svd"
//
//  name: STM32F303xE
//  version: 1.0
//  description: STM32F303xE
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SYSCFG_HPP_INCLUDED
#define ARCH_REG_SYSCFG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System configuration controller
 */
struct SYSCFG
{
  static constexpr reg_addr_t base_addr = 0x40010000;

  /**
   * configuration register 1
   */
  struct CFGR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using MEM_MODE           = regbits< type,  0,  2 >;  /**< Memory mapping selection bits                             */
    using USB_IT_RMP         = regbits< type,  5,  1 >;  /**< USB interrupt remap                                       */
    using TIM1_ITR_RMP       = regbits< type,  6,  1 >;  /**< Timer 1 ITR3 selection                                    */
    using DAC_TRIG_RMP       = regbits< type,  7,  1 >;  /**< DAC trigger remap (when TSEL = 001)                       */
    using ADC24_DMA_RMP      = regbits< type,  8,  1 >;  /**< ADC24 DMA remapping bit                                   */
    using TIM16_DMA_RMP      = regbits< type, 11,  1 >;  /**< TIM16 DMA request remapping bit                           */
    using TIM17_DMA_RMP      = regbits< type, 12,  1 >;  /**< TIM17 DMA request remapping bit                           */
    using TIM6_DAC1_DMA_RMP  = regbits< type, 13,  1 >;  /**< TIM6 and DAC1 DMA request remapping bit                   */
    using TIM7_DAC2_DMA_RMP  = regbits< type, 14,  1 >;  /**< TIM7 and DAC2 DMA request remapping bit                   */
    using I2C_PB6_FM         = regbits< type, 16,  1 >;  /**< Fast Mode Plus (FM+) driving capability activation bits.  */
    using I2C_PB7_FM         = regbits< type, 17,  1 >;  /**< Fast Mode Plus (FM+) driving capability activation bits.  */
    using I2C_PB8_FM         = regbits< type, 18,  1 >;  /**< Fast Mode Plus (FM+) driving capability activation bits.  */
    using I2C_PB9_FM         = regbits< type, 19,  1 >;  /**< Fast Mode Plus (FM+) driving capability activation bits.  */
    using I2C1_FM            = regbits< type, 20,  1 >;  /**< I2C1 Fast Mode Plus                                       */
    using I2C2_FM            = regbits< type, 21,  1 >;  /**< I2C2 Fast Mode Plus                                       */
    using ENCODER_MODE       = regbits< type, 22,  2 >;  /**< Encoder mode                                              */
    using FPU_IT             = regbits< type, 26,  6 >;  /**< Interrupt enable bits from FPU                            */
  };

  /**
   * external interrupt configuration register 1
   */
  struct EXTICR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using EXTI3  = regbits< type, 12,  4 >;  /**< EXTI 3 configuration bits  */
    using EXTI2  = regbits< type,  8,  4 >;  /**< EXTI 2 configuration bits  */
    using EXTI1  = regbits< type,  4,  4 >;  /**< EXTI 1 configuration bits  */
    using EXTI0  = regbits< type,  0,  4 >;  /**< EXTI 0 configuration bits  */
  };

  /**
   * external interrupt configuration register 2
   */
  struct EXTICR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using EXTI7  = regbits< type, 12,  4 >;  /**< EXTI 7 configuration bits  */
    using EXTI6  = regbits< type,  8,  4 >;  /**< EXTI 6 configuration bits  */
    using EXTI5  = regbits< type,  4,  4 >;  /**< EXTI 5 configuration bits  */
    using EXTI4  = regbits< type,  0,  4 >;  /**< EXTI 4 configuration bits  */
  };

  /**
   * external interrupt configuration register 3
   */
  struct EXTICR3
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using EXTI11  = regbits< type, 12,  4 >;  /**< EXTI 11 configuration bits  */
    using EXTI10  = regbits< type,  8,  4 >;  /**< EXTI 10 configuration bits  */
    using EXTI9   = regbits< type,  4,  4 >;  /**< EXTI 9 configuration bits   */
    using EXTI8   = regbits< type,  0,  4 >;  /**< EXTI 8 configuration bits   */
  };

  /**
   * external interrupt configuration register 4
   */
  struct EXTICR4
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000 >;

    using EXTI15  = regbits< type, 12,  4 >;  /**< EXTI 15 configuration bits  */
    using EXTI14  = regbits< type,  8,  4 >;  /**< EXTI 14 configuration bits  */
    using EXTI13  = regbits< type,  4,  4 >;  /**< EXTI 13 configuration bits  */
    using EXTI12  = regbits< type,  0,  4 >;  /**< EXTI 12 configuration bits  */
  };

  /**
   * configuration register 2
   */
  struct CFGR2
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0000 >;

    using LOCUP_LOCK        = regbits< type,  0,  1 >;  /**< Cortex-M0 LOCKUP bit enable bit              */
    using SRAM_PARITY_LOCK  = regbits< type,  1,  1 >;  /**< SRAM parity lock bit                         */
    using PVD_LOCK          = regbits< type,  2,  1 >;  /**< PVD lock enable bit                          */
    using BYP_ADD_PAR       = regbits< type,  4,  1 >;  /**< Bypass address bit 29 in parity calculation  */
    using SRAM_PEF          = regbits< type,  8,  1 >;  /**< SRAM parity flag                             */
  };

  /**
   * CCM SRAM protection register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using PAGE0_WP  = regbits< type,  0,  1 >;  /**< CCM SRAM page write protection bit  */
    using PAGE1_WP  = regbits< type,  1,  1 >;  /**< CCM SRAM page write protection bit  */
    using PAGE2_WP  = regbits< type,  2,  1 >;  /**< CCM SRAM page write protection bit  */
    using PAGE3_WP  = regbits< type,  3,  1 >;  /**< CCM SRAM page write protection bit  */
    using PAGE4_WP  = regbits< type,  4,  1 >;  /**< CCM SRAM page write protection bit  */
    using PAGE5_WP  = regbits< type,  5,  1 >;  /**< CCM SRAM page write protection bit  */
    using PAGE6_WP  = regbits< type,  6,  1 >;  /**< CCM SRAM page write protection bit  */
    using PAGE7_WP  = regbits< type,  7,  1 >;  /**< CCM SRAM page write protection bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSCFG_HPP_INCLUDED
