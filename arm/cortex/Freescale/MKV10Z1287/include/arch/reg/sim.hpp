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
//  Import from CMSIS-SVD: "Freescale/MKV10Z1287.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV10Z1287
//  series: Kinetis_V
//  version: 1.6
//  description: MKV10Z1287 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SIM_HPP_INCLUDED
#define ARCH_REG_SIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System Integration Module
 */
struct SIM
{
  static constexpr reg_addr_t base_addr = 0x40047000;

  /**
   * System Options Register 1
   */
  struct SOPT1
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using OSC32KSEL  = regbits< type, 18,  2 >;  /**< 32K Oscillator Clock Select  */
  };

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x1004, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0 >;

    using CLKOUTSEL    = regbits< type,  5,  3 >;  /**< CLKOUT Select                     */
    using FTMFFCLKSEL  = regbits< type, 24,  2 >;  /**< FTM Fixed Frequency Clock Select  */
  };

  /**
   * System Options Register 4
   */
  struct SOPT4
  : public reg< uint32_t, base_addr + 0x100c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100c, rw, 0 >;

    using FTM0FLT0     = regbits< type,  0,  1 >;  /**< FTM0 Fault 0 Select                           */
    using FTM0FLT1     = regbits< type,  1,  1 >;  /**< FTM0 Fault 1 Select                           */
    using FTM1FLT0     = regbits< type,  2,  1 >;  /**< FTM1 Fault 0 Select                           */
    using FTM2FLT0     = regbits< type,  3,  1 >;  /**< FTM2 Fault 0 Select                           */
    using FTM0TRG0SRC  = regbits< type,  7,  1 >;  /**< FlexTimer 0 Hardware Trigger 0 Source Select  */
    using FTM0TRG1SRC  = regbits< type,  8,  1 >;  /**< FlexTimer 0 Hardware Trigger 1 Source Select  */
    using FTM0TRG2SRC  = regbits< type,  9,  1 >;  /**< FlexTimer 0 Hardware Trigger 2 Source Select  */
    using FTM1TRG0SRC  = regbits< type, 10,  1 >;  /**< FlexTimer 1 Hardware Trigger 0 Source Select  */
    using FTM1TRG1SRC  = regbits< type, 11,  1 >;  /**< FlexTimer 1 Hardware Trigger 1 Source Select  */
    using FTM1TRG2SRC  = regbits< type, 12,  1 >;  /**< FlexTimer 1 Hardware Trigger 2 Source Select  */
    using FTM2TRG0SRC  = regbits< type, 13,  1 >;  /**< FlexTimer 2 Hardware Trigger 0 Source Select  */
    using FTM2TRG1SRC  = regbits< type, 14,  1 >;  /**< FlexTimer 2 Hardware Trigger 1 Source Select  */
    using FTM2TRG2SRC  = regbits< type, 15,  1 >;  /**< FlexTimer 2 Hardware Trigger 2 Source Select  */
    using FTM1CH0SRC   = regbits< type, 18,  2 >;  /**< FTM1 Channel 0 Input Capture Source Select    */
    using FTM2CH0SRC   = regbits< type, 20,  2 >;  /**< FTM2 Channel 0 Input Capture Source Select    */
    using FTM2CH1SRC   = regbits< type, 22,  1 >;  /**< FTM2 Channel 1 Input Capture Source Select    */
    using FTM0CLKSEL   = regbits< type, 24,  2 >;  /**< FTM0 External Clock Pin Select                */
    using FTM1CLKSEL   = regbits< type, 26,  2 >;  /**< FTM1 External Clock Pin Select                */
    using FTM2CLKSEL   = regbits< type, 28,  2 >;  /**< FTM2 External Clock Pin Select                */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using UART0TXSRC  = regbits< type,  0,  2 >;  /**< UART 0 Transmit Data Source Select  */
    using UART0RXSRC  = regbits< type,  2,  2 >;  /**< UART 0 Receive Data Source Select   */
    using UART1TXSRC  = regbits< type,  4,  2 >;  /**< UART 1 Transmit Data Source Select  */
    using UART1RXSRC  = regbits< type,  6,  2 >;  /**< UART 1 Receive Data Source Select   */
    using UART0ODE    = regbits< type, 16,  1 >;  /**< UART0 Open Drain Enable             */
    using UART1ODE    = regbits< type, 17,  1 >;  /**< UART1 Open Drain Enable             */
  };

  /**
   * Systems Option Register 6
   */
  struct SOPT6
  : public reg< uint32_t, base_addr + 0x1014, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1014, rw, 0 >;

    using FTM3FLT0     = regbits< type,  0,  1 >;  /**< FTM3 Fault 0 Select                           */
    using FTM4FLT0     = regbits< type,  2,  1 >;  /**< FTM4 Fault 0 Select                           */
    using FTM5FLT0     = regbits< type,  3,  1 >;  /**< FTM5 Fault 0 Select                           */
    using FTM3TRG0SRC  = regbits< type,  7,  1 >;  /**< FlexTimer 3 Hardware Trigger 0 Source Select  */
    using FTM3TRG1SRC  = regbits< type,  8,  1 >;  /**< FlexTimer 3 Hardware Trigger 1 Source Select  */
    using FTM3TRG2SRC  = regbits< type,  9,  1 >;  /**< FlexTimer 3 Hardware Trigger 2 Source Select  */
    using FTM4TRG0SRC  = regbits< type, 10,  1 >;  /**< FlexTimer 4 Hardware Trigger 0 Source Select  */
    using FTM4TRG1SRC  = regbits< type, 11,  1 >;  /**< FlexTimer 4 Hardware Trigger 1 Source Select  */
    using FTM4TRG2SRC  = regbits< type, 12,  1 >;  /**< FlexTimer 4 Hardware Trigger 2 Source Select  */
    using FTM5TRG0SRC  = regbits< type, 13,  1 >;  /**< FlexTimer 5 Hardware Trigger 0 Source Select  */
    using FTM5TRG1SRC  = regbits< type, 14,  1 >;  /**< FlexTimer 5 Hardware Trigger 1 Source Select  */
    using FTM5TRG2SRC  = regbits< type, 15,  1 >;  /**< FlexTimer 5 Hardware Trigger 2 Source Select  */
    using FTM4CH0SRC   = regbits< type, 18,  2 >;  /**< FTM4 channel 0 input capture source select    */
    using FTM5CH0SRC   = regbits< type, 20,  2 >;  /**< FTM5 channel 0 input capture source select    */
    using FTM3CLKSEL   = regbits< type, 24,  2 >;  /**< FTM3 External Clock Pin Select                */
    using FTM4CLKSEL   = regbits< type, 26,  2 >;  /**< FTM4 External Clock Pin Select                */
    using FTM5CLKSEL   = regbits< type, 28,  2 >;  /**< FTM5 External Clock Pin Select                */
  };

  /**
   * System Options Register 7
   */
  struct SOPT7
  : public reg< uint32_t, base_addr + 0x1018, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1018, rw, 0 >;

    using ADC0TRGSEL     = regbits< type,  0,  4 >;  /**< ADC0 Trigger Select                               */
    using ADC0PRETRGSEL  = regbits< type,  4,  1 >;  /**< ADC0 Pre-trigger Select                           */
    using ADC0ALTTRGEN   = regbits< type,  6,  2 >;  /**< Enable alternative conversion triggers for ADC0.  */
    using ADC1TRGSEL     = regbits< type,  8,  4 >;  /**< ADC1 Trigger Select                               */
    using ADC1PRETRGSEL  = regbits< type, 12,  1 >;  /**< ADC1 Pre-trigger Select                           */
    using ADC1ALTTRGEN   = regbits< type, 14,  2 >;  /**< Enable alternative conversion triggers for ADC1.  */
    using ADC0ALTCLKSRC  = regbits< type, 24,  2 >;  /**< ADC0 ALT Clock Source Select                      */
    using ADC1ALTCLKSRC  = regbits< type, 26,  2 >;  /**< ADC1 ALT Clock Source Select                      */
  };

  /**
   * System Options Register 8
   */
  struct SOPT8
  : public reg< uint32_t, base_addr + 0x101c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x101c, rw, 0 >;

    using FTM0SYNCBIT      = regbits< type,  0,  1 >;  /**< FlexTimer 0 Hardware Trigger 0 configure by software   */
    using FTM1SYNCBIT      = regbits< type,  1,  1 >;  /**< FlexTimer 1 Hardware Trigger 0 configure by software   */
    using FTM2SYNCBIT      = regbits< type,  2,  1 >;  /**< FlexTimer 2 Hardware Trigger 0 configure by software   */
    using FTM3SYNCBIT      = regbits< type,  3,  1 >;  /**< FlexTimer 3 Hardware Trigger 0 configure by software   */
    using FTM4SYNCBIT      = regbits< type,  4,  1 >;  /**< FlexTimer 4 Hardware Trigger 0 configure by software   */
    using FTM5SYNCBIT      = regbits< type,  5,  1 >;  /**< FlexTimer 5 Hardware Trigger 0 configure by software   */
    using CARRIER_SELECT0  = regbits< type,  8,  2 >;  /**< Carrier frequency selection for FTM0/2 output channel  */
    using FTM0OCH0SRC      = regbits< type, 16,  1 >;  /**< FTM0 channel 0 output PWM/OCMP mode source select      */
    using FTM0OCH1SRC      = regbits< type, 17,  1 >;  /**< FTM0 channel 1 output PWM/OCMP mode source select      */
    using FTM0OCH2SRC      = regbits< type, 18,  1 >;  /**< FTM0 channel 2 output PWM/OCMP mode source select      */
    using FTM0OCH3SRC      = regbits< type, 19,  1 >;  /**< FTM0 channel 3 output PWM/OCMP mode source select      */
    using FTM0OCH4SRC      = regbits< type, 20,  1 >;  /**< FTM0 channel 4 output PWM/OCMP mode source select      */
    using FTM0OCH5SRC      = regbits< type, 21,  1 >;  /**< FTM0 channel 5 output PWM/OCMP mode source select      */
    using FTM2OCH0SRC      = regbits< type, 22,  1 >;  /**< FTM2 channel 0 output PWM/OCMP mode source select      */
    using FTM2OCH1SRC      = regbits< type, 23,  1 >;  /**< FTM2 channel 1 output PWM/OCMP mode source select      */
  };

  /**
   * System Options Register 9
   */
  struct SOPT9
  : public reg< uint32_t, base_addr + 0x1020, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1020, rw, 0 >;

    using CARRIER_SELECT1  = regbits< type,  8,  2 >;  /**< Carrier frequency selection for FTM3/4 output channel  */
    using FTM3OCH0SRC      = regbits< type, 16,  1 >;  /**< FTM3 channel 0 output PWM/OCMP mode source select      */
    using FTM3OCH1SRC      = regbits< type, 17,  1 >;  /**< FTM3 channel 1 output PWM/OCMP mode source select      */
    using FTM3OCH2SRC      = regbits< type, 18,  1 >;  /**< FTM3 channel 2 output PWM/OCMP mode source select      */
    using FTM3OCH3SRC      = regbits< type, 19,  1 >;  /**< FTM3 channel 3 output PWM/OCMP mode source select      */
    using FTM3OCH4SRC      = regbits< type, 20,  1 >;  /**< FTM3 channel 4 output PWM/OCMP mode source select      */
    using FTM3OCH5SRC      = regbits< type, 21,  1 >;  /**< FTM3 channel 5 output PWM/OCMP mode source select      */
    using FTM4OCH0SRC      = regbits< type, 22,  1 >;  /**< FTM4 channel 0 output PWM/OCMP mode source select      */
    using FTM4OCH1SRC      = regbits< type, 23,  1 >;  /**< FTM4 channel 1 output PWM/OCMP mode source select      */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0x10000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0x10000000 >;

    using PINID     = regbits< type,  0,  4 >;  /**< Pincount identification                 */
    using DIEID     = regbits< type,  7,  5 >;  /**< Device die number                       */
    using REVID     = regbits< type, 12,  4 >;  /**< Device revision number                  */
    using SRAMSIZE  = regbits< type, 16,  4 >;  /**< Specifies the size of the System SRAM.  */
    using SERIERID  = regbits< type, 20,  4 >;  /**< Series ID                               */
    using SUBFAMID  = regbits< type, 24,  4 >;  /**< V Sub-family ID                         */
    using FAMID     = regbits< type, 28,  4 >;  /**< V-Family ID                             */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0xF0000030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0xF0000030 >;

    using EWM    = regbits< type,  1,  1 >;  /**< EWM Clock Gate Control         */
    using I2C0   = regbits< type,  6,  1 >;  /**< I2C0 Clock Gate Control        */
    using UART0  = regbits< type, 10,  1 >;  /**< UART0 Clock Gate Control       */
    using UART1  = regbits< type, 11,  1 >;  /**< UART1 Clock Gate Control       */
    using CMP    = regbits< type, 19,  1 >;  /**< Comparator Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x40180 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x40180 >;

    using LPTMR  = regbits< type,  0,  1 >;  /**< Low Power Timer Clock Gate Control  */
    using PORTA  = regbits< type,  9,  1 >;  /**< Port A Clock Gate Control           */
    using PORTB  = regbits< type, 10,  1 >;  /**< Port B Clock Gate Control           */
    using PORTC  = regbits< type, 11,  1 >;  /**< Port C Clock Gate Control           */
    using PORTD  = regbits< type, 12,  1 >;  /**< Port D Clock Gate Control           */
    using PORTE  = regbits< type, 13,  1 >;  /**< Port E Clock Gate Control           */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x1 >;

    using FTF       = regbits< type,  0,  1 >;  /**< Flash Memory Clock Gate Control  */
    using DMAMUX    = regbits< type,  1,  1 >;  /**< DMA Mux Clock Gate Control       */
    using FLEXCAN0  = regbits< type,  4,  1 >;  /**< FLEXCAN0 Clock Gate Control      */
    using FTM3      = regbits< type,  6,  1 >;  /**< FTM3 Clock Gate Control          */
    using FTM4      = regbits< type,  7,  1 >;  /**< FTM4 Clock Gate Control          */
    using FTM5      = regbits< type,  8,  1 >;  /**< FTM5 Clock Gate Control          */
    using SPI0      = regbits< type, 12,  1 >;  /**< SPI0 Clock Gate Control          */
    using PDB1      = regbits< type, 17,  1 >;  /**< PDB1 Clock Gate Control          */
    using CRC       = regbits< type, 18,  1 >;  /**< CRC Clock Gate Control           */
    using PDB0      = regbits< type, 22,  1 >;  /**< PDB0 Clock Gate Control          */
    using FTM0      = regbits< type, 24,  1 >;  /**< FTM0 Clock Gate Control          */
    using FTM1      = regbits< type, 25,  1 >;  /**< FTM1 Clock Gate Control          */
    using FTM2      = regbits< type, 26,  1 >;  /**< FTM2 Clock Gate Control          */
    using ADC0      = regbits< type, 27,  1 >;  /**< ADC0 Clock Gate Control          */
    using ADC1      = regbits< type, 28,  1 >;  /**< ADC1 Clock Gate Control          */
    using DAC0      = regbits< type, 31,  1 >;  /**< DAC0 Clock Gate Control          */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x1040, rw, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0x1040, rw, 0x100 >;

    using DMA  = regbits< type,  8,  1 >;  /**< DMA Clock Gate Control  */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x1044, rw, 0x11000 >
  {
    using type = reg< uint32_t, base_addr + 0x1044, rw, 0x11000 >;

    using OUTDIV5    = regbits< type, 12,  3 >;  /**< Clock 5 Output Divider Value  */
    using OUTDIV5EN  = regbits< type, 15,  1 >;  /**< OUTDIV5 Divider Control       */
    using OUTDIV4    = regbits< type, 16,  3 >;  /**< Clock 4 Output Divider Value  */
    using OUTDIV1    = regbits< type, 28,  4 >;  /**< Clock 1 Output Divider Value  */
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x104c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, rw, 0 >;

    using FLASHDIS   = regbits< type,  0,  1 >;  /**< Flash Disable       */
    using FLASHDOZE  = regbits< type,  1,  1 >;  /**< Flash Doze          */
    using PFSIZE     = regbits< type, 24,  4 >;  /**< Program Flash Size  */
  };

  /**
   * Flash Configuration Register 2
   */
  struct FCFG2
  : public reg< uint32_t, base_addr + 0x1050, ro, 0x800000 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0x800000 >;

    using MAXADDR  = regbits< type, 24,  7 >;  /**< Max address block  */
  };

  /**
   * Unique Identification Register Mid-High
   */
  struct UIDMH
  : public reg< uint32_t, base_addr + 0x1058, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1058, ro, 0 >;

    using UID  = regbits< type,  0, 16 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Mid Low
   */
  struct UIDML
  : public reg< uint32_t, base_addr + 0x105c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x105c, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Low
   */
  struct UIDL
  : public reg< uint32_t, base_addr + 0x1060, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1060, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * WDOG Control Register
   */
  struct WDOGC
  : public reg< uint32_t, base_addr + 0x1100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1100, rw, 0 >;

    using WDOGCLKS  = regbits< type,  1,  1 >;  /**< WDOG Clock Select  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
