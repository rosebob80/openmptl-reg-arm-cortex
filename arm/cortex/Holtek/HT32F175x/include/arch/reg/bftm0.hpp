/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Holtek/ht32f175x.svd"
//
//  name: HT32F175x
//  version: 1.0
//  description: This is the description for the Holtek HT32F175x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_BFTM0_HPP_INCLUDED
#define ARCH_REG_BFTM0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * BFTM0
 */
struct BFTM0
{
  static constexpr reg_addr_t base_addr = 0x40076000;

  /**
   * BFTM0_CR
   */
  struct BFTM0_CR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MIEN      = regbits< type,  0,  1 >;  /**< MIEN       */
    using OSM       = regbits< type,  1,  1 >;  /**< OSM        */
    using CEN       = regbits< type,  2,  1 >;  /**< CEN        */
    using RESERVED  = regbits< type,  3, 29 >;  /**< Reserved.  */
  };

  /**
   * BFTM0_SR
   */
  struct BFTM0_SR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MIF       = regbits< type,  0,  1 >;  /**< MIF        */
    using RESERVED  = regbits< type,  1, 31 >;  /**< Reserved.  */
  };

  /**
   * BFTM0_CNTR
   */
  struct BFTM0_CNTR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CNTR  = regbits< type,  0, 32 >;  /**< CNTR  */
  };

  /**
   * BFTM0_CMPR
   */
  struct BFTM0_CMPR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CMP  = regbits< type,  0, 32 >;  /**< CMP  */
  };
};
} // namespace mptl

#endif // ARCH_REG_BFTM0_HPP_INCLUDED
