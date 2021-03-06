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
//  Import from CMSIS-SVD: "Freescale/MKV56F22.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV56F22
//  series: Kinetis_V
//  version: 1.6
//  description: MKV56F22 Freescale Microcontroller
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
   * Flash Bank 0 Control Register
   */
  struct PFB0CR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x30060006 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x30060006 >;

    using B0IPE   = regbits< type,  1,  1 >;  /**< Bank 0 Instruction Prefetch Enable      */
    using B0DPE   = regbits< type,  2,  1 >;  /**< Bank 0 Data Prefetch Enable             */
    using B0MW    = regbits< type, 17,  2 >;  /**< Bank 0 Memory Width                     */
    using S_INV   = regbits< type, 19,  1 >;  /**< Invalidate Prefetch Speculation Buffer  */
    using B0RWSC  = regbits< type, 28,  4 >;  /**< Bank 0 Read Wait State Control          */
  };
};
} // namespace mptl

#endif // ARCH_REG_FMC_HPP_INCLUDED
