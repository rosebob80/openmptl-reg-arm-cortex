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

#ifndef ARCH_REG_PMC_HPP_INCLUDED
#define ARCH_REG_PMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power Management Controller
 */
struct PMC
{
  static constexpr reg_addr_t base_addr = 0xfffffc00;

  /**
   * System Clock Enable Register
   */
  struct PMC_SCER
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using DDRCK  = regbits< type,  2,  1 >;  /**< DDR Clock Enable                    */
    using UHP    = regbits< type,  6,  1 >;  /**< USB Host OHCI Clocks Enable         */
    using PCK0   = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Enable  */
    using PCK1   = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Enable  */
  };

  /**
   * System Clock Disable Register
   */
  struct PMC_SCDR
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using PCK    = regbits< type,  0,  1 >;  /**< Processor Clock Disable              */
    using DDRCK  = regbits< type,  2,  1 >;  /**< DDR Clock Disable                    */
    using UHP    = regbits< type,  6,  1 >;  /**< USB Host OHCI Clock Disable          */
    using PCK0   = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Disable  */
    using PCK1   = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Disable  */
  };

  /**
   * System Clock Status Register
   */
  struct PMC_SCSR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000001 >;

    using PCK    = regbits< type,  0,  1 >;  /**< Processor Clock Status              */
    using DDRCK  = regbits< type,  2,  1 >;  /**< DDR Clock Status                    */
    using UHP    = regbits< type,  6,  1 >;  /**< USB Host Port Clock Status          */
    using PCK0   = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Status  */
    using PCK1   = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Status  */
  };

  /**
   * Peripheral Clock Enable Register
   */
  struct PMC_PCER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using PID2   = regbits< type,  2,  1 >;  /**< Peripheral Clock 2 Enable   */
    using PID3   = regbits< type,  3,  1 >;  /**< Peripheral Clock 3 Enable   */
    using PID4   = regbits< type,  4,  1 >;  /**< Peripheral Clock 4 Enable   */
    using PID5   = regbits< type,  5,  1 >;  /**< Peripheral Clock 5 Enable   */
    using PID6   = regbits< type,  6,  1 >;  /**< Peripheral Clock 6 Enable   */
    using PID7   = regbits< type,  7,  1 >;  /**< Peripheral Clock 7 Enable   */
    using PID8   = regbits< type,  8,  1 >;  /**< Peripheral Clock 8 Enable   */
    using PID9   = regbits< type,  9,  1 >;  /**< Peripheral Clock 9 Enable   */
    using PID10  = regbits< type, 10,  1 >;  /**< Peripheral Clock 10 Enable  */
    using PID11  = regbits< type, 11,  1 >;  /**< Peripheral Clock 11 Enable  */
    using PID12  = regbits< type, 12,  1 >;  /**< Peripheral Clock 12 Enable  */
    using PID13  = regbits< type, 13,  1 >;  /**< Peripheral Clock 13 Enable  */
    using PID14  = regbits< type, 14,  1 >;  /**< Peripheral Clock 14 Enable  */
    using PID15  = regbits< type, 15,  1 >;  /**< Peripheral Clock 15 Enable  */
    using PID16  = regbits< type, 16,  1 >;  /**< Peripheral Clock 16 Enable  */
    using PID17  = regbits< type, 17,  1 >;  /**< Peripheral Clock 17 Enable  */
    using PID18  = regbits< type, 18,  1 >;  /**< Peripheral Clock 18 Enable  */
    using PID19  = regbits< type, 19,  1 >;  /**< Peripheral Clock 19 Enable  */
    using PID20  = regbits< type, 20,  1 >;  /**< Peripheral Clock 20 Enable  */
    using PID21  = regbits< type, 21,  1 >;  /**< Peripheral Clock 21 Enable  */
    using PID22  = regbits< type, 22,  1 >;  /**< Peripheral Clock 22 Enable  */
    using PID23  = regbits< type, 23,  1 >;  /**< Peripheral Clock 23 Enable  */
    using PID24  = regbits< type, 24,  1 >;  /**< Peripheral Clock 24 Enable  */
    using PID25  = regbits< type, 25,  1 >;  /**< Peripheral Clock 25 Enable  */
    using PID26  = regbits< type, 26,  1 >;  /**< Peripheral Clock 26 Enable  */
    using PID27  = regbits< type, 27,  1 >;  /**< Peripheral Clock 27 Enable  */
    using PID28  = regbits< type, 28,  1 >;  /**< Peripheral Clock 28 Enable  */
    using PID29  = regbits< type, 29,  1 >;  /**< Peripheral Clock 29 Enable  */
    using PID30  = regbits< type, 30,  1 >;  /**< Peripheral Clock 30 Enable  */
    using PID31  = regbits< type, 31,  1 >;  /**< Peripheral Clock 31 Enable  */
  };

  /**
   * Peripheral Clock Disable Register
   */
  struct PMC_PCDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using PID2   = regbits< type,  2,  1 >;  /**< Peripheral Clock 2 Disable   */
    using PID3   = regbits< type,  3,  1 >;  /**< Peripheral Clock 3 Disable   */
    using PID4   = regbits< type,  4,  1 >;  /**< Peripheral Clock 4 Disable   */
    using PID5   = regbits< type,  5,  1 >;  /**< Peripheral Clock 5 Disable   */
    using PID6   = regbits< type,  6,  1 >;  /**< Peripheral Clock 6 Disable   */
    using PID7   = regbits< type,  7,  1 >;  /**< Peripheral Clock 7 Disable   */
    using PID8   = regbits< type,  8,  1 >;  /**< Peripheral Clock 8 Disable   */
    using PID9   = regbits< type,  9,  1 >;  /**< Peripheral Clock 9 Disable   */
    using PID10  = regbits< type, 10,  1 >;  /**< Peripheral Clock 10 Disable  */
    using PID11  = regbits< type, 11,  1 >;  /**< Peripheral Clock 11 Disable  */
    using PID12  = regbits< type, 12,  1 >;  /**< Peripheral Clock 12 Disable  */
    using PID13  = regbits< type, 13,  1 >;  /**< Peripheral Clock 13 Disable  */
    using PID14  = regbits< type, 14,  1 >;  /**< Peripheral Clock 14 Disable  */
    using PID15  = regbits< type, 15,  1 >;  /**< Peripheral Clock 15 Disable  */
    using PID16  = regbits< type, 16,  1 >;  /**< Peripheral Clock 16 Disable  */
    using PID17  = regbits< type, 17,  1 >;  /**< Peripheral Clock 17 Disable  */
    using PID18  = regbits< type, 18,  1 >;  /**< Peripheral Clock 18 Disable  */
    using PID19  = regbits< type, 19,  1 >;  /**< Peripheral Clock 19 Disable  */
    using PID20  = regbits< type, 20,  1 >;  /**< Peripheral Clock 20 Disable  */
    using PID21  = regbits< type, 21,  1 >;  /**< Peripheral Clock 21 Disable  */
    using PID22  = regbits< type, 22,  1 >;  /**< Peripheral Clock 22 Disable  */
    using PID23  = regbits< type, 23,  1 >;  /**< Peripheral Clock 23 Disable  */
    using PID24  = regbits< type, 24,  1 >;  /**< Peripheral Clock 24 Disable  */
    using PID25  = regbits< type, 25,  1 >;  /**< Peripheral Clock 25 Disable  */
    using PID26  = regbits< type, 26,  1 >;  /**< Peripheral Clock 26 Disable  */
    using PID27  = regbits< type, 27,  1 >;  /**< Peripheral Clock 27 Disable  */
    using PID28  = regbits< type, 28,  1 >;  /**< Peripheral Clock 28 Disable  */
    using PID29  = regbits< type, 29,  1 >;  /**< Peripheral Clock 29 Disable  */
    using PID30  = regbits< type, 30,  1 >;  /**< Peripheral Clock 30 Disable  */
    using PID31  = regbits< type, 31,  1 >;  /**< Peripheral Clock 31 Disable  */
  };

  /**
   * Peripheral Clock Status Register
   */
  struct PMC_PCSR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using PID2   = regbits< type,  2,  1 >;  /**< Peripheral Clock 2 Status   */
    using PID3   = regbits< type,  3,  1 >;  /**< Peripheral Clock 3 Status   */
    using PID4   = regbits< type,  4,  1 >;  /**< Peripheral Clock 4 Status   */
    using PID5   = regbits< type,  5,  1 >;  /**< Peripheral Clock 5 Status   */
    using PID6   = regbits< type,  6,  1 >;  /**< Peripheral Clock 6 Status   */
    using PID7   = regbits< type,  7,  1 >;  /**< Peripheral Clock 7 Status   */
    using PID8   = regbits< type,  8,  1 >;  /**< Peripheral Clock 8 Status   */
    using PID9   = regbits< type,  9,  1 >;  /**< Peripheral Clock 9 Status   */
    using PID10  = regbits< type, 10,  1 >;  /**< Peripheral Clock 10 Status  */
    using PID11  = regbits< type, 11,  1 >;  /**< Peripheral Clock 11 Status  */
    using PID12  = regbits< type, 12,  1 >;  /**< Peripheral Clock 12 Status  */
    using PID13  = regbits< type, 13,  1 >;  /**< Peripheral Clock 13 Status  */
    using PID14  = regbits< type, 14,  1 >;  /**< Peripheral Clock 14 Status  */
    using PID15  = regbits< type, 15,  1 >;  /**< Peripheral Clock 15 Status  */
    using PID16  = regbits< type, 16,  1 >;  /**< Peripheral Clock 16 Status  */
    using PID17  = regbits< type, 17,  1 >;  /**< Peripheral Clock 17 Status  */
    using PID18  = regbits< type, 18,  1 >;  /**< Peripheral Clock 18 Status  */
    using PID19  = regbits< type, 19,  1 >;  /**< Peripheral Clock 19 Status  */
    using PID20  = regbits< type, 20,  1 >;  /**< Peripheral Clock 20 Status  */
    using PID21  = regbits< type, 21,  1 >;  /**< Peripheral Clock 21 Status  */
    using PID22  = regbits< type, 22,  1 >;  /**< Peripheral Clock 22 Status  */
    using PID23  = regbits< type, 23,  1 >;  /**< Peripheral Clock 23 Status  */
    using PID24  = regbits< type, 24,  1 >;  /**< Peripheral Clock 24 Status  */
    using PID25  = regbits< type, 25,  1 >;  /**< Peripheral Clock 25 Status  */
    using PID26  = regbits< type, 26,  1 >;  /**< Peripheral Clock 26 Status  */
    using PID27  = regbits< type, 27,  1 >;  /**< Peripheral Clock 27 Status  */
    using PID28  = regbits< type, 28,  1 >;  /**< Peripheral Clock 28 Status  */
    using PID29  = regbits< type, 29,  1 >;  /**< Peripheral Clock 29 Status  */
    using PID30  = regbits< type, 30,  1 >;  /**< Peripheral Clock 30 Status  */
    using PID31  = regbits< type, 31,  1 >;  /**< Peripheral Clock 31 Status  */
  };

  /**
   * UTMI Clock Register
   */
  struct CKGR_UCKR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x10200800 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x10200800 >;

    using UPLLEN     = regbits< type, 16,  1 >;  /**< UTMI PLL Enable          */
    using PLLCOUNT   = regbits< type, 20,  4 >;  /**< UTMI PLL Start-up Time   */
    using BIASEN     = regbits< type, 24,  1 >;  /**< UTMI BIAS Enable         */
    using BIASCOUNT  = regbits< type, 28,  4 >;  /**< UTMI BIAS Start-up Time  */
  };

  /**
   * Main Oscillator Register
   */
  struct CKGR_MOR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using MOSCEN     = regbits< type,  0,  1 >;  /**< Main Oscillator Enable         */
    using OSCBYPASS  = regbits< type,  1,  1 >;  /**< Oscillator Bypass              */
    using OSCOUNT    = regbits< type,  8,  8 >;  /**< Main Oscillator Start-up Time  */
  };

  /**
   * Main Clock Frequency Register
   */
  struct CKGR_MCFR
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >;

    using MAINF    = regbits< type,  0, 16 >;  /**< Main Clock Frequency  */
    using MAINRDY  = regbits< type, 16,  1 >;  /**< Main Clock Ready      */
  };

  /**
   * PLLA Register
   */
  struct CKGR_PLLAR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00003F00 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00003F00 >;

    using DIVA       = regbits< type,  0,  8 >;  /**< Divider A                   */
    using PLLACOUNT  = regbits< type,  8,  6 >;  /**< PLLA Counter                */
    using OUTA       = regbits< type, 14,  2 >;  /**< PLLA Clock Frequency Range  */
    using MULA       = regbits< type, 16,  8 >;  /**< PLLA Multiplier             */
    using STUCKTO1   = regbits< type, 29,  1 >;
  };

  /**
   * Master Clock Register
   */
  struct PMC_MCKR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x00000000 >;

    using CSS       = regbits< type,  0,  2 >;  /**< Master/Processor Clock Source Selection  */
    using PRES      = regbits< type,  2,  3 >;  /**< Master/Processor Clock Prescaler         */
    using MDIV      = regbits< type,  8,  2 >;  /**< Master Clock Division                    */
    using PLLADIV2  = regbits< type, 12,  1 >;  /**< PLLA divisor by 2                        */
  };

  /**
   * USB Clock Register
   */
  struct PMC_USB
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >;

    using USBS    = regbits< type,  0,  1 >;  /**< USB OHCI Input clock selection  */
    using USBDIV  = regbits< type,  8,  4 >;  /**< Divider for USB OHCI Clock.     */
  };

  /**
   * Programmable Clock 0 Register
   */
  struct PMC_PCK[%s]
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CSS      = regbits< type,  0,  2 >;  /**< Master Clock Selection                */
    using PRES     = regbits< type,  2,  3 >;  /**< Programmable Clock Prescaler          */
    using SLCKMCK  = regbits< type,  8,  1 >;  /**< Slow Clock or Master Clock Selection  */
  };

  /**
   * Interrupt Enable Register
   */
  struct PMC_IER
  : public reg< uint32_t, base_addr + 0x00000060, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, wo, 0 >;

    using MOSCS    = regbits< type,  0,  1 >;  /**< Main Oscillator Status Interrupt Enable      */
    using LOCKA    = regbits< type,  1,  1 >;  /**< PLL Lock Interrupt Enable                    */
    using MCKRDY   = regbits< type,  3,  1 >;  /**< Master Clock Ready Interrupt Enable          */
    using LOCKU    = regbits< type,  6,  1 >;  /**< UTMI PLL Lock Interrupt Enable               */
    using PCKRDY0  = regbits< type,  8,  1 >;  /**< Programmable Clock Ready 0 Interrupt Enable  */
    using PCKRDY1  = regbits< type,  9,  1 >;  /**< Programmable Clock Ready 1 Interrupt Enable  */
  };

  /**
   * Interrupt Disable Register
   */
  struct PMC_IDR
  : public reg< uint32_t, base_addr + 0x00000064, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, wo, 0 >;

    using MOSCS    = regbits< type,  0,  1 >;  /**< Main Oscillator Status Interrupt Disable      */
    using LOCKA    = regbits< type,  1,  1 >;  /**< PLLA Lock Interrupt Disable                   */
    using MCKRDY   = regbits< type,  3,  1 >;  /**< Master Clock Ready Interrupt Disable          */
    using LOCKU    = regbits< type,  6,  1 >;  /**< UTMI PLL Lock Interrupt Disable               */
    using PCKRDY0  = regbits< type,  8,  1 >;  /**< Programmable Clock Ready 0 Interrupt Disable  */
    using PCKRDY1  = regbits< type,  9,  1 >;  /**< Programmable Clock Ready 1 Interrupt Disable  */
  };

  /**
   * Status Register
   */
  struct PMC_SR
  : public reg< uint32_t, base_addr + 0x00000068, ro, 0x00000008 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, ro, 0x00000008 >;

    using MOSCS    = regbits< type,  0,  1 >;  /**< MOSCS Flag Status                */
    using LOCKA    = regbits< type,  1,  1 >;  /**< PLLA Lock Status                 */
    using MCKRDY   = regbits< type,  3,  1 >;  /**< Master Clock Status              */
    using LOCKU    = regbits< type,  6,  1 >;  /**< UPLL Lock Status                 */
    using PCKRDY0  = regbits< type,  8,  1 >;  /**< Programmable Clock Ready Status  */
    using PCKRDY1  = regbits< type,  9,  1 >;  /**< Programmable Clock Ready Status  */
  };

  /**
   * Interrupt Mask Register
   */
  struct PMC_IMR
  : public reg< uint32_t, base_addr + 0x0000006c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, ro, 0x00000000 >;

    using MOSCS    = regbits< type,  0,  1 >;  /**< Main Oscillator Status Interrupt Mask      */
    using LOCKA    = regbits< type,  1,  1 >;  /**< PLLA Lock Interrupt Mask                   */
    using MCKRDY   = regbits< type,  3,  1 >;  /**< Master Clock Ready Interrupt Mask          */
    using LOCKU    = regbits< type,  6,  1 >;  /**< UTMI PLL Lock Interrupt Mask               */
    using PCKRDY0  = regbits< type,  8,  1 >;  /**< Programmable Clock Ready 0 Interrupt Mask  */
    using PCKRDY1  = regbits< type,  9,  1 >;  /**< Programmable Clock Ready 1 Interrupt Mask  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMC_HPP_INCLUDED
