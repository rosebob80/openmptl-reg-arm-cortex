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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D34.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D34
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D34 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, LCD controller, gigabit Ethernet, dual CAN, security (refer to http://www.atmel.com/devices/SAMA5D34.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_WDT_HPP_INCLUDED
#define ARCH_REG_WDT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Watchdog Timer
 */
struct WDT
{
  static constexpr reg_addr_t base_addr = 0xfffffe40;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using WDRSTT  = regbits< type,  0,  1 >;  /**< Watchdog Restart  */
    using KEY     = regbits< type, 24,  8 >;  /**< Password          */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x3FFF2FFF >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x3FFF2FFF >;

    using WDV        = regbits< type,  0, 12 >;  /**< Watchdog Counter Value           */
    using WDFIEN     = regbits< type, 12,  1 >;  /**< Watchdog Fault Interrupt Enable  */
    using WDRSTEN    = regbits< type, 13,  1 >;  /**< Watchdog Reset Enable            */
    using WDRPROC    = regbits< type, 14,  1 >;  /**< Watchdog Reset Processor         */
    using WDDIS      = regbits< type, 15,  1 >;  /**< Watchdog Disable                 */
    using WDD        = regbits< type, 16, 12 >;  /**< Watchdog Delta Value             */
    using WDDBGHLT   = regbits< type, 28,  1 >;  /**< Watchdog Debug Halt              */
    using WDIDLEHLT  = regbits< type, 29,  1 >;  /**< Watchdog Idle Halt               */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using WDUNF  = regbits< type,  0,  1 >;  /**< Watchdog Underflow  */
    using WDERR  = regbits< type,  1,  1 >;  /**< Watchdog Error      */
  };
};
} // namespace mptl

#endif // ARCH_REG_WDT_HPP_INCLUDED
