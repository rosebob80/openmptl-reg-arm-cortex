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
//  Import from CMSIS-SVD: "Freescale/MK30D7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK30D7
//  series: Kinetis_K
//  version: 1.6
//  description: MK30D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DMA_HPP_INCLUDED
#define ARCH_REG_DMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Enhanced direct memory access controller
 */
struct DMA
{
  static constexpr reg_addr_t base_addr = 0x40008000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using EDBG  = regbits< type,  1,  1 >;  /**< Enable Debug                            */
    using ERCA  = regbits< type,  2,  1 >;  /**< Enable Round Robin Channel Arbitration  */
    using HOE   = regbits< type,  4,  1 >;  /**< Halt On Error                           */
    using HALT  = regbits< type,  5,  1 >;  /**< Halt DMA Operations                     */
    using CLM   = regbits< type,  6,  1 >;  /**< Continuous Link Mode                    */
    using EMLM  = regbits< type,  7,  1 >;  /**< Enable Minor Loop Mapping               */
    using ECX   = regbits< type, 16,  1 >;  /**< Error Cancel Transfer                   */
    using CX    = regbits< type, 17,  1 >;  /**< Cancel Transfer                         */
  };

  /**
   * Error Status Register
   */
  struct ES
  : public reg< uint32_t, base_addr + 0x4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0 >;

    using DBE     = regbits< type,  0,  1 >;  /**< Destination Bus Error                             */
    using SBE     = regbits< type,  1,  1 >;  /**< Source Bus Error                                  */
    using SGE     = regbits< type,  2,  1 >;  /**< Scatter/Gather Configuration Error                */
    using NCE     = regbits< type,  3,  1 >;  /**< NBYTES/CITER Configuration Error                  */
    using DOE     = regbits< type,  4,  1 >;  /**< Destination Offset Error                          */
    using DAE     = regbits< type,  5,  1 >;  /**< Destination Address Error                         */
    using SOE     = regbits< type,  6,  1 >;  /**< Source Offset Error                               */
    using SAE     = regbits< type,  7,  1 >;  /**< Source Address Error                              */
    using ERRCHN  = regbits< type,  8,  4 >;  /**< Error Channel Number or Cancelled Channel Number  */
    using CPE     = regbits< type, 14,  1 >;  /**< Channel Priority Error                            */
    using ECX     = regbits< type, 16,  1 >;  /**< Transfer Cancelled                                */
    using VLD     = regbits< type, 31,  1 >;  /**< no description available                          */
  };

  /**
   * Enable Request Register
   */
  struct ERQ
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using ERQ0   = regbits< type,  0,  1 >;  /**< Enable DMA Request 0   */
    using ERQ1   = regbits< type,  1,  1 >;  /**< Enable DMA Request 1   */
    using ERQ2   = regbits< type,  2,  1 >;  /**< Enable DMA Request 2   */
    using ERQ3   = regbits< type,  3,  1 >;  /**< Enable DMA Request 3   */
    using ERQ4   = regbits< type,  4,  1 >;  /**< Enable DMA Request 4   */
    using ERQ5   = regbits< type,  5,  1 >;  /**< Enable DMA Request 5   */
    using ERQ6   = regbits< type,  6,  1 >;  /**< Enable DMA Request 6   */
    using ERQ7   = regbits< type,  7,  1 >;  /**< Enable DMA Request 7   */
    using ERQ8   = regbits< type,  8,  1 >;  /**< Enable DMA Request 8   */
    using ERQ9   = regbits< type,  9,  1 >;  /**< Enable DMA Request 9   */
    using ERQ10  = regbits< type, 10,  1 >;  /**< Enable DMA Request 10  */
    using ERQ11  = regbits< type, 11,  1 >;  /**< Enable DMA Request 11  */
    using ERQ12  = regbits< type, 12,  1 >;  /**< Enable DMA Request 12  */
    using ERQ13  = regbits< type, 13,  1 >;  /**< Enable DMA Request 13  */
    using ERQ14  = regbits< type, 14,  1 >;  /**< Enable DMA Request 14  */
    using ERQ15  = regbits< type, 15,  1 >;  /**< Enable DMA Request 15  */
  };

  /**
   * Enable Error Interrupt Register
   */
  struct EEI
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using EEI0   = regbits< type,  0,  1 >;  /**< Enable Error Interrupt 0   */
    using EEI1   = regbits< type,  1,  1 >;  /**< Enable Error Interrupt 1   */
    using EEI2   = regbits< type,  2,  1 >;  /**< Enable Error Interrupt 2   */
    using EEI3   = regbits< type,  3,  1 >;  /**< Enable Error Interrupt 3   */
    using EEI4   = regbits< type,  4,  1 >;  /**< Enable Error Interrupt 4   */
    using EEI5   = regbits< type,  5,  1 >;  /**< Enable Error Interrupt 5   */
    using EEI6   = regbits< type,  6,  1 >;  /**< Enable Error Interrupt 6   */
    using EEI7   = regbits< type,  7,  1 >;  /**< Enable Error Interrupt 7   */
    using EEI8   = regbits< type,  8,  1 >;  /**< Enable Error Interrupt 8   */
    using EEI9   = regbits< type,  9,  1 >;  /**< Enable Error Interrupt 9   */
    using EEI10  = regbits< type, 10,  1 >;  /**< Enable Error Interrupt 10  */
    using EEI11  = regbits< type, 11,  1 >;  /**< Enable Error Interrupt 11  */
    using EEI12  = regbits< type, 12,  1 >;  /**< Enable Error Interrupt 12  */
    using EEI13  = regbits< type, 13,  1 >;  /**< Enable Error Interrupt 13  */
    using EEI14  = regbits< type, 14,  1 >;  /**< Enable Error Interrupt 14  */
    using EEI15  = regbits< type, 15,  1 >;  /**< Enable Error Interrupt 15  */
  };

  /**
   * Clear Enable Error Interrupt Register
   */
  struct CEEI
  : public reg< uint8_t, base_addr + 0x18, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x18, wo, 0 >;

    // fixme: Field name equals parent register name: CEEI
    using CEEI_ = regbits< type,  0,  4 >;  /**< Clear Enable Error Interrupt       */
    using CAEE  = regbits< type,  6,  1 >;  /**< Clear All Enable Error Interrupts  */
    using NOP   = regbits< type,  7,  1 >;  /**< no description available           */
  };

  /**
   * Set Enable Error Interrupt Register
   */
  struct SEEI
  : public reg< uint8_t, base_addr + 0x19, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x19, wo, 0 >;

    // fixme: Field name equals parent register name: SEEI
    using SEEI_ = regbits< type,  0,  4 >;  /**< Set Enable Error Interrupt        */
    using SAEE  = regbits< type,  6,  1 >;  /**< Sets All Enable Error Interrupts  */
    using NOP   = regbits< type,  7,  1 >;  /**< no description available          */
  };

  /**
   * Clear Enable Request Register
   */
  struct CERQ
  : public reg< uint8_t, base_addr + 0x1a, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1a, wo, 0 >;

    // fixme: Field name equals parent register name: CERQ
    using CERQ_ = regbits< type,  0,  4 >;  /**< Clear Enable Request       */
    using CAER  = regbits< type,  6,  1 >;  /**< Clear All Enable Requests  */
    using NOP   = regbits< type,  7,  1 >;  /**< no description available   */
  };

  /**
   * Set Enable Request Register
   */
  struct SERQ
  : public reg< uint8_t, base_addr + 0x1b, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1b, wo, 0 >;

    // fixme: Field name equals parent register name: SERQ
    using SERQ_ = regbits< type,  0,  4 >;  /**< Set enable request        */
    using SAER  = regbits< type,  6,  1 >;  /**< Set All Enable Requests   */
    using NOP   = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * Clear DONE Status Bit Register
   */
  struct CDNE
  : public reg< uint8_t, base_addr + 0x1c, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, wo, 0 >;

    // fixme: Field name equals parent register name: CDNE
    using CDNE_ = regbits< type,  0,  4 >;  /**< Clear DONE Bit            */
    using CADN  = regbits< type,  6,  1 >;  /**< Clears All DONE Bits      */
    using NOP   = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * Set START Bit Register
   */
  struct SSRT
  : public reg< uint8_t, base_addr + 0x1d, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1d, wo, 0 >;

    // fixme: Field name equals parent register name: SSRT
    using SSRT_ = regbits< type,  0,  4 >;  /**< Set START Bit                                */
    using SAST  = regbits< type,  6,  1 >;  /**< Set All START Bits (activates all channels)  */
    using NOP   = regbits< type,  7,  1 >;  /**< no description available                     */
  };

  /**
   * Clear Error Register
   */
  struct CERR
  : public reg< uint8_t, base_addr + 0x1e, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1e, wo, 0 >;

    // fixme: Field name equals parent register name: CERR
    using CERR_ = regbits< type,  0,  4 >;  /**< Clear Error Indicator       */
    using CAEI  = regbits< type,  6,  1 >;  /**< Clear All Error Indicators  */
    using NOP   = regbits< type,  7,  1 >;  /**< no description available    */
  };

  /**
   * Clear Interrupt Request Register
   */
  struct CINT
  : public reg< uint8_t, base_addr + 0x1f, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1f, wo, 0 >;

    // fixme: Field name equals parent register name: CINT
    using CINT_ = regbits< type,  0,  4 >;  /**< Clear Interrupt Request       */
    using CAIR  = regbits< type,  6,  1 >;  /**< Clear All Interrupt Requests  */
    using NOP   = regbits< type,  7,  1 >;  /**< no description available      */
  };

  /**
   * Interrupt Request Register
   */
  struct INT
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using INT0   = regbits< type,  0,  1 >;  /**< Interrupt Request 0   */
    using INT1   = regbits< type,  1,  1 >;  /**< Interrupt Request 1   */
    using INT2   = regbits< type,  2,  1 >;  /**< Interrupt Request 2   */
    using INT3   = regbits< type,  3,  1 >;  /**< Interrupt Request 3   */
    using INT4   = regbits< type,  4,  1 >;  /**< Interrupt Request 4   */
    using INT5   = regbits< type,  5,  1 >;  /**< Interrupt Request 5   */
    using INT6   = regbits< type,  6,  1 >;  /**< Interrupt Request 6   */
    using INT7   = regbits< type,  7,  1 >;  /**< Interrupt Request 7   */
    using INT8   = regbits< type,  8,  1 >;  /**< Interrupt Request 8   */
    using INT9   = regbits< type,  9,  1 >;  /**< Interrupt Request 9   */
    using INT10  = regbits< type, 10,  1 >;  /**< Interrupt Request 10  */
    using INT11  = regbits< type, 11,  1 >;  /**< Interrupt Request 11  */
    using INT12  = regbits< type, 12,  1 >;  /**< Interrupt Request 12  */
    using INT13  = regbits< type, 13,  1 >;  /**< Interrupt Request 13  */
    using INT14  = regbits< type, 14,  1 >;  /**< Interrupt Request 14  */
    using INT15  = regbits< type, 15,  1 >;  /**< Interrupt Request 15  */
  };

  /**
   * Error Register
   */
  struct ERR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using ERR0   = regbits< type,  0,  1 >;  /**< Error In Channel 0   */
    using ERR1   = regbits< type,  1,  1 >;  /**< Error In Channel 1   */
    using ERR2   = regbits< type,  2,  1 >;  /**< Error In Channel 2   */
    using ERR3   = regbits< type,  3,  1 >;  /**< Error In Channel 3   */
    using ERR4   = regbits< type,  4,  1 >;  /**< Error In Channel 4   */
    using ERR5   = regbits< type,  5,  1 >;  /**< Error In Channel 5   */
    using ERR6   = regbits< type,  6,  1 >;  /**< Error In Channel 6   */
    using ERR7   = regbits< type,  7,  1 >;  /**< Error In Channel 7   */
    using ERR8   = regbits< type,  8,  1 >;  /**< Error In Channel 8   */
    using ERR9   = regbits< type,  9,  1 >;  /**< Error In Channel 9   */
    using ERR10  = regbits< type, 10,  1 >;  /**< Error In Channel 10  */
    using ERR11  = regbits< type, 11,  1 >;  /**< Error In Channel 11  */
    using ERR12  = regbits< type, 12,  1 >;  /**< Error In Channel 12  */
    using ERR13  = regbits< type, 13,  1 >;  /**< Error In Channel 13  */
    using ERR14  = regbits< type, 14,  1 >;  /**< Error In Channel 14  */
    using ERR15  = regbits< type, 15,  1 >;  /**< Error In Channel 15  */
  };

  /**
   * Hardware Request Status Register
   */
  struct HRS
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using HRS0   = regbits< type,  0,  1 >;  /**< Hardware Request Status Channel 0   */
    using HRS1   = regbits< type,  1,  1 >;  /**< Hardware Request Status Channel 1   */
    using HRS2   = regbits< type,  2,  1 >;  /**< Hardware Request Status Channel 2   */
    using HRS3   = regbits< type,  3,  1 >;  /**< Hardware Request Status Channel 3   */
    using HRS4   = regbits< type,  4,  1 >;  /**< Hardware Request Status Channel 4   */
    using HRS5   = regbits< type,  5,  1 >;  /**< Hardware Request Status Channel 5   */
    using HRS6   = regbits< type,  6,  1 >;  /**< Hardware Request Status Channel 6   */
    using HRS7   = regbits< type,  7,  1 >;  /**< Hardware Request Status Channel 7   */
    using HRS8   = regbits< type,  8,  1 >;  /**< Hardware Request Status Channel 8   */
    using HRS9   = regbits< type,  9,  1 >;  /**< Hardware Request Status Channel 9   */
    using HRS10  = regbits< type, 10,  1 >;  /**< Hardware Request Status Channel 10  */
    using HRS11  = regbits< type, 11,  1 >;  /**< Hardware Request Status Channel 11  */
    using HRS12  = regbits< type, 12,  1 >;  /**< Hardware Request Status Channel 12  */
    using HRS13  = regbits< type, 13,  1 >;  /**< Hardware Request Status Channel 13  */
    using HRS14  = regbits< type, 14,  1 >;  /**< Hardware Request Status Channel 14  */
    using HRS15  = regbits< type, 15,  1 >;  /**< Hardware Request Status Channel 15  */
  };

  /**
   * Channel n Priority Register
   */
  struct DCHPRI%s
  : public reg< uint8_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x100, rw, 0 >;

    using CHPRI  = regbits< type,  0,  4 >;  /**< Channel n Arbitration Priority  */
    using DPA    = regbits< type,  6,  1 >;  /**< Disable Preempt Ability         */
    using ECP    = regbits< type,  7,  1 >;  /**< Enable Channel Preemption       */
  };

  /**
   * TCD Source Address
   */
  struct TCD%s_SADDR
  : public reg< uint32_t, base_addr + 0x1000, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1000, rw, 0 >;

    using SADDR  = regbits< type,  0, 32 >;  /**< Source Address  */
  };

  /**
   * TCD Signed Source Address Offset
   */
  struct TCD%s_SOFF
  : public reg< uint16_t, base_addr + 0x1004, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1004, rw, 0 >;

    using SOFF  = regbits< type,  0, 16 >;  /**< Source address signed offset  */
  };

  /**
   * TCD Transfer Attributes
   */
  struct TCD%s_ATTR
  : public reg< uint16_t, base_addr + 0x1006, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1006, rw, 0 >;

    using DSIZE  = regbits< type,  0,  3 >;  /**< Destination Data Transfer Size  */
    using DMOD   = regbits< type,  3,  5 >;  /**< Destination Address Modulo      */
    using SSIZE  = regbits< type,  8,  3 >;  /**< Source data transfer size       */
    using SMOD   = regbits< type, 11,  5 >;  /**< Source Address Modulo.          */
  };

  /**
   * TCD Minor Byte Count (Minor Loop Disabled)
   */
  struct TCD%s_NBYTES_MLNO
  : public reg< uint32_t, base_addr + 0x1008, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1008, rw, 0 >;

    using NBYTES  = regbits< type,  0, 32 >;  /**< Minor Byte Transfer Count  */
  };

  /**
   * TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)
   */
  struct TCD%s_NBYTES_MLOFFNO
  : public reg< uint32_t, base_addr + 0x1008, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1008, rw, 0 >;

    using NBYTES  = regbits< type,  0, 30 >;  /**< Minor Byte Transfer Count             */
    using DMLOE   = regbits< type, 30,  1 >;  /**< Destination Minor Loop Offset enable  */
    using SMLOE   = regbits< type, 31,  1 >;  /**< Source Minor Loop Offset Enable       */
  };

  /**
   * TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)
   */
  struct TCD%s_NBYTES_MLOFFYES
  : public reg< uint32_t, base_addr + 0x1008, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1008, rw, 0 >;

    using NBYTES  = regbits< type,  0, 10 >;  /**< Minor Byte Transfer Count                                                                                                                                                         */
    using MLOFF   = regbits< type, 10, 20 >;  /**< If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.  */
    using DMLOE   = regbits< type, 30,  1 >;  /**< Destination Minor Loop Offset enable                                                                                                                                              */
    using SMLOE   = regbits< type, 31,  1 >;  /**< Source Minor Loop Offset Enable                                                                                                                                                   */
  };

  /**
   * TCD Last Source Address Adjustment
   */
  struct TCD%s_SLAST
  : public reg< uint32_t, base_addr + 0x100c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100c, rw, 0 >;

    using SLAST  = regbits< type,  0, 32 >;  /**< Last source Address Adjustment  */
  };

  /**
   * TCD Destination Address
   */
  struct TCD%s_DADDR
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using DADDR  = regbits< type,  0, 32 >;  /**< Destination Address  */
  };

  /**
   * TCD Signed Destination Address Offset
   */
  struct TCD%s_DOFF
  : public reg< uint16_t, base_addr + 0x1014, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1014, rw, 0 >;

    using DOFF  = regbits< type,  0, 16 >;  /**< Destination Address Signed offset  */
  };

  /**
   * TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)
   */
  struct TCD%s_CITER_ELINKNO
  : public reg< uint16_t, base_addr + 0x1016, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1016, rw, 0 >;

    using CITER  = regbits< type,  0, 15 >;  /**< Current Major Iteration Count                             */
    using ELINK  = regbits< type, 15,  1 >;  /**< Enable channel-to-channel linking on minor-loop complete  */
  };

  /**
   * TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)
   */
  struct TCD%s_CITER_ELINKYES
  : public reg< uint16_t, base_addr + 0x1016, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1016, rw, 0 >;

    using CITER   = regbits< type,  0,  9 >;  /**< Current Major Iteration Count                             */
    using LINKCH  = regbits< type,  9,  4 >;  /**< Link Channel Number                                       */
    using ELINK   = regbits< type, 15,  1 >;  /**< Enable channel-to-channel linking on minor-loop complete  */
  };

  /**
   * TCD Last Destination Address Adjustment/Scatter Gather Address
   */
  struct TCD%s_DLASTSGA
  : public reg< uint32_t, base_addr + 0x1018, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1018, rw, 0 >;

    using DLASTSGA  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * TCD Control and Status
   */
  struct TCD%s_CSR
  : public reg< uint16_t, base_addr + 0x101c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x101c, rw, 0 >;

    using START        = regbits< type,  0,  1 >;  /**< Channel Start                                             */
    using INTMAJOR     = regbits< type,  1,  1 >;  /**< Enable an interrupt when major iteration count completes  */
    using INTHALF      = regbits< type,  2,  1 >;  /**< Enable an interrupt when major counter is half complete.  */
    using DREQ         = regbits< type,  3,  1 >;  /**< Disable Request                                           */
    using ESG          = regbits< type,  4,  1 >;  /**< Enable Scatter/Gather Processing                          */
    using MAJORELINK   = regbits< type,  5,  1 >;  /**< Enable channel-to-channel linking on major loop complete  */
    using ACTIVE       = regbits< type,  6,  1 >;  /**< Channel Active                                            */
    using DONE         = regbits< type,  7,  1 >;  /**< Channel Done                                              */
    using MAJORLINKCH  = regbits< type,  8,  4 >;  /**< Link Channel Number                                       */
    using BWC          = regbits< type, 14,  2 >;  /**< Bandwidth Control                                         */
  };

  /**
   * TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)
   */
  struct TCD%s_BITER_ELINKNO
  : public reg< uint16_t, base_addr + 0x101e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x101e, rw, 0 >;

    using BITER  = regbits< type,  0, 15 >;  /**< Starting Major Iteration Count                             */
    using ELINK  = regbits< type, 15,  1 >;  /**< Enables channel-to-channel linking on minor loop complete  */
  };

  /**
   * TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)
   */
  struct TCD%s_BITER_ELINKYES
  : public reg< uint16_t, base_addr + 0x101e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x101e, rw, 0 >;

    using BITER   = regbits< type,  0,  9 >;  /**< Starting Major Iteration Count                             */
    using LINKCH  = regbits< type,  9,  4 >;  /**< Link Channel Number                                        */
    using ELINK   = regbits< type, 15,  1 >;  /**< Enables channel-to-channel linking on minor loop complete  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMA_HPP_INCLUDED
