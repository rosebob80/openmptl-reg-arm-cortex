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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
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
 * Real-time clock
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0x40002800;

  /**
   * time register
   */
  struct TR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PM   = regbits< type, 22,  1 >;  /**< AM/PM notation              */
    using HT   = regbits< type, 20,  2 >;  /**< Hour tens in BCD format     */
    using HU   = regbits< type, 16,  4 >;  /**< Hour units in BCD format    */
    using MNT  = regbits< type, 12,  3 >;  /**< Minute tens in BCD format   */
    using MNU  = regbits< type,  8,  4 >;  /**< Minute units in BCD format  */
    using ST   = regbits< type,  4,  3 >;  /**< Second tens in BCD format   */
    using SU   = regbits< type,  0,  4 >;  /**< Second units in BCD format  */
  };

  /**
   * date register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00002101 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00002101 >;

    using YT   = regbits< type, 20,  4 >;  /**< Year tens in BCD format    */
    using YU   = regbits< type, 16,  4 >;  /**< Year units in BCD format   */
    using WDU  = regbits< type, 13,  3 >;  /**< Week day units             */
    using MT   = regbits< type, 12,  1 >;  /**< Month tens in BCD format   */
    using MU   = regbits< type,  8,  4 >;  /**< Month units in BCD format  */
    using DT   = regbits< type,  4,  2 >;  /**< Date tens in BCD format    */
    using DU   = regbits< type,  0,  4 >;  /**< Date units in BCD format   */
  };

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using WCKSEL   = regbits< type,  0,  3 >;  /**< Wakeup clock selection                          */
    using TSEDGE   = regbits< type,  3,  1 >;  /**< Time-stamp event active edge                    */
    using REFCKON  = regbits< type,  4,  1 >;  /**< Reference clock detection enable (50 or 60 Hz)  */
    using BYPSHAD  = regbits< type,  5,  1 >;  /**< Bypass the shadow registers                     */
    using FMT      = regbits< type,  6,  1 >;  /**< Hour format                                     */
    using ALRAE    = regbits< type,  8,  1 >;  /**< Alarm A enable                                  */
    using ALRBE    = regbits< type,  9,  1 >;  /**< Alarm B enable                                  */
    using WUTE     = regbits< type, 10,  1 >;  /**< Wakeup timer enable                             */
    using TSE      = regbits< type, 11,  1 >;  /**< Time stamp enable                               */
    using ALRAIE   = regbits< type, 12,  1 >;  /**< Alarm A interrupt enable                        */
    using ALRBIE   = regbits< type, 13,  1 >;  /**< Alarm B interrupt enable                        */
    using WUTIE    = regbits< type, 14,  1 >;  /**< Wakeup timer interrupt enable                   */
    using TSIE     = regbits< type, 15,  1 >;  /**< Time-stamp interrupt enable                     */
    using ADD1H    = regbits< type, 16,  1 >;  /**< Add 1 hour (summer time change)                 */
    using SUB1H    = regbits< type, 17,  1 >;  /**< Subtract 1 hour (winter time change)            */
    using BKP      = regbits< type, 18,  1 >;  /**< Backup                                          */
    using COSEL    = regbits< type, 19,  1 >;  /**< Calibration output selection                    */
    using POL      = regbits< type, 20,  1 >;  /**< Output polarity                                 */
    using OSEL     = regbits< type, 21,  2 >;  /**< Output selection                                */
    using COE      = regbits< type, 23,  1 >;  /**< Calibration output enable                       */
    using ITSE     = regbits< type, 24,  1 >;  /**< timestamp on internal event enable              */
  };

  /**
   * initialization and status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000007 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000007 >;

    using ALRAWF   = regbits< type,  0,  1 >;  /**< Alarm A write flag              */
    using ALRBWF   = regbits< type,  1,  1 >;  /**< Alarm B write flag              */
    using WUTWF    = regbits< type,  2,  1 >;  /**< Wakeup timer write flag         */
    using SHPF     = regbits< type,  3,  1 >;  /**< Shift operation pending         */
    using INITS    = regbits< type,  4,  1 >;  /**< Initialization status flag      */
    using RSF      = regbits< type,  5,  1 >;  /**< Registers synchronization flag  */
    using INITF    = regbits< type,  6,  1 >;  /**< Initialization flag             */
    using INIT     = regbits< type,  7,  1 >;  /**< Initialization mode             */
    using ALRAF    = regbits< type,  8,  1 >;  /**< Alarm A flag                    */
    using ALRBF    = regbits< type,  9,  1 >;  /**< Alarm B flag                    */
    using WUTF     = regbits< type, 10,  1 >;  /**< Wakeup timer flag               */
    using TSF      = regbits< type, 11,  1 >;  /**< Time-stamp flag                 */
    using TSOVF    = regbits< type, 12,  1 >;  /**< Time-stamp overflow flag        */
    using TAMP1F   = regbits< type, 13,  1 >;  /**< Tamper detection flag           */
    using TAMP2F   = regbits< type, 14,  1 >;  /**< RTC_TAMP2 detection flag        */
    using TAMP3F   = regbits< type, 15,  1 >;  /**< RTC_TAMP3 detection flag        */
    using RECALPF  = regbits< type, 16,  1 >;  /**< Recalibration pending Flag      */
  };

  /**
   * prescaler register
   */
  struct PRER
  : public reg< uint32_t, base_addr + 0x10, rw, 0x007F00FF >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x007F00FF >;

    using PREDIV_A  = regbits< type, 16,  7 >;  /**< Asynchronous prescaler factor  */
    using PREDIV_S  = regbits< type,  0, 15 >;  /**< Synchronous prescaler factor   */
  };

  /**
   * wakeup timer register
   */
  struct WUTR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000FFFF >;

    using WUT  = regbits< type,  0, 16 >;  /**< Wakeup auto-reload value bits  */
  };

  /**
   * alarm A register
   */
  struct ALRMAR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using MSK4   = regbits< type, 31,  1 >;  /**< Alarm A date mask                */
    using WDSEL  = regbits< type, 30,  1 >;  /**< Week day selection               */
    using DT     = regbits< type, 28,  2 >;  /**< Date tens in BCD format          */
    using DU     = regbits< type, 24,  4 >;  /**< Date units or day in BCD format  */
    using MSK3   = regbits< type, 23,  1 >;  /**< Alarm A hours mask               */
    using PM     = regbits< type, 22,  1 >;  /**< AM/PM notation                   */
    using HT     = regbits< type, 20,  2 >;  /**< Hour tens in BCD format          */
    using HU     = regbits< type, 16,  4 >;  /**< Hour units in BCD format         */
    using MSK2   = regbits< type, 15,  1 >;  /**< Alarm A minutes mask             */
    using MNT    = regbits< type, 12,  3 >;  /**< Minute tens in BCD format        */
    using MNU    = regbits< type,  8,  4 >;  /**< Minute units in BCD format       */
    using MSK1   = regbits< type,  7,  1 >;  /**< Alarm A seconds mask             */
    using ST     = regbits< type,  4,  3 >;  /**< Second tens in BCD format        */
    using SU     = regbits< type,  0,  4 >;  /**< Second units in BCD format       */
  };

  /**
   * alarm B register
   */
  struct ALRMBR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using MSK4   = regbits< type, 31,  1 >;  /**< Alarm B date mask                */
    using WDSEL  = regbits< type, 30,  1 >;  /**< Week day selection               */
    using DT     = regbits< type, 28,  2 >;  /**< Date tens in BCD format          */
    using DU     = regbits< type, 24,  4 >;  /**< Date units or day in BCD format  */
    using MSK3   = regbits< type, 23,  1 >;  /**< Alarm B hours mask               */
    using PM     = regbits< type, 22,  1 >;  /**< AM/PM notation                   */
    using HT     = regbits< type, 20,  2 >;  /**< Hour tens in BCD format          */
    using HU     = regbits< type, 16,  4 >;  /**< Hour units in BCD format         */
    using MSK2   = regbits< type, 15,  1 >;  /**< Alarm B minutes mask             */
    using MNT    = regbits< type, 12,  3 >;  /**< Minute tens in BCD format        */
    using MNU    = regbits< type,  8,  4 >;  /**< Minute units in BCD format       */
    using MSK1   = regbits< type,  7,  1 >;  /**< Alarm B seconds mask             */
    using ST     = regbits< type,  4,  3 >;  /**< Second tens in BCD format        */
    using SU     = regbits< type,  0,  4 >;  /**< Second units in BCD format       */
  };

  /**
   * write protection register
   */
  struct WPR
  : public reg< uint32_t, base_addr + 0x24, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, wo, 0x00000000 >;

    using KEY  = regbits< type,  0,  8 >;  /**< Write protection key  */
  };

  /**
   * sub second register
   */
  struct SSR
  : public reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >;

    using SS  = regbits< type,  0, 16 >;  /**< Sub second value  */
  };

  /**
   * shift control register
   */
  struct SHIFTR
  : public reg< uint32_t, base_addr + 0x2c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, wo, 0x00000000 >;

    using ADD1S  = regbits< type, 31,  1 >;  /**< Add one second                   */
    using SUBFS  = regbits< type,  0, 15 >;  /**< Subtract a fraction of a second  */
  };

  /**
   * time stamp time register
   */
  struct TSTR
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using SU   = regbits< type,  0,  4 >;  /**< Second units in BCD format  */
    using ST   = regbits< type,  4,  3 >;  /**< Second tens in BCD format   */
    using MNU  = regbits< type,  8,  4 >;  /**< Minute units in BCD format  */
    using MNT  = regbits< type, 12,  3 >;  /**< Minute tens in BCD format   */
    using HU   = regbits< type, 16,  4 >;  /**< Hour units in BCD format    */
    using HT   = regbits< type, 20,  2 >;  /**< Hour tens in BCD format     */
    using PM   = regbits< type, 22,  1 >;  /**< AM/PM notation              */
  };

  /**
   * time stamp date register
   */
  struct TSDR
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using WDU  = regbits< type, 13,  3 >;  /**< Week day units             */
    using MT   = regbits< type, 12,  1 >;  /**< Month tens in BCD format   */
    using MU   = regbits< type,  8,  4 >;  /**< Month units in BCD format  */
    using DT   = regbits< type,  4,  2 >;  /**< Date tens in BCD format    */
    using DU   = regbits< type,  0,  4 >;  /**< Date units in BCD format   */
  };

  /**
   * timestamp sub second register
   */
  struct TSSSR
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using SS  = regbits< type,  0, 16 >;  /**< Sub second value  */
  };

  /**
   * calibration register
   */
  struct CALR
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using CALP    = regbits< type, 15,  1 >;  /**< Increase frequency of RTC by 488.5 ppm    */
    using CALW8   = regbits< type, 14,  1 >;  /**< Use an 8-second calibration cycle period  */
    using CALW16  = regbits< type, 13,  1 >;  /**< Use a 16-second calibration cycle period  */
    using CALM    = regbits< type,  0,  9 >;  /**< Calibration minus                         */
  };

  /**
   * tamper configuration register
   */
  struct TAMPCR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using TAMP1E        = regbits< type,  0,  1 >;  /**< Tamper 1 detection enable                     */
    using TAMP1TRG      = regbits< type,  1,  1 >;  /**< Active level for tamper 1                     */
    using TAMPIE        = regbits< type,  2,  1 >;  /**< Tamper interrupt enable                       */
    using TAMP2E        = regbits< type,  3,  1 >;  /**< Tamper 2 detection enable                     */
    using TAMP2TRG      = regbits< type,  4,  1 >;  /**< Active level for tamper 2                     */
    using TAMP3E        = regbits< type,  5,  1 >;  /**< Tamper 3 detection enable                     */
    using TAMP3TRG      = regbits< type,  6,  1 >;  /**< Active level for tamper 3                     */
    using TAMPTS        = regbits< type,  7,  1 >;  /**< Activate timestamp on tamper detection event  */
    using TAMPFREQ      = regbits< type,  8,  3 >;  /**< Tamper sampling frequency                     */
    using TAMPFLT       = regbits< type, 11,  2 >;  /**< Tamper filter count                           */
    using TAMPPRCH      = regbits< type, 13,  2 >;  /**< Tamper precharge duration                     */
    using TAMPPUDIS     = regbits< type, 15,  1 >;  /**< TAMPER pull-up disable                        */
    using TAMP1IE       = regbits< type, 16,  1 >;  /**< Tamper 1 interrupt enable                     */
    using TAMP1NOERASE  = regbits< type, 17,  1 >;  /**< Tamper 1 no erase                             */
    using TAMP1MF       = regbits< type, 18,  1 >;  /**< Tamper 1 mask flag                            */
    using TAMP2IE       = regbits< type, 19,  1 >;  /**< Tamper 2 interrupt enable                     */
    using TAMP2NOERASE  = regbits< type, 20,  1 >;  /**< Tamper 2 no erase                             */
    using TAMP2MF       = regbits< type, 21,  1 >;  /**< Tamper 2 mask flag                            */
    using TAMP3IE       = regbits< type, 22,  1 >;  /**< Tamper 3 interrupt enable                     */
    using TAMP3NOERASE  = regbits< type, 23,  1 >;  /**< Tamper 3 no erase                             */
    using TAMP3MF       = regbits< type, 24,  1 >;  /**< Tamper 3 mask flag                            */
  };

  /**
   * alarm A sub second register
   */
  struct ALRMASSR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using MASKSS  = regbits< type, 24,  4 >;  /**< Mask the most-significant bits starting at this bit  */
    using SS      = regbits< type,  0, 15 >;  /**< Sub seconds value                                    */
  };

  /**
   * alarm B sub second register
   */
  struct ALRMBSSR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using MASKSS  = regbits< type, 24,  4 >;  /**< Mask the most-significant bits starting at this bit  */
    using SS      = regbits< type,  0, 15 >;  /**< Sub seconds value                                    */
  };

  /**
   * option register
   */
  struct OR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using RTC_ALARM_TYPE  = regbits< type,  0,  1 >;  /**< RTC_ALARM on PC13 output type  */
    using RTC_OUT_RMP     = regbits< type,  1,  1 >;  /**< RTC_OUT remap                  */
  };

  /**
   * backup register
   */
  struct BKP0R
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP1R
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP2R
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP3R
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP4R
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP5R
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP6R
  : public reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP7R
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP8R
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP9R
  : public reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP10R
  : public reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP11R
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP12R
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP13R
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP14R
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP15R
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP16R
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP17R
  : public reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP18R
  : public reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP19R
  : public reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP20R
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP21R
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP22R
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP23R
  : public reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP24R
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP25R
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP26R
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP27R
  : public reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP28R
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP29R
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP30R
  : public reg< uint32_t, base_addr + 0xc8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };

  /**
   * backup register
   */
  struct BKP31R
  : public reg< uint32_t, base_addr + 0xcc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0x00000000 >;

    using BKP  = regbits< type,  0, 32 >;  /**< BKP  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
