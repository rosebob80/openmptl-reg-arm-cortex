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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M10
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M10 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, DDR2/LPDDR, Video Decoder, LCD, HS USB, 10/100 Ethernet, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M10.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TC0_HPP_INCLUDED
#define ARCH_REG_TC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Timer Counter 0
 */
struct TC0
{
  static constexpr reg_addr_t base_addr = 0xfff7c000;

  /**
   * Channel Control Register (channel = 0)
   */
  struct CCR0
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using CLKEN   = regbits< type,  0,  1 >;  /**< Counter Clock Enable Command   */
    using CLKDIS  = regbits< type,  1,  1 >;  /**< Counter Clock Disable Command  */
    using SWTRG   = regbits< type,  2,  1 >;  /**< Software Trigger Command       */
  };

  /**
   * Channel Mode Register (channel = 0)
   */
  struct CMR0
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using TCCLKS   = regbits< type,  0,  3 >;  /**< Clock Selection                          */
    using CLKI     = regbits< type,  3,  1 >;  /**< Clock Invert                             */
    using BURST    = regbits< type,  4,  2 >;  /**< Burst Signal Selection                   */
    using LDBSTOP  = regbits< type,  6,  1 >;  /**< Counter Clock Stopped with RB Loading    */
    using LDBDIS   = regbits< type,  7,  1 >;  /**< Counter Clock Disable with RB Loading    */
    using ETRGEDG  = regbits< type,  8,  2 >;  /**< External Trigger Edge Selection          */
    using ABETRG   = regbits< type, 10,  1 >;  /**< TIOA or TIOB External Trigger Selection  */
    using CPCTRG   = regbits< type, 14,  1 >;  /**< RC Compare Trigger Enable                */
    using WAVE     = regbits< type, 15,  1 >;
    using LDRA     = regbits< type, 16,  2 >;  /**< RA Loading Selection                     */
    using LDRB     = regbits< type, 18,  2 >;  /**< RB Loading Selection                     */
  };

  /**
   * Channel Mode Register (channel = 0)
   */
  struct CMR0_WAVE_EQ_1
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using TCCLKS   = regbits< type,  0,  3 >;  /**< Clock Selection                        */
    using CLKI     = regbits< type,  3,  1 >;  /**< Clock Invert                           */
    using BURST    = regbits< type,  4,  2 >;  /**< Burst Signal Selection                 */
    using CPCSTOP  = regbits< type,  6,  1 >;  /**< Counter Clock Stopped with RC Compare  */
    using CPCDIS   = regbits< type,  7,  1 >;  /**< Counter Clock Disable with RC Compare  */
    using EEVTEDG  = regbits< type,  8,  2 >;  /**< External Event Edge Selection          */
    using EEVT     = regbits< type, 10,  2 >;  /**< External Event Selection               */
    using ENETRG   = regbits< type, 12,  1 >;  /**< External Event Trigger Enable          */
    using WAVSEL   = regbits< type, 13,  2 >;  /**< Waveform Selection                     */
    using WAVE     = regbits< type, 15,  1 >;
    using ACPA     = regbits< type, 16,  2 >;  /**< RA Compare Effect on TIOA              */
    using ACPC     = regbits< type, 18,  2 >;  /**< RC Compare Effect on TIOA              */
    using AEEVT    = regbits< type, 20,  2 >;  /**< External Event Effect on TIOA          */
    using ASWTRG   = regbits< type, 22,  2 >;  /**< Software Trigger Effect on TIOA        */
    using BCPB     = regbits< type, 24,  2 >;  /**< RB Compare Effect on TIOB              */
    using BCPC     = regbits< type, 26,  2 >;  /**< RC Compare Effect on TIOB              */
    using BEEVT    = regbits< type, 28,  2 >;  /**< External Event Effect on TIOB          */
    using BSWTRG   = regbits< type, 30,  2 >;  /**< Software Trigger Effect on TIOB        */
  };

  /**
   * Counter Value (channel = 0)
   */
  struct CV0
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using CV  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * Register A (channel = 0)
   */
  struct RA0
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using RA  = regbits< type,  0, 16 >;  /**< Register A  */
  };

  /**
   * Register B (channel = 0)
   */
  struct RB0
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using RB  = regbits< type,  0, 16 >;  /**< Register B  */
  };

  /**
   * Register C (channel = 0)
   */
  struct RC0
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using RC  = regbits< type,  0, 16 >;  /**< Register C  */
  };

  /**
   * Status Register (channel = 0)
   */
  struct SR0
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using COVFS   = regbits< type,  0,  1 >;  /**< Counter Overflow Status  */
    using LOVRS   = regbits< type,  1,  1 >;  /**< Load Overrun Status      */
    using CPAS    = regbits< type,  2,  1 >;  /**< RA Compare Status        */
    using CPBS    = regbits< type,  3,  1 >;  /**< RB Compare Status        */
    using CPCS    = regbits< type,  4,  1 >;  /**< RC Compare Status        */
    using LDRAS   = regbits< type,  5,  1 >;  /**< RA Loading Status        */
    using LDRBS   = regbits< type,  6,  1 >;  /**< RB Loading Status        */
    using ETRGS   = regbits< type,  7,  1 >;  /**< External Trigger Status  */
    using CLKSTA  = regbits< type, 16,  1 >;  /**< Clock Enabling Status    */
    using MTIOA   = regbits< type, 17,  1 >;  /**< TIOA Mirror              */
    using MTIOB   = regbits< type, 18,  1 >;  /**< TIOB Mirror              */
  };

  /**
   * Interrupt Enable Register (channel = 0)
   */
  struct IER0
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Interrupt Disable Register (channel = 0)
   */
  struct IDR0
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Interrupt Mask Register (channel = 0)
   */
  struct IMR0
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Channel Control Register (channel = 1)
   */
  struct CCR1
  : public reg< uint32_t, base_addr + 0x00000040, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, wo, 0 >;

    using CLKEN   = regbits< type,  0,  1 >;  /**< Counter Clock Enable Command   */
    using CLKDIS  = regbits< type,  1,  1 >;  /**< Counter Clock Disable Command  */
    using SWTRG   = regbits< type,  2,  1 >;  /**< Software Trigger Command       */
  };

  /**
   * Channel Mode Register (channel = 1)
   */
  struct CMR1
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using TCCLKS   = regbits< type,  0,  3 >;  /**< Clock Selection                          */
    using CLKI     = regbits< type,  3,  1 >;  /**< Clock Invert                             */
    using BURST    = regbits< type,  4,  2 >;  /**< Burst Signal Selection                   */
    using LDBSTOP  = regbits< type,  6,  1 >;  /**< Counter Clock Stopped with RB Loading    */
    using LDBDIS   = regbits< type,  7,  1 >;  /**< Counter Clock Disable with RB Loading    */
    using ETRGEDG  = regbits< type,  8,  2 >;  /**< External Trigger Edge Selection          */
    using ABETRG   = regbits< type, 10,  1 >;  /**< TIOA or TIOB External Trigger Selection  */
    using CPCTRG   = regbits< type, 14,  1 >;  /**< RC Compare Trigger Enable                */
    using WAVE     = regbits< type, 15,  1 >;
    using LDRA     = regbits< type, 16,  2 >;  /**< RA Loading Selection                     */
    using LDRB     = regbits< type, 18,  2 >;  /**< RB Loading Selection                     */
  };

  /**
   * Channel Mode Register (channel = 1)
   */
  struct CMR1_WAVE_EQ_1
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using TCCLKS   = regbits< type,  0,  3 >;  /**< Clock Selection                        */
    using CLKI     = regbits< type,  3,  1 >;  /**< Clock Invert                           */
    using BURST    = regbits< type,  4,  2 >;  /**< Burst Signal Selection                 */
    using CPCSTOP  = regbits< type,  6,  1 >;  /**< Counter Clock Stopped with RC Compare  */
    using CPCDIS   = regbits< type,  7,  1 >;  /**< Counter Clock Disable with RC Compare  */
    using EEVTEDG  = regbits< type,  8,  2 >;  /**< External Event Edge Selection          */
    using EEVT     = regbits< type, 10,  2 >;  /**< External Event Selection               */
    using ENETRG   = regbits< type, 12,  1 >;  /**< External Event Trigger Enable          */
    using WAVSEL   = regbits< type, 13,  2 >;  /**< Waveform Selection                     */
    using WAVE     = regbits< type, 15,  1 >;
    using ACPA     = regbits< type, 16,  2 >;  /**< RA Compare Effect on TIOA              */
    using ACPC     = regbits< type, 18,  2 >;  /**< RC Compare Effect on TIOA              */
    using AEEVT    = regbits< type, 20,  2 >;  /**< External Event Effect on TIOA          */
    using ASWTRG   = regbits< type, 22,  2 >;  /**< Software Trigger Effect on TIOA        */
    using BCPB     = regbits< type, 24,  2 >;  /**< RB Compare Effect on TIOB              */
    using BCPC     = regbits< type, 26,  2 >;  /**< RC Compare Effect on TIOB              */
    using BEEVT    = regbits< type, 28,  2 >;  /**< External Event Effect on TIOB          */
    using BSWTRG   = regbits< type, 30,  2 >;  /**< Software Trigger Effect on TIOB        */
  };

  /**
   * Counter Value (channel = 1)
   */
  struct CV1
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >;

    using CV  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * Register A (channel = 1)
   */
  struct RA1
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >;

    using RA  = regbits< type,  0, 16 >;  /**< Register A  */
  };

  /**
   * Register B (channel = 1)
   */
  struct RB1
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >;

    using RB  = regbits< type,  0, 16 >;  /**< Register B  */
  };

  /**
   * Register C (channel = 1)
   */
  struct RC1
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >;

    using RC  = regbits< type,  0, 16 >;  /**< Register C  */
  };

  /**
   * Status Register (channel = 1)
   */
  struct SR1
  : public reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >;

    using COVFS   = regbits< type,  0,  1 >;  /**< Counter Overflow Status  */
    using LOVRS   = regbits< type,  1,  1 >;  /**< Load Overrun Status      */
    using CPAS    = regbits< type,  2,  1 >;  /**< RA Compare Status        */
    using CPBS    = regbits< type,  3,  1 >;  /**< RB Compare Status        */
    using CPCS    = regbits< type,  4,  1 >;  /**< RC Compare Status        */
    using LDRAS   = regbits< type,  5,  1 >;  /**< RA Loading Status        */
    using LDRBS   = regbits< type,  6,  1 >;  /**< RB Loading Status        */
    using ETRGS   = regbits< type,  7,  1 >;  /**< External Trigger Status  */
    using CLKSTA  = regbits< type, 16,  1 >;  /**< Clock Enabling Status    */
    using MTIOA   = regbits< type, 17,  1 >;  /**< TIOA Mirror              */
    using MTIOB   = regbits< type, 18,  1 >;  /**< TIOB Mirror              */
  };

  /**
   * Interrupt Enable Register (channel = 1)
   */
  struct IER1
  : public reg< uint32_t, base_addr + 0x00000064, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, wo, 0 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Interrupt Disable Register (channel = 1)
   */
  struct IDR1
  : public reg< uint32_t, base_addr + 0x00000068, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, wo, 0 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Interrupt Mask Register (channel = 1)
   */
  struct IMR1
  : public reg< uint32_t, base_addr + 0x0000006c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, ro, 0x00000000 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Channel Control Register (channel = 2)
   */
  struct CCR2
  : public reg< uint32_t, base_addr + 0x00000080, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, wo, 0 >;

    using CLKEN   = regbits< type,  0,  1 >;  /**< Counter Clock Enable Command   */
    using CLKDIS  = regbits< type,  1,  1 >;  /**< Counter Clock Disable Command  */
    using SWTRG   = regbits< type,  2,  1 >;  /**< Software Trigger Command       */
  };

  /**
   * Channel Mode Register (channel = 2)
   */
  struct CMR2
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >;

    using TCCLKS   = regbits< type,  0,  3 >;  /**< Clock Selection                          */
    using CLKI     = regbits< type,  3,  1 >;  /**< Clock Invert                             */
    using BURST    = regbits< type,  4,  2 >;  /**< Burst Signal Selection                   */
    using LDBSTOP  = regbits< type,  6,  1 >;  /**< Counter Clock Stopped with RB Loading    */
    using LDBDIS   = regbits< type,  7,  1 >;  /**< Counter Clock Disable with RB Loading    */
    using ETRGEDG  = regbits< type,  8,  2 >;  /**< External Trigger Edge Selection          */
    using ABETRG   = regbits< type, 10,  1 >;  /**< TIOA or TIOB External Trigger Selection  */
    using CPCTRG   = regbits< type, 14,  1 >;  /**< RC Compare Trigger Enable                */
    using WAVE     = regbits< type, 15,  1 >;
    using LDRA     = regbits< type, 16,  2 >;  /**< RA Loading Selection                     */
    using LDRB     = regbits< type, 18,  2 >;  /**< RB Loading Selection                     */
  };

  /**
   * Channel Mode Register (channel = 2)
   */
  struct CMR2_WAVE_EQ_1
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >;

    using TCCLKS   = regbits< type,  0,  3 >;  /**< Clock Selection                        */
    using CLKI     = regbits< type,  3,  1 >;  /**< Clock Invert                           */
    using BURST    = regbits< type,  4,  2 >;  /**< Burst Signal Selection                 */
    using CPCSTOP  = regbits< type,  6,  1 >;  /**< Counter Clock Stopped with RC Compare  */
    using CPCDIS   = regbits< type,  7,  1 >;  /**< Counter Clock Disable with RC Compare  */
    using EEVTEDG  = regbits< type,  8,  2 >;  /**< External Event Edge Selection          */
    using EEVT     = regbits< type, 10,  2 >;  /**< External Event Selection               */
    using ENETRG   = regbits< type, 12,  1 >;  /**< External Event Trigger Enable          */
    using WAVSEL   = regbits< type, 13,  2 >;  /**< Waveform Selection                     */
    using WAVE     = regbits< type, 15,  1 >;
    using ACPA     = regbits< type, 16,  2 >;  /**< RA Compare Effect on TIOA              */
    using ACPC     = regbits< type, 18,  2 >;  /**< RC Compare Effect on TIOA              */
    using AEEVT    = regbits< type, 20,  2 >;  /**< External Event Effect on TIOA          */
    using ASWTRG   = regbits< type, 22,  2 >;  /**< Software Trigger Effect on TIOA        */
    using BCPB     = regbits< type, 24,  2 >;  /**< RB Compare Effect on TIOB              */
    using BCPC     = regbits< type, 26,  2 >;  /**< RC Compare Effect on TIOB              */
    using BEEVT    = regbits< type, 28,  2 >;  /**< External Event Effect on TIOB          */
    using BSWTRG   = regbits< type, 30,  2 >;  /**< Software Trigger Effect on TIOB        */
  };

  /**
   * Counter Value (channel = 2)
   */
  struct CV2
  : public reg< uint32_t, base_addr + 0x00000090, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, ro, 0x00000000 >;

    using CV  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * Register A (channel = 2)
   */
  struct RA2
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >;

    using RA  = regbits< type,  0, 16 >;  /**< Register A  */
  };

  /**
   * Register B (channel = 2)
   */
  struct RB2
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >;

    using RB  = regbits< type,  0, 16 >;  /**< Register B  */
  };

  /**
   * Register C (channel = 2)
   */
  struct RC2
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >;

    using RC  = regbits< type,  0, 16 >;  /**< Register C  */
  };

  /**
   * Status Register (channel = 2)
   */
  struct SR2
  : public reg< uint32_t, base_addr + 0x000000a0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, ro, 0x00000000 >;

    using COVFS   = regbits< type,  0,  1 >;  /**< Counter Overflow Status  */
    using LOVRS   = regbits< type,  1,  1 >;  /**< Load Overrun Status      */
    using CPAS    = regbits< type,  2,  1 >;  /**< RA Compare Status        */
    using CPBS    = regbits< type,  3,  1 >;  /**< RB Compare Status        */
    using CPCS    = regbits< type,  4,  1 >;  /**< RC Compare Status        */
    using LDRAS   = regbits< type,  5,  1 >;  /**< RA Loading Status        */
    using LDRBS   = regbits< type,  6,  1 >;  /**< RB Loading Status        */
    using ETRGS   = regbits< type,  7,  1 >;  /**< External Trigger Status  */
    using CLKSTA  = regbits< type, 16,  1 >;  /**< Clock Enabling Status    */
    using MTIOA   = regbits< type, 17,  1 >;  /**< TIOA Mirror              */
    using MTIOB   = regbits< type, 18,  1 >;  /**< TIOB Mirror              */
  };

  /**
   * Interrupt Enable Register (channel = 2)
   */
  struct IER2
  : public reg< uint32_t, base_addr + 0x000000a4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, wo, 0 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Interrupt Disable Register (channel = 2)
   */
  struct IDR2
  : public reg< uint32_t, base_addr + 0x000000a8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, wo, 0 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Interrupt Mask Register (channel = 2)
   */
  struct IMR2
  : public reg< uint32_t, base_addr + 0x000000ac, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, ro, 0x00000000 >;

    using COVFS  = regbits< type,  0,  1 >;  /**< Counter Overflow  */
    using LOVRS  = regbits< type,  1,  1 >;  /**< Load Overrun      */
    using CPAS   = regbits< type,  2,  1 >;  /**< RA Compare        */
    using CPBS   = regbits< type,  3,  1 >;  /**< RB Compare        */
    using CPCS   = regbits< type,  4,  1 >;  /**< RC Compare        */
    using LDRAS  = regbits< type,  5,  1 >;  /**< RA Loading        */
    using LDRBS  = regbits< type,  6,  1 >;  /**< RB Loading        */
    using ETRGS  = regbits< type,  7,  1 >;  /**< External Trigger  */
  };

  /**
   * Block Control Register
   */
  struct BCR
  : public reg< uint32_t, base_addr + 0x000000c0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, wo, 0 >;

    using SYNC  = regbits< type,  0,  1 >;  /**< Synchro Command  */
  };

  /**
   * Block Mode Register
   */
  struct BMR
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >;

    using TC0XC0S  = regbits< type,  0,  2 >;  /**< External Clock Signal 0 Selection  */
    using TC1XC1S  = regbits< type,  2,  2 >;  /**< External Clock Signal 1 Selection  */
    using TC2XC2S  = regbits< type,  4,  2 >;  /**< External Clock Signal 2 Selection  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TC0_HPP_INCLUDED
