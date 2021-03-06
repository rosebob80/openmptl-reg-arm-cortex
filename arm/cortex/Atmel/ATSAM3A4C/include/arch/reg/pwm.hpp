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
//  Import from CMSIS-SVD: "Atmel/ATSAM3A4C.svd"
//
//  vendor: Atmel
//  name: ATSAM3A4C
//  series: SAM3A
//  version: 20130131
//  description: Atmel ATSAM3A4C device: Cortex-M3 Microcontroller with 2x128 KB Flash, HS USB, 100 Pins (refer to http://www.atmel.com/devices/SAM3A4C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWM_HPP_INCLUDED
#define ARCH_REG_PWM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pulse Width Modulation Controller
 */
struct PWM
{
  static constexpr reg_addr_t base_addr = 0x40094000;

  /**
   * PWM Clock Register
   */
  struct CLK
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using DIVA  = regbits< type,  0,  8 >;  /**< CLKA, CLKB Divide Factor           */
    using PREA  = regbits< type,  8,  4 >;  /**< CLKA, CLKB Source Clock Selection  */
    using DIVB  = regbits< type, 16,  8 >;  /**< CLKA, CLKB Divide Factor           */
    using PREB  = regbits< type, 24,  4 >;  /**< CLKA, CLKB Source Clock Selection  */
  };

  /**
   * PWM Enable Register
   */
  struct ENA
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
    using CHID4  = regbits< type,  4,  1 >;  /**< Channel ID  */
    using CHID5  = regbits< type,  5,  1 >;  /**< Channel ID  */
    using CHID6  = regbits< type,  6,  1 >;  /**< Channel ID  */
    using CHID7  = regbits< type,  7,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Disable Register
   */
  struct DIS
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
    using CHID4  = regbits< type,  4,  1 >;  /**< Channel ID  */
    using CHID5  = regbits< type,  5,  1 >;  /**< Channel ID  */
    using CHID6  = regbits< type,  6,  1 >;  /**< Channel ID  */
    using CHID7  = regbits< type,  7,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
    using CHID4  = regbits< type,  4,  1 >;  /**< Channel ID  */
    using CHID5  = regbits< type,  5,  1 >;  /**< Channel ID  */
    using CHID6  = regbits< type,  6,  1 >;  /**< Channel ID  */
    using CHID7  = regbits< type,  7,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Interrupt Enable Register 1
   */
  struct IER1
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using CHID0   = regbits< type,  0,  1 >;  /**< Counter Event on Channel 0 Interrupt Enable             */
    using CHID1   = regbits< type,  1,  1 >;  /**< Counter Event on Channel 1 Interrupt Enable             */
    using CHID2   = regbits< type,  2,  1 >;  /**< Counter Event on Channel 2 Interrupt Enable             */
    using CHID3   = regbits< type,  3,  1 >;  /**< Counter Event on Channel 3 Interrupt Enable             */
    using CHID4   = regbits< type,  4,  1 >;  /**< Counter Event on Channel 4 Interrupt Enable             */
    using CHID5   = regbits< type,  5,  1 >;  /**< Counter Event on Channel 5 Interrupt Enable             */
    using CHID6   = regbits< type,  6,  1 >;  /**< Counter Event on Channel 6 Interrupt Enable             */
    using CHID7   = regbits< type,  7,  1 >;  /**< Counter Event on Channel 7 Interrupt Enable             */
    using FCHID0  = regbits< type, 16,  1 >;  /**< Fault Protection Trigger on Channel 0 Interrupt Enable  */
    using FCHID1  = regbits< type, 17,  1 >;  /**< Fault Protection Trigger on Channel 1 Interrupt Enable  */
    using FCHID2  = regbits< type, 18,  1 >;  /**< Fault Protection Trigger on Channel 2 Interrupt Enable  */
    using FCHID3  = regbits< type, 19,  1 >;  /**< Fault Protection Trigger on Channel 3 Interrupt Enable  */
    using FCHID4  = regbits< type, 20,  1 >;  /**< Fault Protection Trigger on Channel 4 Interrupt Enable  */
    using FCHID5  = regbits< type, 21,  1 >;  /**< Fault Protection Trigger on Channel 5 Interrupt Enable  */
    using FCHID6  = regbits< type, 22,  1 >;  /**< Fault Protection Trigger on Channel 6 Interrupt Enable  */
    using FCHID7  = regbits< type, 23,  1 >;  /**< Fault Protection Trigger on Channel 7 Interrupt Enable  */
  };

  /**
   * PWM Interrupt Disable Register 1
   */
  struct IDR1
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CHID0   = regbits< type,  0,  1 >;  /**< Counter Event on Channel 0 Interrupt Disable             */
    using CHID1   = regbits< type,  1,  1 >;  /**< Counter Event on Channel 1 Interrupt Disable             */
    using CHID2   = regbits< type,  2,  1 >;  /**< Counter Event on Channel 2 Interrupt Disable             */
    using CHID3   = regbits< type,  3,  1 >;  /**< Counter Event on Channel 3 Interrupt Disable             */
    using CHID4   = regbits< type,  4,  1 >;  /**< Counter Event on Channel 4 Interrupt Disable             */
    using CHID5   = regbits< type,  5,  1 >;  /**< Counter Event on Channel 5 Interrupt Disable             */
    using CHID6   = regbits< type,  6,  1 >;  /**< Counter Event on Channel 6 Interrupt Disable             */
    using CHID7   = regbits< type,  7,  1 >;  /**< Counter Event on Channel 7 Interrupt Disable             */
    using FCHID0  = regbits< type, 16,  1 >;  /**< Fault Protection Trigger on Channel 0 Interrupt Disable  */
    using FCHID1  = regbits< type, 17,  1 >;  /**< Fault Protection Trigger on Channel 1 Interrupt Disable  */
    using FCHID2  = regbits< type, 18,  1 >;  /**< Fault Protection Trigger on Channel 2 Interrupt Disable  */
    using FCHID3  = regbits< type, 19,  1 >;  /**< Fault Protection Trigger on Channel 3 Interrupt Disable  */
    using FCHID4  = regbits< type, 20,  1 >;  /**< Fault Protection Trigger on Channel 4 Interrupt Disable  */
    using FCHID5  = regbits< type, 21,  1 >;  /**< Fault Protection Trigger on Channel 5 Interrupt Disable  */
    using FCHID6  = regbits< type, 22,  1 >;  /**< Fault Protection Trigger on Channel 6 Interrupt Disable  */
    using FCHID7  = regbits< type, 23,  1 >;  /**< Fault Protection Trigger on Channel 7 Interrupt Disable  */
  };

  /**
   * PWM Interrupt Mask Register 1
   */
  struct IMR1
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using CHID0   = regbits< type,  0,  1 >;  /**< Counter Event on Channel 0 Interrupt Mask             */
    using CHID1   = regbits< type,  1,  1 >;  /**< Counter Event on Channel 1 Interrupt Mask             */
    using CHID2   = regbits< type,  2,  1 >;  /**< Counter Event on Channel 2 Interrupt Mask             */
    using CHID3   = regbits< type,  3,  1 >;  /**< Counter Event on Channel 3 Interrupt Mask             */
    using CHID4   = regbits< type,  4,  1 >;  /**< Counter Event on Channel 4 Interrupt Mask             */
    using CHID5   = regbits< type,  5,  1 >;  /**< Counter Event on Channel 5 Interrupt Mask             */
    using CHID6   = regbits< type,  6,  1 >;  /**< Counter Event on Channel 6 Interrupt Mask             */
    using CHID7   = regbits< type,  7,  1 >;  /**< Counter Event on Channel 7 Interrupt Mask             */
    using FCHID0  = regbits< type, 16,  1 >;  /**< Fault Protection Trigger on Channel 0 Interrupt Mask  */
    using FCHID1  = regbits< type, 17,  1 >;  /**< Fault Protection Trigger on Channel 1 Interrupt Mask  */
    using FCHID2  = regbits< type, 18,  1 >;  /**< Fault Protection Trigger on Channel 2 Interrupt Mask  */
    using FCHID3  = regbits< type, 19,  1 >;  /**< Fault Protection Trigger on Channel 3 Interrupt Mask  */
    using FCHID4  = regbits< type, 20,  1 >;  /**< Fault Protection Trigger on Channel 4 Interrupt Mask  */
    using FCHID5  = regbits< type, 21,  1 >;  /**< Fault Protection Trigger on Channel 5 Interrupt Mask  */
    using FCHID6  = regbits< type, 22,  1 >;  /**< Fault Protection Trigger on Channel 6 Interrupt Mask  */
    using FCHID7  = regbits< type, 23,  1 >;  /**< Fault Protection Trigger on Channel 7 Interrupt Mask  */
  };

  /**
   * PWM Interrupt Status Register 1
   */
  struct ISR1
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using CHID0   = regbits< type,  0,  1 >;  /**< Counter Event on Channel 0             */
    using CHID1   = regbits< type,  1,  1 >;  /**< Counter Event on Channel 1             */
    using CHID2   = regbits< type,  2,  1 >;  /**< Counter Event on Channel 2             */
    using CHID3   = regbits< type,  3,  1 >;  /**< Counter Event on Channel 3             */
    using CHID4   = regbits< type,  4,  1 >;  /**< Counter Event on Channel 4             */
    using CHID5   = regbits< type,  5,  1 >;  /**< Counter Event on Channel 5             */
    using CHID6   = regbits< type,  6,  1 >;  /**< Counter Event on Channel 6             */
    using CHID7   = regbits< type,  7,  1 >;  /**< Counter Event on Channel 7             */
    using FCHID0  = regbits< type, 16,  1 >;  /**< Fault Protection Trigger on Channel 0  */
    using FCHID1  = regbits< type, 17,  1 >;  /**< Fault Protection Trigger on Channel 1  */
    using FCHID2  = regbits< type, 18,  1 >;  /**< Fault Protection Trigger on Channel 2  */
    using FCHID3  = regbits< type, 19,  1 >;  /**< Fault Protection Trigger on Channel 3  */
    using FCHID4  = regbits< type, 20,  1 >;  /**< Fault Protection Trigger on Channel 4  */
    using FCHID5  = regbits< type, 21,  1 >;  /**< Fault Protection Trigger on Channel 5  */
    using FCHID6  = regbits< type, 22,  1 >;  /**< Fault Protection Trigger on Channel 6  */
    using FCHID7  = regbits< type, 23,  1 >;  /**< Fault Protection Trigger on Channel 7  */
  };

  /**
   * PWM Sync Channels Mode Register
   */
  struct SCM
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using SYNC0  = regbits< type,  0,  1 >;  /**< Synchronous Channel 0                      */
    using SYNC1  = regbits< type,  1,  1 >;  /**< Synchronous Channel 1                      */
    using SYNC2  = regbits< type,  2,  1 >;  /**< Synchronous Channel 2                      */
    using SYNC3  = regbits< type,  3,  1 >;  /**< Synchronous Channel 3                      */
    using SYNC4  = regbits< type,  4,  1 >;  /**< Synchronous Channel 4                      */
    using SYNC5  = regbits< type,  5,  1 >;  /**< Synchronous Channel 5                      */
    using SYNC6  = regbits< type,  6,  1 >;  /**< Synchronous Channel 6                      */
    using SYNC7  = regbits< type,  7,  1 >;  /**< Synchronous Channel 7                      */
    using UPDM   = regbits< type, 16,  2 >;  /**< Synchronous Channels Update Mode           */
    using PTRM   = regbits< type, 20,  1 >;  /**< PDC Transfer Request Mode                  */
    using PTRCS  = regbits< type, 21,  3 >;  /**< PDC Transfer Request Comparison Selection  */
  };

  /**
   * PWM Sync Channels Update Control Register
   */
  struct SCUC
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using UPDULOCK  = regbits< type,  0,  1 >;  /**< Synchronous Channels Update Unlock  */
  };

  /**
   * PWM Sync Channels Update Period Register
   */
  struct SCUP
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    using UPR     = regbits< type,  0,  4 >;  /**< Update Period          */
    using UPRCNT  = regbits< type,  4,  4 >;  /**< Update Period Counter  */
  };

  /**
   * PWM Sync Channels Update Period Update Register
   */
  struct SCUPUPD
  : public reg< uint32_t, base_addr + 0x00000030, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, wo, 0x00000000 >;

    using UPRUPD  = regbits< type,  0,  4 >;  /**< Update Period Update  */
  };

  /**
   * PWM Interrupt Enable Register 2
   */
  struct IER2
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0 >;

    using WRDY    = regbits< type,  0,  1 >;  /**< Write Ready for Synchronous Channels Update Interrupt Enable  */
    using ENDTX   = regbits< type,  1,  1 >;  /**< PDC End of TX Buffer Interrupt Enable                         */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< PDC TX Buffer Empty Interrupt Enable                          */
    using UNRE    = regbits< type,  3,  1 >;  /**< Synchronous Channels Update Underrun Error Interrupt Enable   */
    using CMPM0   = regbits< type,  8,  1 >;  /**< Comparison 0 Match Interrupt Enable                           */
    using CMPM1   = regbits< type,  9,  1 >;  /**< Comparison 1 Match Interrupt Enable                           */
    using CMPM2   = regbits< type, 10,  1 >;  /**< Comparison 2 Match Interrupt Enable                           */
    using CMPM3   = regbits< type, 11,  1 >;  /**< Comparison 3 Match Interrupt Enable                           */
    using CMPM4   = regbits< type, 12,  1 >;  /**< Comparison 4 Match Interrupt Enable                           */
    using CMPM5   = regbits< type, 13,  1 >;  /**< Comparison 5 Match Interrupt Enable                           */
    using CMPM6   = regbits< type, 14,  1 >;  /**< Comparison 6 Match Interrupt Enable                           */
    using CMPM7   = regbits< type, 15,  1 >;  /**< Comparison 7 Match Interrupt Enable                           */
    using CMPU0   = regbits< type, 16,  1 >;  /**< Comparison 0 Update Interrupt Enable                          */
    using CMPU1   = regbits< type, 17,  1 >;  /**< Comparison 1 Update Interrupt Enable                          */
    using CMPU2   = regbits< type, 18,  1 >;  /**< Comparison 2 Update Interrupt Enable                          */
    using CMPU3   = regbits< type, 19,  1 >;  /**< Comparison 3 Update Interrupt Enable                          */
    using CMPU4   = regbits< type, 20,  1 >;  /**< Comparison 4 Update Interrupt Enable                          */
    using CMPU5   = regbits< type, 21,  1 >;  /**< Comparison 5 Update Interrupt Enable                          */
    using CMPU6   = regbits< type, 22,  1 >;  /**< Comparison 6 Update Interrupt Enable                          */
    using CMPU7   = regbits< type, 23,  1 >;  /**< Comparison 7 Update Interrupt Enable                          */
  };

  /**
   * PWM Interrupt Disable Register 2
   */
  struct IDR2
  : public reg< uint32_t, base_addr + 0x00000038, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, wo, 0 >;

    using WRDY    = regbits< type,  0,  1 >;  /**< Write Ready for Synchronous Channels Update Interrupt Disable  */
    using ENDTX   = regbits< type,  1,  1 >;  /**< PDC End of TX Buffer Interrupt Disable                         */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< PDC TX Buffer Empty Interrupt Disable                          */
    using UNRE    = regbits< type,  3,  1 >;  /**< Synchronous Channels Update Underrun Error Interrupt Disable   */
    using CMPM0   = regbits< type,  8,  1 >;  /**< Comparison 0 Match Interrupt Disable                           */
    using CMPM1   = regbits< type,  9,  1 >;  /**< Comparison 1 Match Interrupt Disable                           */
    using CMPM2   = regbits< type, 10,  1 >;  /**< Comparison 2 Match Interrupt Disable                           */
    using CMPM3   = regbits< type, 11,  1 >;  /**< Comparison 3 Match Interrupt Disable                           */
    using CMPM4   = regbits< type, 12,  1 >;  /**< Comparison 4 Match Interrupt Disable                           */
    using CMPM5   = regbits< type, 13,  1 >;  /**< Comparison 5 Match Interrupt Disable                           */
    using CMPM6   = regbits< type, 14,  1 >;  /**< Comparison 6 Match Interrupt Disable                           */
    using CMPM7   = regbits< type, 15,  1 >;  /**< Comparison 7 Match Interrupt Disable                           */
    using CMPU0   = regbits< type, 16,  1 >;  /**< Comparison 0 Update Interrupt Disable                          */
    using CMPU1   = regbits< type, 17,  1 >;  /**< Comparison 1 Update Interrupt Disable                          */
    using CMPU2   = regbits< type, 18,  1 >;  /**< Comparison 2 Update Interrupt Disable                          */
    using CMPU3   = regbits< type, 19,  1 >;  /**< Comparison 3 Update Interrupt Disable                          */
    using CMPU4   = regbits< type, 20,  1 >;  /**< Comparison 4 Update Interrupt Disable                          */
    using CMPU5   = regbits< type, 21,  1 >;  /**< Comparison 5 Update Interrupt Disable                          */
    using CMPU6   = regbits< type, 22,  1 >;  /**< Comparison 6 Update Interrupt Disable                          */
    using CMPU7   = regbits< type, 23,  1 >;  /**< Comparison 7 Update Interrupt Disable                          */
  };

  /**
   * PWM Interrupt Mask Register 2
   */
  struct IMR2
  : public reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >;

    using WRDY    = regbits< type,  0,  1 >;  /**< Write Ready for Synchronous Channels Update Interrupt Mask  */
    using ENDTX   = regbits< type,  1,  1 >;  /**< PDC End of TX Buffer Interrupt Mask                         */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< PDC TX Buffer Empty Interrupt Mask                          */
    using UNRE    = regbits< type,  3,  1 >;  /**< Synchronous Channels Update Underrun Error Interrupt Mask   */
    using CMPM0   = regbits< type,  8,  1 >;  /**< Comparison 0 Match Interrupt Mask                           */
    using CMPM1   = regbits< type,  9,  1 >;  /**< Comparison 1 Match Interrupt Mask                           */
    using CMPM2   = regbits< type, 10,  1 >;  /**< Comparison 2 Match Interrupt Mask                           */
    using CMPM3   = regbits< type, 11,  1 >;  /**< Comparison 3 Match Interrupt Mask                           */
    using CMPM4   = regbits< type, 12,  1 >;  /**< Comparison 4 Match Interrupt Mask                           */
    using CMPM5   = regbits< type, 13,  1 >;  /**< Comparison 5 Match Interrupt Mask                           */
    using CMPM6   = regbits< type, 14,  1 >;  /**< Comparison 6 Match Interrupt Mask                           */
    using CMPM7   = regbits< type, 15,  1 >;  /**< Comparison 7 Match Interrupt Mask                           */
    using CMPU0   = regbits< type, 16,  1 >;  /**< Comparison 0 Update Interrupt Mask                          */
    using CMPU1   = regbits< type, 17,  1 >;  /**< Comparison 1 Update Interrupt Mask                          */
    using CMPU2   = regbits< type, 18,  1 >;  /**< Comparison 2 Update Interrupt Mask                          */
    using CMPU3   = regbits< type, 19,  1 >;  /**< Comparison 3 Update Interrupt Mask                          */
    using CMPU4   = regbits< type, 20,  1 >;  /**< Comparison 4 Update Interrupt Mask                          */
    using CMPU5   = regbits< type, 21,  1 >;  /**< Comparison 5 Update Interrupt Mask                          */
    using CMPU6   = regbits< type, 22,  1 >;  /**< Comparison 6 Update Interrupt Mask                          */
    using CMPU7   = regbits< type, 23,  1 >;  /**< Comparison 7 Update Interrupt Mask                          */
  };

  /**
   * PWM Interrupt Status Register 2
   */
  struct ISR2
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >;

    using WRDY    = regbits< type,  0,  1 >;  /**< Write Ready for Synchronous Channels Update  */
    using ENDTX   = regbits< type,  1,  1 >;  /**< PDC End of TX Buffer                         */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< PDC TX Buffer Empty                          */
    using UNRE    = regbits< type,  3,  1 >;  /**< Synchronous Channels Update Underrun Error   */
    using CMPM0   = regbits< type,  8,  1 >;  /**< Comparison 0 Match                           */
    using CMPM1   = regbits< type,  9,  1 >;  /**< Comparison 1 Match                           */
    using CMPM2   = regbits< type, 10,  1 >;  /**< Comparison 2 Match                           */
    using CMPM3   = regbits< type, 11,  1 >;  /**< Comparison 3 Match                           */
    using CMPM4   = regbits< type, 12,  1 >;  /**< Comparison 4 Match                           */
    using CMPM5   = regbits< type, 13,  1 >;  /**< Comparison 5 Match                           */
    using CMPM6   = regbits< type, 14,  1 >;  /**< Comparison 6 Match                           */
    using CMPM7   = regbits< type, 15,  1 >;  /**< Comparison 7 Match                           */
    using CMPU0   = regbits< type, 16,  1 >;  /**< Comparison 0 Update                          */
    using CMPU1   = regbits< type, 17,  1 >;  /**< Comparison 1 Update                          */
    using CMPU2   = regbits< type, 18,  1 >;  /**< Comparison 2 Update                          */
    using CMPU3   = regbits< type, 19,  1 >;  /**< Comparison 3 Update                          */
    using CMPU4   = regbits< type, 20,  1 >;  /**< Comparison 4 Update                          */
    using CMPU5   = regbits< type, 21,  1 >;  /**< Comparison 5 Update                          */
    using CMPU6   = regbits< type, 22,  1 >;  /**< Comparison 6 Update                          */
    using CMPU7   = regbits< type, 23,  1 >;  /**< Comparison 7 Update                          */
  };

  /**
   * PWM Output Override Value Register
   */
  struct OOV
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using OOVH0  = regbits< type,  0,  1 >;  /**< Output Override Value for PWMH output of the channel 0  */
    using OOVH1  = regbits< type,  1,  1 >;  /**< Output Override Value for PWMH output of the channel 1  */
    using OOVH2  = regbits< type,  2,  1 >;  /**< Output Override Value for PWMH output of the channel 2  */
    using OOVH3  = regbits< type,  3,  1 >;  /**< Output Override Value for PWMH output of the channel 3  */
    using OOVH4  = regbits< type,  4,  1 >;  /**< Output Override Value for PWMH output of the channel 4  */
    using OOVH5  = regbits< type,  5,  1 >;  /**< Output Override Value for PWMH output of the channel 5  */
    using OOVH6  = regbits< type,  6,  1 >;  /**< Output Override Value for PWMH output of the channel 6  */
    using OOVH7  = regbits< type,  7,  1 >;  /**< Output Override Value for PWMH output of the channel 7  */
    using OOVL0  = regbits< type, 16,  1 >;  /**< Output Override Value for PWML output of the channel 0  */
    using OOVL1  = regbits< type, 17,  1 >;  /**< Output Override Value for PWML output of the channel 1  */
    using OOVL2  = regbits< type, 18,  1 >;  /**< Output Override Value for PWML output of the channel 2  */
    using OOVL3  = regbits< type, 19,  1 >;  /**< Output Override Value for PWML output of the channel 3  */
    using OOVL4  = regbits< type, 20,  1 >;  /**< Output Override Value for PWML output of the channel 4  */
    using OOVL5  = regbits< type, 21,  1 >;  /**< Output Override Value for PWML output of the channel 5  */
    using OOVL6  = regbits< type, 22,  1 >;  /**< Output Override Value for PWML output of the channel 6  */
    using OOVL7  = regbits< type, 23,  1 >;  /**< Output Override Value for PWML output of the channel 7  */
  };

  /**
   * PWM Output Selection Register
   */
  struct OS
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    using OSH0  = regbits< type,  0,  1 >;  /**< Output Selection for PWMH output of the channel 0  */
    using OSH1  = regbits< type,  1,  1 >;  /**< Output Selection for PWMH output of the channel 1  */
    using OSH2  = regbits< type,  2,  1 >;  /**< Output Selection for PWMH output of the channel 2  */
    using OSH3  = regbits< type,  3,  1 >;  /**< Output Selection for PWMH output of the channel 3  */
    using OSH4  = regbits< type,  4,  1 >;  /**< Output Selection for PWMH output of the channel 4  */
    using OSH5  = regbits< type,  5,  1 >;  /**< Output Selection for PWMH output of the channel 5  */
    using OSH6  = regbits< type,  6,  1 >;  /**< Output Selection for PWMH output of the channel 6  */
    using OSH7  = regbits< type,  7,  1 >;  /**< Output Selection for PWMH output of the channel 7  */
    using OSL0  = regbits< type, 16,  1 >;  /**< Output Selection for PWML output of the channel 0  */
    using OSL1  = regbits< type, 17,  1 >;  /**< Output Selection for PWML output of the channel 1  */
    using OSL2  = regbits< type, 18,  1 >;  /**< Output Selection for PWML output of the channel 2  */
    using OSL3  = regbits< type, 19,  1 >;  /**< Output Selection for PWML output of the channel 3  */
    using OSL4  = regbits< type, 20,  1 >;  /**< Output Selection for PWML output of the channel 4  */
    using OSL5  = regbits< type, 21,  1 >;  /**< Output Selection for PWML output of the channel 5  */
    using OSL6  = regbits< type, 22,  1 >;  /**< Output Selection for PWML output of the channel 6  */
    using OSL7  = regbits< type, 23,  1 >;  /**< Output Selection for PWML output of the channel 7  */
  };

  /**
   * PWM Output Selection Set Register
   */
  struct OSS
  : public reg< uint32_t, base_addr + 0x0000004c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, wo, 0 >;

    using OSSH0  = regbits< type,  0,  1 >;  /**< Output Selection Set for PWMH output of the channel 0  */
    using OSSH1  = regbits< type,  1,  1 >;  /**< Output Selection Set for PWMH output of the channel 1  */
    using OSSH2  = regbits< type,  2,  1 >;  /**< Output Selection Set for PWMH output of the channel 2  */
    using OSSH3  = regbits< type,  3,  1 >;  /**< Output Selection Set for PWMH output of the channel 3  */
    using OSSH4  = regbits< type,  4,  1 >;  /**< Output Selection Set for PWMH output of the channel 4  */
    using OSSH5  = regbits< type,  5,  1 >;  /**< Output Selection Set for PWMH output of the channel 5  */
    using OSSH6  = regbits< type,  6,  1 >;  /**< Output Selection Set for PWMH output of the channel 6  */
    using OSSH7  = regbits< type,  7,  1 >;  /**< Output Selection Set for PWMH output of the channel 7  */
    using OSSL0  = regbits< type, 16,  1 >;  /**< Output Selection Set for PWML output of the channel 0  */
    using OSSL1  = regbits< type, 17,  1 >;  /**< Output Selection Set for PWML output of the channel 1  */
    using OSSL2  = regbits< type, 18,  1 >;  /**< Output Selection Set for PWML output of the channel 2  */
    using OSSL3  = regbits< type, 19,  1 >;  /**< Output Selection Set for PWML output of the channel 3  */
    using OSSL4  = regbits< type, 20,  1 >;  /**< Output Selection Set for PWML output of the channel 4  */
    using OSSL5  = regbits< type, 21,  1 >;  /**< Output Selection Set for PWML output of the channel 5  */
    using OSSL6  = regbits< type, 22,  1 >;  /**< Output Selection Set for PWML output of the channel 6  */
    using OSSL7  = regbits< type, 23,  1 >;  /**< Output Selection Set for PWML output of the channel 7  */
  };

  /**
   * PWM Output Selection Clear Register
   */
  struct OSC
  : public reg< uint32_t, base_addr + 0x00000050, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, wo, 0 >;

    using OSCH0  = regbits< type,  0,  1 >;  /**< Output Selection Clear for PWMH output of the channel 0  */
    using OSCH1  = regbits< type,  1,  1 >;  /**< Output Selection Clear for PWMH output of the channel 1  */
    using OSCH2  = regbits< type,  2,  1 >;  /**< Output Selection Clear for PWMH output of the channel 2  */
    using OSCH3  = regbits< type,  3,  1 >;  /**< Output Selection Clear for PWMH output of the channel 3  */
    using OSCH4  = regbits< type,  4,  1 >;  /**< Output Selection Clear for PWMH output of the channel 4  */
    using OSCH5  = regbits< type,  5,  1 >;  /**< Output Selection Clear for PWMH output of the channel 5  */
    using OSCH6  = regbits< type,  6,  1 >;  /**< Output Selection Clear for PWMH output of the channel 6  */
    using OSCH7  = regbits< type,  7,  1 >;  /**< Output Selection Clear for PWMH output of the channel 7  */
    using OSCL0  = regbits< type, 16,  1 >;  /**< Output Selection Clear for PWML output of the channel 0  */
    using OSCL1  = regbits< type, 17,  1 >;  /**< Output Selection Clear for PWML output of the channel 1  */
    using OSCL2  = regbits< type, 18,  1 >;  /**< Output Selection Clear for PWML output of the channel 2  */
    using OSCL3  = regbits< type, 19,  1 >;  /**< Output Selection Clear for PWML output of the channel 3  */
    using OSCL4  = regbits< type, 20,  1 >;  /**< Output Selection Clear for PWML output of the channel 4  */
    using OSCL5  = regbits< type, 21,  1 >;  /**< Output Selection Clear for PWML output of the channel 5  */
    using OSCL6  = regbits< type, 22,  1 >;  /**< Output Selection Clear for PWML output of the channel 6  */
    using OSCL7  = regbits< type, 23,  1 >;  /**< Output Selection Clear for PWML output of the channel 7  */
  };

  /**
   * PWM Output Selection Set Update Register
   */
  struct OSSUPD
  : public reg< uint32_t, base_addr + 0x00000054, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, wo, 0 >;

    using OSSUPH0  = regbits< type,  0,  1 >;  /**< Output Selection Set for PWMH output of the channel 0  */
    using OSSUPH1  = regbits< type,  1,  1 >;  /**< Output Selection Set for PWMH output of the channel 1  */
    using OSSUPH2  = regbits< type,  2,  1 >;  /**< Output Selection Set for PWMH output of the channel 2  */
    using OSSUPH3  = regbits< type,  3,  1 >;  /**< Output Selection Set for PWMH output of the channel 3  */
    using OSSUPH4  = regbits< type,  4,  1 >;  /**< Output Selection Set for PWMH output of the channel 4  */
    using OSSUPH5  = regbits< type,  5,  1 >;  /**< Output Selection Set for PWMH output of the channel 5  */
    using OSSUPH6  = regbits< type,  6,  1 >;  /**< Output Selection Set for PWMH output of the channel 6  */
    using OSSUPH7  = regbits< type,  7,  1 >;  /**< Output Selection Set for PWMH output of the channel 7  */
    using OSSUPL0  = regbits< type, 16,  1 >;  /**< Output Selection Set for PWML output of the channel 0  */
    using OSSUPL1  = regbits< type, 17,  1 >;  /**< Output Selection Set for PWML output of the channel 1  */
    using OSSUPL2  = regbits< type, 18,  1 >;  /**< Output Selection Set for PWML output of the channel 2  */
    using OSSUPL3  = regbits< type, 19,  1 >;  /**< Output Selection Set for PWML output of the channel 3  */
    using OSSUPL4  = regbits< type, 20,  1 >;  /**< Output Selection Set for PWML output of the channel 4  */
    using OSSUPL5  = regbits< type, 21,  1 >;  /**< Output Selection Set for PWML output of the channel 5  */
    using OSSUPL6  = regbits< type, 22,  1 >;  /**< Output Selection Set for PWML output of the channel 6  */
    using OSSUPL7  = regbits< type, 23,  1 >;  /**< Output Selection Set for PWML output of the channel 7  */
  };

  /**
   * PWM Output Selection Clear Update Register
   */
  struct OSCUPD
  : public reg< uint32_t, base_addr + 0x00000058, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, wo, 0 >;

    using OSCUPH0   = regbits< type,  0,  1 >;  /**< Output Selection Clear for PWMH output of the channel 0  */
    using OSCUPH1   = regbits< type,  1,  1 >;  /**< Output Selection Clear for PWMH output of the channel 1  */
    using OSCUPH2   = regbits< type,  2,  1 >;  /**< Output Selection Clear for PWMH output of the channel 2  */
    using OSCUPH3   = regbits< type,  3,  1 >;  /**< Output Selection Clear for PWMH output of the channel 3  */
    using OSCUPH4   = regbits< type,  4,  1 >;  /**< Output Selection Clear for PWMH output of the channel 4  */
    using OSCUPH5   = regbits< type,  5,  1 >;  /**< Output Selection Clear for PWMH output of the channel 5  */
    using OSCUPH6   = regbits< type,  6,  1 >;  /**< Output Selection Clear for PWMH output of the channel 6  */
    using OSCUPH7   = regbits< type,  7,  1 >;  /**< Output Selection Clear for PWMH output of the channel 7  */
    using OSCUPL0   = regbits< type, 16,  1 >;  /**< Output Selection Clear for PWML output of the channel 0  */
    using OSCUPL1   = regbits< type, 17,  1 >;  /**< Output Selection Clear for PWML output of the channel 1  */
    using OSCUPL2   = regbits< type, 18,  1 >;  /**< Output Selection Clear for PWML output of the channel 2  */
    using OSCUPL3   = regbits< type, 19,  1 >;  /**< Output Selection Clear for PWML output of the channel 3  */
    using OSCUPL4   = regbits< type, 20,  1 >;  /**< Output Selection Clear for PWML output of the channel 4  */
    using OSCUPL5   = regbits< type, 21,  1 >;  /**< Output Selection Clear for PWML output of the channel 5  */
    using OSCUPDL6  = regbits< type, 22,  1 >;
    using OSCUPL7   = regbits< type, 23,  1 >;  /**< Output Selection Clear for PWML output of the channel 7  */
  };

  /**
   * PWM Fault Mode Register
   */
  struct FMR
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >;

    using FPOL  = regbits< type,  0,  8 >;  /**< Fault Polarity (fault input bit varies from 0 to 5)         */
    using FMOD  = regbits< type,  8,  8 >;  /**< Fault Activation Mode (fault input bit varies from 0 to 5)  */
    using FFIL  = regbits< type, 16,  8 >;  /**< Fault Filtering (fault input bit varies from 0 to 5)        */
  };

  /**
   * PWM Fault Status Register
   */
  struct FSR
  : public reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >;

    using FIV  = regbits< type,  0,  8 >;  /**< Fault Input Value (fault input bit varies from 0 to 5)  */
    using FS   = regbits< type,  8,  8 >;  /**< Fault Status (fault input bit varies from 0 to 5)       */
  };

  /**
   * PWM Fault Clear Register
   */
  struct FCR
  : public reg< uint32_t, base_addr + 0x00000064, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, wo, 0 >;

    using FCLR  = regbits< type,  0,  8 >;  /**< Fault Clear (fault input bit varies from 0 to 5)  */
  };

  /**
   * PWM Fault Protection Value Register
   */
  struct FPV
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >;

    using FPVH0  = regbits< type,  0,  1 >;  /**< Fault Protection Value for PWMH output on channel 0  */
    using FPVH1  = regbits< type,  1,  1 >;  /**< Fault Protection Value for PWMH output on channel 1  */
    using FPVH2  = regbits< type,  2,  1 >;  /**< Fault Protection Value for PWMH output on channel 2  */
    using FPVH3  = regbits< type,  3,  1 >;  /**< Fault Protection Value for PWMH output on channel 3  */
    using FPVH4  = regbits< type,  4,  1 >;  /**< Fault Protection Value for PWMH output on channel 4  */
    using FPVH5  = regbits< type,  5,  1 >;  /**< Fault Protection Value for PWMH output on channel 5  */
    using FPVH6  = regbits< type,  6,  1 >;  /**< Fault Protection Value for PWMH output on channel 6  */
    using FPVH7  = regbits< type,  7,  1 >;  /**< Fault Protection Value for PWMH output on channel 7  */
    using FPVL0  = regbits< type, 16,  1 >;  /**< Fault Protection Value for PWML output on channel 0  */
    using FPVL1  = regbits< type, 17,  1 >;  /**< Fault Protection Value for PWML output on channel 1  */
    using FPVL2  = regbits< type, 18,  1 >;  /**< Fault Protection Value for PWML output on channel 2  */
    using FPVL3  = regbits< type, 19,  1 >;  /**< Fault Protection Value for PWML output on channel 3  */
    using FPVL4  = regbits< type, 20,  1 >;  /**< Fault Protection Value for PWML output on channel 4  */
    using FPVL5  = regbits< type, 21,  1 >;  /**< Fault Protection Value for PWML output on channel 5  */
    using FPVL6  = regbits< type, 22,  1 >;  /**< Fault Protection Value for PWML output on channel 6  */
    using FPVL7  = regbits< type, 23,  1 >;  /**< Fault Protection Value for PWML output on channel 7  */
  };

  /**
   * PWM Fault Protection Enable Register 1
   */
  struct FPE1
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >;

    using FPE0  = regbits< type,  0,  8 >;  /**< Fault Protection Enable for channel 0 (fault input bit varies from 0 to 5)  */
    // fixme: Field name equals parent register name: FPE1
    using FPE1_ = regbits< type,  8,  8 >;  /**< Fault Protection Enable for channel 1 (fault input bit varies from 0 to 5)  */
    using FPE2  = regbits< type, 16,  8 >;  /**< Fault Protection Enable for channel 2 (fault input bit varies from 0 to 5)  */
    using FPE3  = regbits< type, 24,  8 >;  /**< Fault Protection Enable for channel 3 (fault input bit varies from 0 to 5)  */
  };

  /**
   * PWM Fault Protection Enable Register 2
   */
  struct FPE2
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >;

    using FPE4  = regbits< type,  0,  8 >;  /**< Fault Protection Enable for channel 4 (fault input bit varies from 0 to 5)  */
    using FPE5  = regbits< type,  8,  8 >;  /**< Fault Protection Enable for channel 5 (fault input bit varies from 0 to 5)  */
    using FPE6  = regbits< type, 16,  8 >;  /**< Fault Protection Enable for channel 6 (fault input bit varies from 0 to 5)  */
    using FPE7  = regbits< type, 24,  8 >;  /**< Fault Protection Enable for channel 7 (fault input bit varies from 0 to 5)  */
  };

  /**
   * PWM Event Line 0 Mode Register
   */
  struct ELMR[%s]
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CSEL0  = regbits< type,  0,  1 >;  /**< Comparison 0 Selection  */
    using CSEL1  = regbits< type,  1,  1 >;  /**< Comparison 1 Selection  */
    using CSEL2  = regbits< type,  2,  1 >;  /**< Comparison 2 Selection  */
    using CSEL3  = regbits< type,  3,  1 >;  /**< Comparison 3 Selection  */
    using CSEL4  = regbits< type,  4,  1 >;  /**< Comparison 4 Selection  */
    using CSEL5  = regbits< type,  5,  1 >;  /**< Comparison 5 Selection  */
    using CSEL6  = regbits< type,  6,  1 >;  /**< Comparison 6 Selection  */
    using CSEL7  = regbits< type,  7,  1 >;  /**< Comparison 7 Selection  */
  };

  /**
   * PWM Stepper Motor Mode Register
   */
  struct SMMR
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >;

    using GCEN0  = regbits< type,  0,  1 >;  /**< Gray Count ENable  */
    using GCEN1  = regbits< type,  1,  1 >;  /**< Gray Count ENable  */
    using GCEN2  = regbits< type,  2,  1 >;  /**< Gray Count ENable  */
    using GCEN3  = regbits< type,  3,  1 >;  /**< Gray Count ENable  */
    using DOWN0  = regbits< type, 16,  1 >;  /**< DOWN Count         */
    using DOWN1  = regbits< type, 17,  1 >;  /**< DOWN Count         */
    using DOWN2  = regbits< type, 18,  1 >;  /**< DOWN Count         */
    using DOWN3  = regbits< type, 19,  1 >;  /**< DOWN Count         */
  };

  /**
   * PWM Write Protect Control Register
   */
  struct WPCR
  : public reg< uint32_t, base_addr + 0x000000e4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, wo, 0 >;

    using WPCMD  = regbits< type,  0,  2 >;  /**< Write Protect Command           */
    using WPRG0  = regbits< type,  2,  1 >;  /**< Write Protect Register Group 0  */
    using WPRG1  = regbits< type,  3,  1 >;  /**< Write Protect Register Group 1  */
    using WPRG2  = regbits< type,  4,  1 >;  /**< Write Protect Register Group 2  */
    using WPRG3  = regbits< type,  5,  1 >;  /**< Write Protect Register Group 3  */
    using WPRG4  = regbits< type,  6,  1 >;  /**< Write Protect Register Group 4  */
    using WPRG5  = regbits< type,  7,  1 >;  /**< Write Protect Register Group 5  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect Key               */
  };

  /**
   * PWM Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPSWS0  = regbits< type,  0,  1 >;  /**< Write Protect SW Status         */
    using WPSWS1  = regbits< type,  1,  1 >;  /**< Write Protect SW Status         */
    using WPSWS2  = regbits< type,  2,  1 >;  /**< Write Protect SW Status         */
    using WPSWS3  = regbits< type,  3,  1 >;  /**< Write Protect SW Status         */
    using WPSWS4  = regbits< type,  4,  1 >;  /**< Write Protect SW Status         */
    using WPSWS5  = regbits< type,  5,  1 >;  /**< Write Protect SW Status         */
    using WPVS    = regbits< type,  7,  1 >;  /**< Write Protect Violation Status  */
    using WPHWS0  = regbits< type,  8,  1 >;  /**< Write Protect HW Status         */
    using WPHWS1  = regbits< type,  9,  1 >;  /**< Write Protect HW Status         */
    using WPHWS2  = regbits< type, 10,  1 >;  /**< Write Protect HW Status         */
    using WPHWS3  = regbits< type, 11,  1 >;  /**< Write Protect HW Status         */
    using WPHWS4  = regbits< type, 12,  1 >;  /**< Write Protect HW Status         */
    using WPHWS5  = regbits< type, 13,  1 >;  /**< Write Protect HW Status         */
    using WPVSRC  = regbits< type, 16, 16 >;  /**< Write Protect Violation Source  */
  };

  /**
   * PWM Comparison 0 Value Register
   */
  struct CMPV0
  : public reg< uint32_t, base_addr + 0x00000130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 0 Value Update Register
   */
  struct CMPVUPD0
  : public reg< uint32_t, base_addr + 0x00000134, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 0 Mode Register
   */
  struct CMPM0
  : public reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 0 Mode Update Register
   */
  struct CMPMUPD0
  : public reg< uint32_t, base_addr + 0x0000013c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 1 Value Register
   */
  struct CMPV1
  : public reg< uint32_t, base_addr + 0x00000140, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 1 Value Update Register
   */
  struct CMPVUPD1
  : public reg< uint32_t, base_addr + 0x00000144, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 1 Mode Register
   */
  struct CMPM1
  : public reg< uint32_t, base_addr + 0x00000148, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000148, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 1 Mode Update Register
   */
  struct CMPMUPD1
  : public reg< uint32_t, base_addr + 0x0000014c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000014c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 2 Value Register
   */
  struct CMPV2
  : public reg< uint32_t, base_addr + 0x00000150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000150, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 2 Value Update Register
   */
  struct CMPVUPD2
  : public reg< uint32_t, base_addr + 0x00000154, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 2 Mode Register
   */
  struct CMPM2
  : public reg< uint32_t, base_addr + 0x00000158, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000158, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 2 Mode Update Register
   */
  struct CMPMUPD2
  : public reg< uint32_t, base_addr + 0x0000015c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000015c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 3 Value Register
   */
  struct CMPV3
  : public reg< uint32_t, base_addr + 0x00000160, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 3 Value Update Register
   */
  struct CMPVUPD3
  : public reg< uint32_t, base_addr + 0x00000164, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 3 Mode Register
   */
  struct CMPM3
  : public reg< uint32_t, base_addr + 0x00000168, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000168, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 3 Mode Update Register
   */
  struct CMPMUPD3
  : public reg< uint32_t, base_addr + 0x0000016c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000016c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 4 Value Register
   */
  struct CMPV4
  : public reg< uint32_t, base_addr + 0x00000170, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000170, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 4 Value Update Register
   */
  struct CMPVUPD4
  : public reg< uint32_t, base_addr + 0x00000174, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000174, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 4 Mode Register
   */
  struct CMPM4
  : public reg< uint32_t, base_addr + 0x00000178, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000178, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 4 Mode Update Register
   */
  struct CMPMUPD4
  : public reg< uint32_t, base_addr + 0x0000017c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000017c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 5 Value Register
   */
  struct CMPV5
  : public reg< uint32_t, base_addr + 0x00000180, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000180, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 5 Value Update Register
   */
  struct CMPVUPD5
  : public reg< uint32_t, base_addr + 0x00000184, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000184, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 5 Mode Register
   */
  struct CMPM5
  : public reg< uint32_t, base_addr + 0x00000188, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000188, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 5 Mode Update Register
   */
  struct CMPMUPD5
  : public reg< uint32_t, base_addr + 0x0000018c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000018c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 6 Value Register
   */
  struct CMPV6
  : public reg< uint32_t, base_addr + 0x00000190, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000190, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 6 Value Update Register
   */
  struct CMPVUPD6
  : public reg< uint32_t, base_addr + 0x00000194, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000194, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 6 Mode Register
   */
  struct CMPM6
  : public reg< uint32_t, base_addr + 0x00000198, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000198, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 6 Mode Update Register
   */
  struct CMPMUPD6
  : public reg< uint32_t, base_addr + 0x0000019c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000019c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 7 Value Register
   */
  struct CMPV7
  : public reg< uint32_t, base_addr + 0x000001a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a0, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 7 Value Update Register
   */
  struct CMPVUPD7
  : public reg< uint32_t, base_addr + 0x000001a4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a4, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 7 Mode Register
   */
  struct CMPM7
  : public reg< uint32_t, base_addr + 0x000001a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a8, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 7 Mode Update Register
   */
  struct CMPMUPD7
  : public reg< uint32_t, base_addr + 0x000001ac, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001ac, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 0)
   */
  struct CMR0
  : public reg< uint32_t, base_addr + 0x00000200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000200, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 0)
   */
  struct CDTY0
  : public reg< uint32_t, base_addr + 0x00000204, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000204, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 0)
   */
  struct CDTYUPD0
  : public reg< uint32_t, base_addr + 0x00000208, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000208, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 0)
   */
  struct CPRD0
  : public reg< uint32_t, base_addr + 0x0000020c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000020c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 0)
   */
  struct CPRDUPD0
  : public reg< uint32_t, base_addr + 0x00000210, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000210, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 0)
   */
  struct CCNT0
  : public reg< uint32_t, base_addr + 0x00000214, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000214, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 0)
   */
  struct DT0
  : public reg< uint32_t, base_addr + 0x00000218, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000218, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 0)
   */
  struct DTUPD0
  : public reg< uint32_t, base_addr + 0x0000021c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000021c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 1)
   */
  struct CMR1
  : public reg< uint32_t, base_addr + 0x00000220, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000220, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 1)
   */
  struct CDTY1
  : public reg< uint32_t, base_addr + 0x00000224, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000224, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 1)
   */
  struct CDTYUPD1
  : public reg< uint32_t, base_addr + 0x00000228, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000228, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 1)
   */
  struct CPRD1
  : public reg< uint32_t, base_addr + 0x0000022c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000022c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 1)
   */
  struct CPRDUPD1
  : public reg< uint32_t, base_addr + 0x00000230, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000230, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 1)
   */
  struct CCNT1
  : public reg< uint32_t, base_addr + 0x00000234, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000234, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 1)
   */
  struct DT1
  : public reg< uint32_t, base_addr + 0x00000238, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000238, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 1)
   */
  struct DTUPD1
  : public reg< uint32_t, base_addr + 0x0000023c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000023c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 2)
   */
  struct CMR2
  : public reg< uint32_t, base_addr + 0x00000240, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000240, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 2)
   */
  struct CDTY2
  : public reg< uint32_t, base_addr + 0x00000244, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000244, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 2)
   */
  struct CDTYUPD2
  : public reg< uint32_t, base_addr + 0x00000248, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000248, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 2)
   */
  struct CPRD2
  : public reg< uint32_t, base_addr + 0x0000024c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000024c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 2)
   */
  struct CPRDUPD2
  : public reg< uint32_t, base_addr + 0x00000250, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000250, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 2)
   */
  struct CCNT2
  : public reg< uint32_t, base_addr + 0x00000254, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000254, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 2)
   */
  struct DT2
  : public reg< uint32_t, base_addr + 0x00000258, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000258, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 2)
   */
  struct DTUPD2
  : public reg< uint32_t, base_addr + 0x0000025c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000025c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 3)
   */
  struct CMR3
  : public reg< uint32_t, base_addr + 0x00000260, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000260, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 3)
   */
  struct CDTY3
  : public reg< uint32_t, base_addr + 0x00000264, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000264, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 3)
   */
  struct CDTYUPD3
  : public reg< uint32_t, base_addr + 0x00000268, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000268, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 3)
   */
  struct CPRD3
  : public reg< uint32_t, base_addr + 0x0000026c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000026c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 3)
   */
  struct CPRDUPD3
  : public reg< uint32_t, base_addr + 0x00000270, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000270, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 3)
   */
  struct CCNT3
  : public reg< uint32_t, base_addr + 0x00000274, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000274, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 3)
   */
  struct DT3
  : public reg< uint32_t, base_addr + 0x00000278, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000278, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 3)
   */
  struct DTUPD3
  : public reg< uint32_t, base_addr + 0x0000027c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000027c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 4)
   */
  struct CMR4
  : public reg< uint32_t, base_addr + 0x00000280, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000280, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 4)
   */
  struct CDTY4
  : public reg< uint32_t, base_addr + 0x00000284, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000284, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 4)
   */
  struct CDTYUPD4
  : public reg< uint32_t, base_addr + 0x00000288, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000288, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 4)
   */
  struct CPRD4
  : public reg< uint32_t, base_addr + 0x0000028c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000028c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 4)
   */
  struct CPRDUPD4
  : public reg< uint32_t, base_addr + 0x00000290, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000290, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 4)
   */
  struct CCNT4
  : public reg< uint32_t, base_addr + 0x00000294, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000294, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 4)
   */
  struct DT4
  : public reg< uint32_t, base_addr + 0x00000298, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000298, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 4)
   */
  struct DTUPD4
  : public reg< uint32_t, base_addr + 0x0000029c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000029c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 5)
   */
  struct CMR5
  : public reg< uint32_t, base_addr + 0x000002a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a0, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 5)
   */
  struct CDTY5
  : public reg< uint32_t, base_addr + 0x000002a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a4, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 5)
   */
  struct CDTYUPD5
  : public reg< uint32_t, base_addr + 0x000002a8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a8, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 5)
   */
  struct CPRD5
  : public reg< uint32_t, base_addr + 0x000002ac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002ac, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 5)
   */
  struct CPRDUPD5
  : public reg< uint32_t, base_addr + 0x000002b0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b0, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 5)
   */
  struct CCNT5
  : public reg< uint32_t, base_addr + 0x000002b4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b4, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 5)
   */
  struct DT5
  : public reg< uint32_t, base_addr + 0x000002b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b8, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 5)
   */
  struct DTUPD5
  : public reg< uint32_t, base_addr + 0x000002bc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002bc, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 6)
   */
  struct CMR6
  : public reg< uint32_t, base_addr + 0x000002c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c0, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 6)
   */
  struct CDTY6
  : public reg< uint32_t, base_addr + 0x000002c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c4, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 6)
   */
  struct CDTYUPD6
  : public reg< uint32_t, base_addr + 0x000002c8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c8, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 6)
   */
  struct CPRD6
  : public reg< uint32_t, base_addr + 0x000002cc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002cc, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 6)
   */
  struct CPRDUPD6
  : public reg< uint32_t, base_addr + 0x000002d0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d0, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 6)
   */
  struct CCNT6
  : public reg< uint32_t, base_addr + 0x000002d4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d4, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 6)
   */
  struct DT6
  : public reg< uint32_t, base_addr + 0x000002d8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d8, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 6)
   */
  struct DTUPD6
  : public reg< uint32_t, base_addr + 0x000002dc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002dc, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 7)
   */
  struct CMR7
  : public reg< uint32_t, base_addr + 0x000002e0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e0, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 7)
   */
  struct CDTY7
  : public reg< uint32_t, base_addr + 0x000002e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e4, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 7)
   */
  struct CDTYUPD7
  : public reg< uint32_t, base_addr + 0x000002e8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e8, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 7)
   */
  struct CPRD7
  : public reg< uint32_t, base_addr + 0x000002ec, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002ec, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 7)
   */
  struct CPRDUPD7
  : public reg< uint32_t, base_addr + 0x000002f0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f0, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 7)
   */
  struct CCNT7
  : public reg< uint32_t, base_addr + 0x000002f4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f4, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 7)
   */
  struct DT7
  : public reg< uint32_t, base_addr + 0x000002f8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f8, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 7)
   */
  struct DTUPD7
  : public reg< uint32_t, base_addr + 0x000002fc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002fc, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * Transmit Pointer Register
   */
  struct TPR
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >;

    using TXPTR  = regbits< type,  0, 32 >;  /**< Transmit Counter Register  */
  };

  /**
   * Transmit Counter Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >;

    using TXCTR  = regbits< type,  0, 16 >;  /**< Transmit Counter Register  */
  };

  /**
   * Transmit Next Pointer Register
   */
  struct TNPR
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0x00000000 >;

    using TXNPTR  = regbits< type,  0, 32 >;  /**< Transmit Next Pointer  */
  };

  /**
   * Transmit Next Counter Register
   */
  struct TNCR
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >;

    using TXNCTR  = regbits< type,  0, 16 >;  /**< Transmit Counter Next  */
  };

  /**
   * Transfer Control Register
   */
  struct PTCR
  : public reg< uint32_t, base_addr + 0x00000120, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, wo, 0x00000000 >;

    using RXTEN   = regbits< type,  0,  1 >;  /**< Receiver Transfer Enable      */
    using RXTDIS  = regbits< type,  1,  1 >;  /**< Receiver Transfer Disable     */
    using TXTEN   = regbits< type,  8,  1 >;  /**< Transmitter Transfer Enable   */
    using TXTDIS  = regbits< type,  9,  1 >;  /**< Transmitter Transfer Disable  */
  };

  /**
   * Transfer Status Register
   */
  struct PTSR
  : public reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >;

    using RXTEN  = regbits< type,  0,  1 >;  /**< Receiver Transfer Enable     */
    using TXTEN  = regbits< type,  8,  1 >;  /**< Transmitter Transfer Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWM_HPP_INCLUDED
