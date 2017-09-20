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
//  Import from CMSIS-SVD: "Freescale/MKW20Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW20Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW20Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TPM0_HPP_INCLUDED
#define ARCH_REG_TPM0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Timer/PWM Module
 */
struct TPM0
{
  static constexpr reg_addr_t base_addr = 0x40038000;

  /**
   * Status and Control
   */
  struct SC
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using PS     = regbits< type,  0,  3 >;  /**< Prescale Factor Selection        */
    using CMOD   = regbits< type,  3,  2 >;  /**< Clock Mode Selection             */
    using CPWMS  = regbits< type,  5,  1 >;  /**< Center-Aligned PWM Select        */
    using TOIE   = regbits< type,  6,  1 >;  /**< Timer Overflow Interrupt Enable  */
    using TOF    = regbits< type,  7,  1 >;  /**< Timer Overflow Flag              */
    using DMA    = regbits< type,  8,  1 >;  /**< DMA Enable                       */
  };

  /**
   * Counter
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Counter value  */
  };

  /**
   * Modulo
   */
  struct MOD
  : public reg< uint32_t, base_addr + 0x8, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: MOD
    using MOD_ = regbits< type,  0, 16 >;  /**< Modulo value  */
  };

  /**
   * Channel (n) Status and Control
   */
  struct C%sSC
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using DMA   = regbits< type,  0,  1 >;  /**< DMA Enable                */
    using ELSA  = regbits< type,  2,  1 >;  /**< Edge or Level Select      */
    using ELSB  = regbits< type,  3,  1 >;  /**< Edge or Level Select      */
    using MSA   = regbits< type,  4,  1 >;  /**< Channel Mode Select       */
    using MSB   = regbits< type,  5,  1 >;  /**< Channel Mode Select       */
    using CHIE  = regbits< type,  6,  1 >;  /**< Channel Interrupt Enable  */
    using CHF   = regbits< type,  7,  1 >;  /**< Channel Flag              */
  };

  /**
   * Channel (n) Value
   */
  struct C%sV
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using VAL  = regbits< type,  0, 16 >;  /**< Channel Value  */
  };

  /**
   * Capture and Compare Status
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using CH0F  = regbits< type,  0,  1 >;  /**< Channel 0 Flag       */
    using CH1F  = regbits< type,  1,  1 >;  /**< Channel 1 Flag       */
    using CH2F  = regbits< type,  2,  1 >;  /**< Channel 2 Flag       */
    using CH3F  = regbits< type,  3,  1 >;  /**< Channel 3 Flag       */
    using TOF   = regbits< type,  8,  1 >;  /**< Timer Overflow Flag  */
  };

  /**
   * Combine Channel Register
   */
  struct COMBINE
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using COMBINE0  = regbits< type,  0,  1 >;  /**< Combine Channels 0 and 1       */
    using COMSWAP0  = regbits< type,  1,  1 >;  /**< Combine Channel 0 and 1 Swap   */
    using COMBINE1  = regbits< type,  8,  1 >;  /**< Combine Channels 2 and 3       */
    using COMSWAP1  = regbits< type,  9,  1 >;  /**< Combine Channels 2 and 3 Swap  */
  };

  /**
   * Channel Polarity
   */
  struct POL
  : public reg< uint32_t, base_addr + 0x70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0 >;

    using POL0  = regbits< type,  0,  1 >;  /**< Channel 0 Polarity  */
    using POL1  = regbits< type,  1,  1 >;  /**< Channel 1 Polarity  */
    using POL2  = regbits< type,  2,  1 >;  /**< Channel 2 Polarity  */
    using POL3  = regbits< type,  3,  1 >;  /**< Channel 3 Polarity  */
  };

  /**
   * Filter Control
   */
  struct FILTER
  : public reg< uint32_t, base_addr + 0x78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0 >;

    using CH0FVAL  = regbits< type,  0,  4 >;  /**< Channel 0 Filter Value  */
    using CH1FVAL  = regbits< type,  4,  4 >;  /**< Channel 1 Filter Value  */
    using CH2FVAL  = regbits< type,  8,  4 >;  /**< Channel 2 Filter Value  */
    using CH3FVAL  = regbits< type, 12,  4 >;  /**< Channel 3 Filter Value  */
  };

  /**
   * Quadrature Decoder Control and Status
   */
  struct QDCTRL
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using QUADEN    = regbits< type,  0,  1 >;  /**< Enables the quadrature decoder mode                                     */
    using TOFDIR    = regbits< type,  1,  1 >;  /**< Indicates if the TOF bit was set on the top or the bottom of counting.  */
    using QUADIR    = regbits< type,  2,  1 >;  /**< Counter Direction in Quadrature Decode Mode                             */
    using QUADMODE  = regbits< type,  3,  1 >;  /**< Quadrature Decoder Mode                                                 */
  };

  /**
   * Configuration
   */
  struct CONF
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using DOZEEN   = regbits< type,  5,  1 >;  /**< Doze Enable                       */
    using DBGMODE  = regbits< type,  6,  2 >;  /**< Debug Mode                        */
    using GTBSYNC  = regbits< type,  8,  1 >;  /**< Global Time Base Synchronization  */
    using GTBEEN   = regbits< type,  9,  1 >;  /**< Global time base enable           */
    using CSOT     = regbits< type, 16,  1 >;  /**< Counter Start on Trigger          */
    using CSOO     = regbits< type, 17,  1 >;  /**< Counter Stop On Overflow          */
    using CROT     = regbits< type, 18,  1 >;  /**< Counter Reload On Trigger         */
    using CPOT     = regbits< type, 19,  1 >;  /**< Counter Pause On Trigger          */
    using TRGPOL   = regbits< type, 22,  1 >;  /**< Trigger Polarity                  */
    using TRGSRC   = regbits< type, 23,  1 >;  /**< Trigger Source                    */
    using TRGSEL   = regbits< type, 24,  4 >;  /**< Trigger Select                    */
  };
};
} // namespace mptl

#endif // ARCH_REG_TPM0_HPP_INCLUDED
