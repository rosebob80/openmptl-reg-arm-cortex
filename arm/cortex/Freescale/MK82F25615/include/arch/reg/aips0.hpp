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
//  Import from CMSIS-SVD: "Freescale/MK82F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK82F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK82F25615 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AIPS0_HPP_INCLUDED
#define ARCH_REG_AIPS0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AIPS-Lite Bridge
 */
struct AIPS0
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Master Privilege Register A
   */
  struct MPRA
  : public reg< uint32_t, base_addr + 0, rw, 0x77700000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x77700000 >;

    using MPL4  = regbits< type, 12,  1 >;  /**< Master 4 Privilege Level     */
    using MTW4  = regbits< type, 13,  1 >;  /**< Master 4 Trusted For Writes  */
    using MTR4  = regbits< type, 14,  1 >;  /**< Master 4 Trusted For Read    */
    using MPL3  = regbits< type, 16,  1 >;  /**< Master 3 Privilege Level     */
    using MTW3  = regbits< type, 17,  1 >;  /**< Master 3 Trusted For Writes  */
    using MTR3  = regbits< type, 18,  1 >;  /**< Master 3 Trusted For Read    */
    using MPL2  = regbits< type, 20,  1 >;  /**< Master 2 Privilege Level     */
    using MTW2  = regbits< type, 21,  1 >;  /**< Master 2 Trusted For Writes  */
    using MTR2  = regbits< type, 22,  1 >;  /**< Master 2 Trusted For Read    */
    using MPL1  = regbits< type, 24,  1 >;  /**< Master 1 Privilege Level     */
    using MTW1  = regbits< type, 25,  1 >;  /**< Master 1 Trusted for Writes  */
    using MTR1  = regbits< type, 26,  1 >;  /**< Master 1 Trusted for Read    */
    using MPL0  = regbits< type, 28,  1 >;  /**< Master 0 Privilege Level     */
    using MTW0  = regbits< type, 29,  1 >;  /**< Master 0 Trusted For Writes  */
    using MTR0  = regbits< type, 30,  1 >;  /**< Master 0 Trusted For Read    */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRA
  : public reg< uint32_t, base_addr + 0x20, rw, 0x40004000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x40004000 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRB
  : public reg< uint32_t, base_addr + 0x24, rw, 0x44004404 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x44004404 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRC
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRD
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x4 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRE
  : public reg< uint32_t, base_addr + 0x40, rw, 0x44000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x44000000 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRF
  : public reg< uint32_t, base_addr + 0x44, rw, 0x4404 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x4404 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRG
  : public reg< uint32_t, base_addr + 0x48, rw, 0x400444 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x400444 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRH
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x44440444 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x44440444 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRI
  : public reg< uint32_t, base_addr + 0x50, rw, 0x44004404 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x44004404 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRJ
  : public reg< uint32_t, base_addr + 0x54, rw, 0x44444400 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x44444400 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRK
  : public reg< uint32_t, base_addr + 0x58, rw, 0x400000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x400000 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRL
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRM
  : public reg< uint32_t, base_addr + 0x60, rw, 0x4404444 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x4404444 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRN
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRO
  : public reg< uint32_t, base_addr + 0x68, rw, 0x444000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x444000 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRP
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x44444444 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x44444444 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AIPS0_HPP_INCLUDED
