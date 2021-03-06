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
//  Import from CMSIS-SVD: "Freescale/MKE04Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE04Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE04Z4 Freescale Microcontroller
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
  static constexpr reg_addr_t base_addr = 0x40048000;

  /**
   * System Reset Status and ID Register
   */
  struct SRSID
  : public reg< uint32_t, base_addr + 0, ro, 0x4000002 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x4000002 >;

    using LVD       = regbits< type,  1,  1 >;  /**< Low Voltage Detect                  */
    using LOC       = regbits< type,  2,  1 >;  /**< Internal Clock Source Module Reset  */
    using WDOG      = regbits< type,  5,  1 >;  /**< Watchdog (WDOG)                     */
    using PIN       = regbits< type,  6,  1 >;  /**< External Reset Pin                  */
    using POR       = regbits< type,  7,  1 >;  /**< Power-On Reset                      */
    using LOCKUP    = regbits< type,  9,  1 >;  /**< Core Lockup                         */
    using SW        = regbits< type, 10,  1 >;  /**< Software                            */
    using MDMAP     = regbits< type, 11,  1 >;  /**< MDM-AP System Reset Request         */
    using SACKERR   = regbits< type, 13,  1 >;  /**< Stop Mode Acknowledge Error Reset   */
    using PINID     = regbits< type, 16,  4 >;  /**< Device Pin ID                       */
    using RevID     = regbits< type, 20,  4 >;  /**< Device Revision Number              */
    using SUBFAMID  = regbits< type, 24,  4 >;  /**< Kinetis sub-family ID               */
    using FAMID     = regbits< type, 28,  4 >;  /**< Kinetis family ID                   */
  };

  /**
   * System Options Register
   */
  struct SOPT
  : public reg< uint32_t, base_addr + 0x4, rw, 0xE >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xE >;

    using NMIE     = regbits< type,  1,  1 >;  /**< NMI Pin Enable                     */
    using RSTPE    = regbits< type,  2,  1 >;  /**< RESET Pin Enable                   */
    using SWDE     = regbits< type,  3,  1 >;  /**< Single Wire Debug Port Pin Enable  */
    using ACTRG    = regbits< type,  5,  1 >;  /**< ACMP Trigger FTM2 selection        */
    using FTMIC    = regbits< type,  6,  2 >;  /**< FTM0CH0 Input Capture Source       */
    using RXDFE    = regbits< type,  8,  2 >;  /**< UART0 RxD Filter Select            */
    using RXDCE    = regbits< type, 12,  1 >;  /**< UART0_RX Capture Select            */
    using FTMSYNC  = regbits< type, 14,  1 >;  /**< FTM2 Synchronization Select        */
    using TXDME    = regbits< type, 15,  1 >;  /**< UART0_TX Modulation Select         */
    using BUSREF   = regbits< type, 16,  3 >;  /**< BUS Clock Output select            */
    using CLKOE    = regbits< type, 19,  1 >;  /**< Bus Clock Output Enable            */
    using ADHWT    = regbits< type, 20,  3 >;  /**< ADC Hardware Trigger Source        */
    using DLYACT   = regbits< type, 23,  1 >;  /**< FTM2 Trigger Delay Active          */
    using DELAY    = regbits< type, 24,  8 >;  /**< FTM2 Trigger Delay                 */
  };

  /**
   * Pin Selection Register
   */
  struct PINSEL
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using I2C0PS     = regbits< type,  5,  1 >;  /**< I2C0 Port Pin Select      */
    using SPI0PS     = regbits< type,  6,  1 >;  /**< SPI0 Pin Select           */
    using UART0PS    = regbits< type,  7,  1 >;  /**< UART0 Pin Select          */
    using FTM0PS0    = regbits< type,  8,  1 >;  /**< FTM0_CH0 Port Pin Select  */
    using FTM0PS1    = regbits< type,  9,  1 >;  /**< FTM0_CH1 Port Pin Select  */
    using FTM2PS2    = regbits< type, 14,  1 >;  /**< FTM2_CH2 Port Pin Select  */
    using FTM2PS3    = regbits< type, 15,  1 >;  /**< FTM2_CH3 Port Pin Select  */
    using FTM0CLKPS  = regbits< type, 28,  1 >;  /**< FTM0 TCLK Pin Select      */
    using FTM2CLKPS  = regbits< type, 30,  1 >;  /**< FTM2 TCLK Pin Select      */
    using PWTCLKPS   = regbits< type, 31,  1 >;  /**< PWT TCLK Pin Select       */
  };

  /**
   * System Clock Gating Control Register
   */
  struct SCGC
  : public reg< uint32_t, base_addr + 0xc, rw, 0x3000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x3000 >;

    using RTC    = regbits< type,  0,  1 >;  /**< RTC Clock Gate Control                         */
    using PIT    = regbits< type,  1,  1 >;  /**< PIT Clock Gate Control                         */
    using PWT    = regbits< type,  4,  1 >;  /**< PWT Clock Gate Control                         */
    using FTM0   = regbits< type,  5,  1 >;  /**< FTM0 Clock Gate Control                        */
    using FTM2   = regbits< type,  7,  1 >;  /**< FTM2 Clock Gate Control                        */
    using CRC    = regbits< type, 10,  1 >;  /**< CRC Clock Gate Control                         */
    using FLASH  = regbits< type, 12,  1 >;  /**< Flash Clock Gate Control                       */
    using SWD    = regbits< type, 13,  1 >;  /**< SWD (single wire debugger) Clock Gate Control  */
    using I2C    = regbits< type, 17,  1 >;  /**< I2C Clock Gate Control                         */
    using SPI0   = regbits< type, 18,  1 >;  /**< SPI0 Clock Gate Control                        */
    using UART0  = regbits< type, 20,  1 >;  /**< UART0 Clock Gate Control                       */
    using KBI0   = regbits< type, 24,  1 >;  /**< KBI0 Clock Gate Control                        */
    using KBI1   = regbits< type, 25,  1 >;  /**< KBI1 Clock Gate Control                        */
    using IRQ    = regbits< type, 27,  1 >;  /**< IRQ Clock Gate Control                         */
    using ADC    = regbits< type, 29,  1 >;  /**< ADC Clock Gate Control                         */
    using ACMP0  = regbits< type, 30,  1 >;  /**< ACMP0 Clock Gate Control                       */
    using ACMP1  = regbits< type, 31,  1 >;  /**< ACMP1 Clock Gate Control                       */
  };

  /**
   * Universally Unique Identifier Low Register
   */
  struct UUIDL
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using ID  = regbits< type,  0, 32 >;  /**< Universally Unique Identifier  */
  };

  /**
   * Universally Unique Identifier Middle Low Register
   */
  struct UUIDML
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    using ID  = regbits< type,  0, 32 >;  /**< Universally Unique Identifier  */
  };

  /**
   * Universally Unique Identifier Middle High Register
   */
  struct UUIDMH
  : public reg< uint32_t, base_addr + 0x18, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0 >;

    using ID  = regbits< type,  0, 16 >;  /**< Universally Unique Identifier  */
  };

  /**
   * Clock Divider Register
   */
  struct CLKDIV
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using OUTDIV3  = regbits< type, 20,  1 >;  /**< Clock 3 output divider value  */
    using OUTDIV2  = regbits< type, 24,  1 >;  /**< Clock 2 output divider value  */
    using OUTDIV1  = regbits< type, 28,  2 >;  /**< Clock 1 output divider value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
