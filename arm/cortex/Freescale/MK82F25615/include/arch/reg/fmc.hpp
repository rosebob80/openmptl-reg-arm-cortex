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
  : public reg< uint32_t, base_addr + 0, rw, 0x3F >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x3F >;

    using M0AP   = regbits< type,  0,  2 >;  /**< Master 0 Access Protection  */
    using M1AP   = regbits< type,  2,  2 >;  /**< Master 1 Access Protection  */
    using M2AP   = regbits< type,  4,  2 >;  /**< Master 2 Access Protection  */
    using M3AP   = regbits< type,  6,  2 >;  /**< Master 3 Access Protection  */
    using M4AP   = regbits< type,  8,  2 >;  /**< Master 4 Access Protection  */
    using M0PFD  = regbits< type, 16,  1 >;  /**< Master 0 Prefetch Disable   */
    using M1PFD  = regbits< type, 17,  1 >;  /**< Master 1 Prefetch Disable   */
    using M2PFD  = regbits< type, 18,  1 >;  /**< Master 2 Prefetch Disable   */
    using M3PFD  = regbits< type, 19,  1 >;  /**< Master 3 Prefetch Disable   */
    using M4PFD  = regbits< type, 20,  1 >;  /**< Master 4 Prefetch Disable   */
  };

  /**
   * Flash Bank 0 Control Register
   */
  struct PFB0CR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x3004001F >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x3004001F >;

    using B0SEBE    = regbits< type,  0,  1 >;  /**< Bank 0 Single Entry Buffer Enable       */
    using B0IPE     = regbits< type,  1,  1 >;  /**< Bank 0 Instruction Prefetch Enable      */
    using B0DPE     = regbits< type,  2,  1 >;  /**< Bank 0 Data Prefetch Enable             */
    using B0ICE     = regbits< type,  3,  1 >;  /**< Bank 0 Instruction Cache Enable         */
    using B0DCE     = regbits< type,  4,  1 >;  /**< Bank 0 Data Cache Enable                */
    using CRC       = regbits< type,  5,  3 >;  /**< Cache Replacement Control               */
    using B0MW      = regbits< type, 17,  2 >;  /**< Bank 0 Memory Width                     */
    using S_B_INV   = regbits< type, 19,  1 >;  /**< Invalidate Prefetch Speculation Buffer  */
    using CINV_WAY  = regbits< type, 20,  4 >;  /**< Cache Invalidate Way x                  */
    using CLCK_WAY  = regbits< type, 24,  4 >;  /**< Cache Lock Way x                        */
    using B0RWSC    = regbits< type, 28,  4 >;  /**< Bank 0 Read Wait State Control          */
  };

  /**
   * Reserved
   */
  struct Reserved
  : public reg< uint32_t, base_addr + 0x8, ro, 0x30000000 >
  {
  };

  /**
   * Cache Tag Storage
   */
  struct TAGVDW0S%s
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using valid      = regbits< type,  0,  1 >;  /**< 1-bit valid for cache entry  */
    using cache_tag  = regbits< type,  6, 14 >;  /**< 14-bit tag for cache entry   */
  };

  /**
   * Cache Tag Storage
   */
  struct TAGVDW1S%s
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using valid      = regbits< type,  0,  1 >;  /**< 1-bit valid for cache entry  */
    using cache_tag  = regbits< type,  6, 14 >;  /**< 14-bit tag for cache entry   */
  };

  /**
   * Cache Tag Storage
   */
  struct TAGVDW2S%s
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using valid      = regbits< type,  0,  1 >;  /**< 1-bit valid for cache entry  */
    using cache_tag  = regbits< type,  6, 14 >;  /**< 14-bit tag for cache entry   */
  };

  /**
   * Cache Tag Storage
   */
  struct TAGVDW3S%s
  : public reg< uint32_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0 >;

    using valid      = regbits< type,  0,  1 >;  /**< 1-bit valid for cache entry  */
    using cache_tag  = regbits< type,  6, 14 >;  /**< 14-bit tag for cache entry   */
  };

  /**
   * Cache Data Storage (uppermost word)
   */
  struct DATAW0S%sUM
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [127:96] of data entry  */
  };

  /**
   * Cache Data Storage (mid-upper word)
   */
  struct DATAW0S%sMU
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [95:64] of data entry  */
  };

  /**
   * Cache Data Storage (mid-lower word)
   */
  struct DATAW0S%sML
  : public reg< uint32_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [63:32] of data entry  */
  };

  /**
   * Cache Data Storage (lowermost word)
   */
  struct DATAW0S%sLM
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [31:0] of data entry  */
  };

  /**
   * Cache Data Storage (uppermost word)
   */
  struct DATAW1S%sUM
  : public reg< uint32_t, base_addr + 0x240, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x240, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [127:96] of data entry  */
  };

  /**
   * Cache Data Storage (mid-upper word)
   */
  struct DATAW1S%sMU
  : public reg< uint32_t, base_addr + 0x244, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x244, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [95:64] of data entry  */
  };

  /**
   * Cache Data Storage (mid-lower word)
   */
  struct DATAW1S%sML
  : public reg< uint32_t, base_addr + 0x248, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x248, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [63:32] of data entry  */
  };

  /**
   * Cache Data Storage (lowermost word)
   */
  struct DATAW1S%sLM
  : public reg< uint32_t, base_addr + 0x24c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24c, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [31:0] of data entry  */
  };

  /**
   * Cache Data Storage (uppermost word)
   */
  struct DATAW2S%sUM
  : public reg< uint32_t, base_addr + 0x280, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x280, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [127:96] of data entry  */
  };

  /**
   * Cache Data Storage (mid-upper word)
   */
  struct DATAW2S%sMU
  : public reg< uint32_t, base_addr + 0x284, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x284, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [95:64] of data entry  */
  };

  /**
   * Cache Data Storage (mid-lower word)
   */
  struct DATAW2S%sML
  : public reg< uint32_t, base_addr + 0x288, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x288, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [63:32] of data entry  */
  };

  /**
   * Cache Data Storage (lowermost word)
   */
  struct DATAW2S%sLM
  : public reg< uint32_t, base_addr + 0x28c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28c, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [31:0] of data entry  */
  };

  /**
   * Cache Data Storage (uppermost word)
   */
  struct DATAW3S%sUM
  : public reg< uint32_t, base_addr + 0x2c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c0, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [127:96] of data entry  */
  };

  /**
   * Cache Data Storage (mid-upper word)
   */
  struct DATAW3S%sMU
  : public reg< uint32_t, base_addr + 0x2c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c4, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [95:64] of data entry  */
  };

  /**
   * Cache Data Storage (mid-lower word)
   */
  struct DATAW3S%sML
  : public reg< uint32_t, base_addr + 0x2c8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c8, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [63:32] of data entry  */
  };

  /**
   * Cache Data Storage (lowermost word)
   */
  struct DATAW3S%sLM
  : public reg< uint32_t, base_addr + 0x2cc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2cc, rw, 0 >;

    using data  = regbits< type,  0, 32 >;  /**< Bits [31:0] of data entry  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FMC_HPP_INCLUDED
