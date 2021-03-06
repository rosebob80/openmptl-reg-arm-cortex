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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9N12.svd"
//
//  vendor: Atmel
//  name: AT91SAM9N12
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9N12 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9N12.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SCKC_HPP_INCLUDED
#define ARCH_REG_SCKC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Slow Clock Controller
 */
struct SCKC
{
  static constexpr reg_addr_t base_addr = 0xfffffe50;

  /**
   * Slow Clock Configuration Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000001 >;

    using RCEN      = regbits< type,  0,  1 >;  /**< Internal 32 kHz RC Oscillator  */
    using OSC32EN   = regbits< type,  1,  1 >;  /**< 32,768 Hz Oscillator           */
    using OSC32BYP  = regbits< type,  2,  1 >;  /**< 32,768Hz Oscillator Bypass     */
    using OSCSEL    = regbits< type,  3,  1 >;  /**< Slow Clock Selector            */
  };
};
} // namespace mptl

#endif // ARCH_REG_SCKC_HPP_INCLUDED
