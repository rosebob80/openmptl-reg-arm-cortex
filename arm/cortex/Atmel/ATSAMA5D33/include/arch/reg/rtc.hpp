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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D33.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D33
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D33 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, LCD controller, gigabit Ethernet, security (refer to http://www.atmel.com/devices/SAMA5D33.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RTC_HPP_INCLUDED
#define ARCH_REG_RTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Real-time Clock
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0xfffffeb0;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using UPDTIM    = regbits< type,  0,  1 >;  /**< Update Request Time Register      */
    using UPDCAL    = regbits< type,  1,  1 >;  /**< Update Request Calendar Register  */
    using TIMEVSEL  = regbits< type,  8,  2 >;  /**< Time Event Selection              */
    using CALEVSEL  = regbits< type, 16,  2 >;  /**< Calendar Event Selection          */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using HRMOD  = regbits< type,  0,  1 >;  /**< 12-/24-hour Mode  */
  };

  /**
   * Time Register
   */
  struct TIMR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using SEC   = regbits< type,  0,  7 >;  /**< Current Second                         */
    using MIN   = regbits< type,  8,  7 >;  /**< Current Minute                         */
    using HOUR  = regbits< type, 16,  6 >;  /**< Current Hour                           */
    using AMPM  = regbits< type, 22,  1 >;  /**< Ante Meridiem Post Meridiem Indicator  */
  };

  /**
   * Calendar Register
   */
  struct CALR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x01810720 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x01810720 >;

    using CENT   = regbits< type,  0,  7 >;  /**< Current Century               */
    using YEAR   = regbits< type,  8,  8 >;  /**< Current Year                  */
    using MONTH  = regbits< type, 16,  5 >;  /**< Current Month                 */
    using DAY    = regbits< type, 21,  3 >;  /**< Current Day in Current Week   */
    using DATE   = regbits< type, 24,  6 >;  /**< Current Day in Current Month  */
  };

  /**
   * Time Alarm Register
   */
  struct TIMALR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using SEC     = regbits< type,  0,  7 >;  /**< Second Alarm         */
    using SECEN   = regbits< type,  7,  1 >;  /**< Second Alarm Enable  */
    using MIN     = regbits< type,  8,  7 >;  /**< Minute Alarm         */
    using MINEN   = regbits< type, 15,  1 >;  /**< Minute Alarm Enable  */
    using HOUR    = regbits< type, 16,  6 >;  /**< Hour Alarm           */
    using AMPM    = regbits< type, 22,  1 >;  /**< AM/PM Indicator      */
    using HOUREN  = regbits< type, 23,  1 >;  /**< Hour Alarm Enable    */
  };

  /**
   * Calendar Alarm Register
   */
  struct CALALR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x01010000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x01010000 >;

    using MONTH   = regbits< type, 16,  5 >;  /**< Month Alarm         */
    using MTHEN   = regbits< type, 23,  1 >;  /**< Month Alarm Enable  */
    using DATE    = regbits< type, 24,  6 >;  /**< Date Alarm          */
    using DATEEN  = regbits< type, 31,  1 >;  /**< Date Alarm Enable   */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using ACKUPD  = regbits< type,  0,  1 >;  /**< Acknowledge for Update  */
    using ALARM   = regbits< type,  1,  1 >;  /**< Alarm Flag              */
    using SEC     = regbits< type,  2,  1 >;  /**< Second Event            */
    using TIMEV   = regbits< type,  3,  1 >;  /**< Time Event              */
    using CALEV   = regbits< type,  4,  1 >;  /**< Calendar Event          */
  };

  /**
   * Status Clear Command Register
   */
  struct SCCR
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0 >;

    using ACKCLR  = regbits< type,  0,  1 >;  /**< Acknowledge Clear  */
    using ALRCLR  = regbits< type,  1,  1 >;  /**< Alarm Clear        */
    using SECCLR  = regbits< type,  2,  1 >;  /**< Second Clear       */
    using TIMCLR  = regbits< type,  3,  1 >;  /**< Time Clear         */
    using CALCLR  = regbits< type,  4,  1 >;  /**< Calendar Clear     */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using ACKEN  = regbits< type,  0,  1 >;  /**< Acknowledge Update Interrupt Enable  */
    using ALREN  = regbits< type,  1,  1 >;  /**< Alarm Interrupt Enable               */
    using SECEN  = regbits< type,  2,  1 >;  /**< Second Event Interrupt Enable        */
    using TIMEN  = regbits< type,  3,  1 >;  /**< Time Event Interrupt Enable          */
    using CALEN  = regbits< type,  4,  1 >;  /**< Calendar Event Interrupt Enable      */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using ACKDIS  = regbits< type,  0,  1 >;  /**< Acknowledge Update Interrupt Disable  */
    using ALRDIS  = regbits< type,  1,  1 >;  /**< Alarm Interrupt Disable               */
    using SECDIS  = regbits< type,  2,  1 >;  /**< Second Event Interrupt Disable        */
    using TIMDIS  = regbits< type,  3,  1 >;  /**< Time Event Interrupt Disable          */
    using CALDIS  = regbits< type,  4,  1 >;  /**< Calendar Event Interrupt Disable      */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >;

    using ACK  = regbits< type,  0,  1 >;  /**< Acknowledge Update Interrupt Mask  */
    using ALR  = regbits< type,  1,  1 >;  /**< Alarm Interrupt Mask               */
    using SEC  = regbits< type,  2,  1 >;  /**< Second Event Interrupt Mask        */
    using TIM  = regbits< type,  3,  1 >;  /**< Time Event Interrupt Mask          */
    using CAL  = regbits< type,  4,  1 >;  /**< Calendar Event Interrupt Mask      */
  };

  /**
   * Valid Entry Register
   */
  struct VER
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using NVTIM     = regbits< type,  0,  1 >;  /**< Non-valid Time            */
    using NVCAL     = regbits< type,  1,  1 >;  /**< Non-valid Calendar        */
    using NVTIMALR  = regbits< type,  2,  1 >;  /**< Non-valid Time Alarm      */
    using NVCALALR  = regbits< type,  3,  1 >;  /**< Non-valid Calendar Alarm  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
