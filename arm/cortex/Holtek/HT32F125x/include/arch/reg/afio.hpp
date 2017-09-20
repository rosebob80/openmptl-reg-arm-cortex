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
//  Import from CMSIS-SVD: "Holtek/ht32f125x.svd"
//
//  name: HT32F125x
//  version: 1.0
//  description: This is the description for the Holtek HT32F125x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AFIO_HPP_INCLUDED
#define ARCH_REG_AFIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AFIO
 */
struct AFIO
{
  static constexpr reg_addr_t base_addr = 0x40022000;

  /**
   * AFIO_ESSR0
   */
  struct AFIO_ESSR0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0PIN  = regbits< type,  0,  4 >;  /**< EXTI0PIN  */
    using EXTI1PIN  = regbits< type,  4,  4 >;  /**< EXTI1PIN  */
    using EXTI2PIN  = regbits< type,  8,  4 >;  /**< EXTI2PIN  */
    using EXTI3PIN  = regbits< type, 12,  4 >;  /**< EXTI3PIN  */
    using EXTI4PIN  = regbits< type, 16,  4 >;  /**< EXTI4PIN  */
    using EXTI5PIN  = regbits< type, 20,  4 >;  /**< EXTI5PIN  */
    using EXTI6PIN  = regbits< type, 24,  4 >;  /**< EXTI6PIN  */
    using EXTI7PIN  = regbits< type, 28,  4 >;  /**< EXTI7PIN  */
  };

  /**
   * AFIO_ESSR1
   */
  struct AFIO_ESSR1
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI8PIN   = regbits< type,  0,  4 >;  /**< EXTI8PIN   */
    using EXTI9PIN   = regbits< type,  4,  4 >;  /**< EXTI9PIN   */
    using EXTI10PIN  = regbits< type,  8,  4 >;  /**< EXTI10PIN  */
    using EXTI11PIN  = regbits< type, 12,  4 >;  /**< EXTI11PIN  */
    using EXTI12PIN  = regbits< type, 16,  4 >;  /**< EXTI12PIN  */
    using EXTI13PIN  = regbits< type, 20,  4 >;  /**< EXTI13PIN  */
    using EXTI14PIN  = regbits< type, 24,  4 >;  /**< EXTI14PIN  */
    using EXTI15PIN  = regbits< type, 28,  4 >;  /**< EXTI15PIN  */
  };

  /**
   * AFIO_GPACFGR
   */
  struct AFIO_GPACFGR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PACFG0   = regbits< type,  0,  2 >;  /**< PACFG0   */
    using PACFG1   = regbits< type,  2,  2 >;  /**< PACFG1   */
    using PACFG2   = regbits< type,  4,  2 >;  /**< PACFG2   */
    using PACFG3   = regbits< type,  6,  2 >;  /**< PACFG3   */
    using PACFG4   = regbits< type,  8,  2 >;  /**< PACFG4   */
    using PACFG5   = regbits< type, 10,  2 >;  /**< PACFG5   */
    using PACFG6   = regbits< type, 12,  2 >;  /**< PACFG6   */
    using PACFG7   = regbits< type, 14,  2 >;  /**< PACFG7   */
    using PACFG8   = regbits< type, 16,  2 >;  /**< PACFG8   */
    using PACFG9   = regbits< type, 18,  2 >;  /**< PACFG9   */
    using PACFG10  = regbits< type, 20,  2 >;  /**< PACFG10  */
    using PACFG11  = regbits< type, 22,  2 >;  /**< PACFG11  */
    using PACFG12  = regbits< type, 24,  2 >;  /**< PACFG12  */
    using PACFG13  = regbits< type, 26,  2 >;  /**< PACFG13  */
    using PACFG14  = regbits< type, 28,  2 >;  /**< PACFG14  */
    using PACFG15  = regbits< type, 30,  2 >;  /**< PACFG15  */
  };

  /**
   * AFIO_GPBCFGR
   */
  struct AFIO_GPBCFGR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PBCFG0   = regbits< type,  0,  2 >;  /**< PBCFG0   */
    using PBCFG1   = regbits< type,  2,  2 >;  /**< PBCFG1   */
    using PBCFG2   = regbits< type,  4,  2 >;  /**< PBCFG2   */
    using PBCFG3   = regbits< type,  6,  2 >;  /**< PBCFG3   */
    using PBCFG4   = regbits< type,  8,  2 >;  /**< PBCFG4   */
    using PBCFG5   = regbits< type, 10,  2 >;  /**< PBCFG5   */
    using PBCFG6   = regbits< type, 12,  2 >;  /**< PBCFG6   */
    using PBCFG7   = regbits< type, 14,  2 >;  /**< PBCFG7   */
    using PBCFG8   = regbits< type, 16,  2 >;  /**< PBCFG8   */
    using PBCFG9   = regbits< type, 18,  2 >;  /**< PBCFG9   */
    using PBCFG10  = regbits< type, 20,  2 >;  /**< PBCFG10  */
    using PBCFG11  = regbits< type, 22,  2 >;  /**< PBCFG11  */
    using PBCFG12  = regbits< type, 24,  2 >;  /**< PBCFG12  */
    using PBCFG13  = regbits< type, 26,  2 >;  /**< PBCFG13  */
    using PBCFG14  = regbits< type, 28,  2 >;  /**< PBCFG14  */
    using PBCFG15  = regbits< type, 30,  2 >;  /**< PBCFG15  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AFIO_HPP_INCLUDED
