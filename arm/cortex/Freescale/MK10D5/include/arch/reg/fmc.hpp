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
//  Import from CMSIS-SVD: "Freescale/MK10D5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK10D5
//  series: Kinetis_K
//  version: 1.6
//  description: MK10D5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FMC_HPP_INCLUDED
#define ARCH_REG_FMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flash Memory Controller
 */
struct FMC
{
  static constexpr reg_addr_t base_addr = 0x4001f000;

  /**
   * Flash Access Protection Register
   */
  struct PFAPR
  : public reg< uint32_t, base_addr + 0, rw, 0xF8003F >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xF8003F >;

    using M0AP   = regbits< type,  0,  2 >;  /**< Master 0 Access Protection  */
    using M1AP   = regbits< type,  2,  2 >;  /**< Master 1 Access Protection  */
    using M2AP   = regbits< type,  4,  2 >;  /**< Master 2 Access Protection  */
    using M3AP   = regbits< type,  6,  2 >;  /**< Master 3 Access Protection  */
    using M0PFD  = regbits< type, 16,  1 >;  /**< Master 0 Prefetch Disable   */
    using M1PFD  = regbits< type, 17,  1 >;  /**< Master 1 Prefetch Disable   */
    using M2PFD  = regbits< type, 18,  1 >;  /**< Master 2 Prefetch Disable   */
    using M3PFD  = regbits< type, 19,  1 >;  /**< Master 3 Prefetch Disable   */
  };

  /**
   * Flash Control Register
   */
  struct PFB0CR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x3000001F >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x3000001F >;

    using B0SEBE    = regbits< type,  0,  1 >;  /**< Single Entry Buffer Enable              */
    using B0IPE     = regbits< type,  1,  1 >;  /**< Instruction Prefetch Enable             */
    using B0DPE     = regbits< type,  2,  1 >;  /**< Data Prefetch Enable                    */
    using B0ICE     = regbits< type,  3,  1 >;  /**< Instruction Cache Enable                */
    using B0DCE     = regbits< type,  4,  1 >;  /**< Data Cache Enable                       */
    using CRC       = regbits< type,  5,  3 >;  /**< Cache Replacement Control               */
    using B0MW      = regbits< type, 17,  2 >;  /**< Memory Width                            */
    using S_B_INV   = regbits< type, 19,  1 >;  /**< Invalidate Prefetch Speculation Buffer  */
    using CINV_WAY  = regbits< type, 20,  4 >;  /**< Cache Invalidate Way x                  */
    using CLCK_WAY  = regbits< type, 24,  4 >;  /**< Cache Lock Way x                        */
    using B0RWSC    = regbits< type, 28,  4 >;  /**< Read Wait State Control                 */
  };

  /**
   * Cache Tag Storage
   */
  struct TAGVDW0S%s
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using valid  = regbits< type,  0,  1 >;  /**< 1-bit valid for cache entry  */
    using tag    = regbits< type,  6, 13 >;  /**< 13-bit tag for cache entry   */
  };

  /**
   * Cache Tag Storage
   */
  struct TAGVDW1S%s
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using valid  = regbits< type,  0,  1 >;  /**< 1-bit valid for cache entry  */
    using tag    = regbits< type,  6, 13 >;  /**< 13-bit tag for cache entry   */
  };

  /**
   * Cache Tag Storage
   */
  struct TAGVDW2S%s
  : public reg< uint32_t, base_addr + 0x140, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0 >;

    using valid  = regbits< type,  0,  1 >;  /**< 1-bit valid for cache entry  */
    using tag    = regbits< type,  6, 13 >;  /**< 13-bit tag for cache entry   */
  };

  /**
   * Cache Tag Storage
   */
  struct TAGVDW3S%s
  : public reg< uint32_t, base_addr + 0x160, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0 >;

    using valid  = regbits< type,  0,  1 >;  /**< 1-bit valid for cache entry  */
    using tag    = regbits< type,  6, 13 >;  /**< 13-bit tag for cache entry   */
  };

  /**
   * Cache Data Storage
   */
  struct DATAW0S%s
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [31:0] of data entry  */
  };

  /**
   * Cache Data Storage
   */
  struct DATAW1S%s
  : public reg< uint32_t, base_addr + 0x244, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x244, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [31:0] of data entry  */
  };

  /**
   * Cache Data Storage
   */
  struct DATAW2S%s
  : public reg< uint32_t, base_addr + 0x284, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x284, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [31:0] of data entry  */
  };

  /**
   * Cache Data Storage
   */
  struct DATAW3S%s
  : public reg< uint32_t, base_addr + 0x2c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c4, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [31:0] of data entry  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FMC_HPP_INCLUDED
