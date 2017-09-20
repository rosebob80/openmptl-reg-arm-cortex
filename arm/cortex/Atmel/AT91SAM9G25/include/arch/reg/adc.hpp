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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G25.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G25
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G25 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Ethernet, HS USB, LPDDR/DDR2/MLC NAND support, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G25.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC_HPP_INCLUDED
#define ARCH_REG_ADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog-to-Digital Converter
 */
struct ADC
{
  static constexpr reg_addr_t base_addr = 0xf804c000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using SWRST  = regbits< type,  0,  1 >;  /**< Software Reset    */
    using START  = regbits< type,  1,  1 >;  /**< Start Conversion  */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using LOWRES    = regbits< type,  4,  1 >;  /**< Resolution                */
    using SLEEP     = regbits< type,  5,  1 >;  /**< Sleep Mode                */
    using FWUP      = regbits< type,  6,  1 >;  /**< Fast Wake Up              */
    using PRESCAL   = regbits< type,  8,  8 >;  /**< Prescaler Rate Selection  */
    using STARTUP   = regbits< type, 16,  4 >;  /**< Start Up Time             */
    using TRACKTIM  = regbits< type, 24,  4 >;  /**< Tracking Time             */
    using USEQ      = regbits< type, 31,  1 >;  /**< Use Sequence Enable       */
  };

  /**
   * Channel Sequence Register 1
   */
  struct SEQR1
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using USCH1  = regbits< type,  0,  4 >;  /**< User Sequence Number 1  */
    using USCH2  = regbits< type,  4,  4 >;  /**< User Sequence Number 2  */
    using USCH3  = regbits< type,  8,  4 >;  /**< User Sequence Number 3  */
    using USCH4  = regbits< type, 12,  4 >;  /**< User Sequence Number 4  */
    using USCH5  = regbits< type, 16,  4 >;  /**< User Sequence Number 5  */
    using USCH6  = regbits< type, 20,  4 >;  /**< User Sequence Number 6  */
    using USCH7  = regbits< type, 24,  4 >;  /**< User Sequence Number 7  */
    using USCH8  = regbits< type, 28,  4 >;  /**< User Sequence Number 8  */
  };

  /**
   * Channel Sequence Register 2
   */
  struct SEQR2
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using USCH9   = regbits< type,  0,  4 >;  /**< User Sequence Number 9   */
    using USCH10  = regbits< type,  4,  4 >;  /**< User Sequence Number 10  */
    using USCH11  = regbits< type,  8,  4 >;  /**< User Sequence Number 11  */
    using USCH12  = regbits< type, 12,  4 >;  /**< User Sequence Number 12  */
    using USCH13  = regbits< type, 16,  4 >;  /**< User Sequence Number 13  */
    using USCH14  = regbits< type, 20,  4 >;  /**< User Sequence Number 14  */
    using USCH15  = regbits< type, 24,  4 >;  /**< User Sequence Number 15  */
    using USCH16  = regbits< type, 28,  4 >;  /**< User Sequence Number 16  */
  };

  /**
   * Channel Enable Register
   */
  struct CHER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using CH0   = regbits< type,  0,  1 >;  /**< Channel 0 Enable   */
    using CH1   = regbits< type,  1,  1 >;  /**< Channel 1 Enable   */
    using CH2   = regbits< type,  2,  1 >;  /**< Channel 2 Enable   */
    using CH3   = regbits< type,  3,  1 >;  /**< Channel 3 Enable   */
    using CH4   = regbits< type,  4,  1 >;  /**< Channel 4 Enable   */
    using CH5   = regbits< type,  5,  1 >;  /**< Channel 5 Enable   */
    using CH6   = regbits< type,  6,  1 >;  /**< Channel 6 Enable   */
    using CH7   = regbits< type,  7,  1 >;  /**< Channel 7 Enable   */
    using CH8   = regbits< type,  8,  1 >;  /**< Channel 8 Enable   */
    using CH9   = regbits< type,  9,  1 >;  /**< Channel 9 Enable   */
    using CH10  = regbits< type, 10,  1 >;  /**< Channel 10 Enable  */
    using CH11  = regbits< type, 11,  1 >;  /**< Channel 11 Enable  */
  };

  /**
   * Channel Disable Register
   */
  struct CHDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CH0   = regbits< type,  0,  1 >;  /**< Channel 0 Disable   */
    using CH1   = regbits< type,  1,  1 >;  /**< Channel 1 Disable   */
    using CH2   = regbits< type,  2,  1 >;  /**< Channel 2 Disable   */
    using CH3   = regbits< type,  3,  1 >;  /**< Channel 3 Disable   */
    using CH4   = regbits< type,  4,  1 >;  /**< Channel 4 Disable   */
    using CH5   = regbits< type,  5,  1 >;  /**< Channel 5 Disable   */
    using CH6   = regbits< type,  6,  1 >;  /**< Channel 6 Disable   */
    using CH7   = regbits< type,  7,  1 >;  /**< Channel 7 Disable   */
    using CH8   = regbits< type,  8,  1 >;  /**< Channel 8 Disable   */
    using CH9   = regbits< type,  9,  1 >;  /**< Channel 9 Disable   */
    using CH10  = regbits< type, 10,  1 >;  /**< Channel 10 Disable  */
    using CH11  = regbits< type, 11,  1 >;  /**< Channel 11 Disable  */
  };

  /**
   * Channel Status Register
   */
  struct CHSR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using CH0   = regbits< type,  0,  1 >;  /**< Channel 0 Status   */
    using CH1   = regbits< type,  1,  1 >;  /**< Channel 1 Status   */
    using CH2   = regbits< type,  2,  1 >;  /**< Channel 2 Status   */
    using CH3   = regbits< type,  3,  1 >;  /**< Channel 3 Status   */
    using CH4   = regbits< type,  4,  1 >;  /**< Channel 4 Status   */
    using CH5   = regbits< type,  5,  1 >;  /**< Channel 5 Status   */
    using CH6   = regbits< type,  6,  1 >;  /**< Channel 6 Status   */
    using CH7   = regbits< type,  7,  1 >;  /**< Channel 7 Status   */
    using CH8   = regbits< type,  8,  1 >;  /**< Channel 8 Status   */
    using CH9   = regbits< type,  9,  1 >;  /**< Channel 9 Status   */
    using CH10  = regbits< type, 10,  1 >;  /**< Channel 10 Status  */
    using CH11  = regbits< type, 11,  1 >;  /**< Channel 11 Status  */
  };

  /**
   * Last Converted Data Register
   */
  struct LCDR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using LDATA  = regbits< type,  0, 12 >;  /**< Last Data Converted  */
    using CHNB   = regbits< type, 12,  4 >;  /**< Channel Number       */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using EOC0   = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Enable 0    */
    using EOC1   = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Enable 1    */
    using EOC2   = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Enable 2    */
    using EOC3   = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Enable 3    */
    using EOC4   = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Enable 4    */
    using EOC5   = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Enable 5    */
    using EOC6   = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Enable 6    */
    using EOC7   = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Enable 7    */
    using EOC8   = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Enable 8    */
    using EOC9   = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Enable 9    */
    using EOC10  = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Enable 10   */
    using EOC11  = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Enable 11   */
    using DRDY   = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Enable             */
    using GOVRE  = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Enable  */
    using COMPE  = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Enable       */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using EOC0   = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Disable 0    */
    using EOC1   = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Disable 1    */
    using EOC2   = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Disable 2    */
    using EOC3   = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Disable 3    */
    using EOC4   = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Disable 4    */
    using EOC5   = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Disable 5    */
    using EOC6   = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Disable 6    */
    using EOC7   = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Disable 7    */
    using EOC8   = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Disable 8    */
    using EOC9   = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Disable 9    */
    using EOC10  = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Disable 10   */
    using EOC11  = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Disable 11   */
    using DRDY   = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Disable             */
    using GOVRE  = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Disable  */
    using COMPE  = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Disable       */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using EOC0   = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Mask 0    */
    using EOC1   = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Mask 1    */
    using EOC2   = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Mask 2    */
    using EOC3   = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Mask 3    */
    using EOC4   = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Mask 4    */
    using EOC5   = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Mask 5    */
    using EOC6   = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Mask 6    */
    using EOC7   = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Mask 7    */
    using EOC8   = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Mask 8    */
    using EOC9   = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Mask 9    */
    using EOC10  = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Mask 10   */
    using EOC11  = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Mask 11   */
    using DRDY   = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Mask             */
    using GOVRE  = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Mask  */
    using COMPE  = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Mask       */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using EOC0   = regbits< type,  0,  1 >;  /**< End of Conversion 0    */
    using EOC1   = regbits< type,  1,  1 >;  /**< End of Conversion 1    */
    using EOC2   = regbits< type,  2,  1 >;  /**< End of Conversion 2    */
    using EOC3   = regbits< type,  3,  1 >;  /**< End of Conversion 3    */
    using EOC4   = regbits< type,  4,  1 >;  /**< End of Conversion 4    */
    using EOC5   = regbits< type,  5,  1 >;  /**< End of Conversion 5    */
    using EOC6   = regbits< type,  6,  1 >;  /**< End of Conversion 6    */
    using EOC7   = regbits< type,  7,  1 >;  /**< End of Conversion 7    */
    using EOC8   = regbits< type,  8,  1 >;  /**< End of Conversion 8    */
    using EOC9   = regbits< type,  9,  1 >;  /**< End of Conversion 9    */
    using EOC10  = regbits< type, 10,  1 >;  /**< End of Conversion 10   */
    using EOC11  = regbits< type, 11,  1 >;  /**< End of Conversion 11   */
    using DRDY   = regbits< type, 24,  1 >;  /**< Data Ready             */
    using GOVRE  = regbits< type, 25,  1 >;  /**< General Overrun Error  */
    using COMPE  = regbits< type, 26,  1 >;  /**< Comparison Error       */
  };

  /**
   * Overrun Status Register
   */
  struct OVER
  : public reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >;

    using OVRE0   = regbits< type,  0,  1 >;  /**< Overrun Error 0   */
    using OVRE1   = regbits< type,  1,  1 >;  /**< Overrun Error 1   */
    using OVRE2   = regbits< type,  2,  1 >;  /**< Overrun Error 2   */
    using OVRE3   = regbits< type,  3,  1 >;  /**< Overrun Error 3   */
    using OVRE4   = regbits< type,  4,  1 >;  /**< Overrun Error 4   */
    using OVRE5   = regbits< type,  5,  1 >;  /**< Overrun Error 5   */
    using OVRE6   = regbits< type,  6,  1 >;  /**< Overrun Error 6   */
    using OVRE7   = regbits< type,  7,  1 >;  /**< Overrun Error 7   */
    using OVRE8   = regbits< type,  8,  1 >;  /**< Overrun Error 8   */
    using OVRE9   = regbits< type,  9,  1 >;  /**< Overrun Error 9   */
    using OVRE10  = regbits< type, 10,  1 >;  /**< Overrun Error 10  */
    using OVRE11  = regbits< type, 11,  1 >;  /**< Overrun Error 11  */
  };

  /**
   * Extended Mode Register
   */
  struct EMR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    using CMPMODE    = regbits< type,  0,  2 >;  /**< Comparison Mode               */
    using CMPSEL     = regbits< type,  4,  4 >;  /**< Comparison Selected Channel   */
    using CMPALL     = regbits< type,  9,  1 >;  /**< Compare All Channels          */
    using CMPFILTER  = regbits< type, 12,  2 >;  /**< Compare Event Filtering       */
    using TAG        = regbits< type, 24,  1 >;  /**< TAG of the ADC_LDCR register  */
  };

  /**
   * Compare Window Register
   */
  struct CWR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using LOWTHRES   = regbits< type,  0, 12 >;  /**< Low Threshold   */
    using HIGHTHRES  = regbits< type, 16, 12 >;  /**< High Threshold  */
  };

  /**
   * Channel Data Register
   */
  struct CDR[%s]
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA  = regbits< type,  0, 12 >;  /**< Converted Data  */
  };

  /**
   * Trigger Register
   */
  struct TRGR
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >;

    using TRGMOD  = regbits< type,  0,  3 >;  /**< Trigger Mode    */
    using TRGPER  = regbits< type, 16, 16 >;  /**< Trigger Period  */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
