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

#ifndef ARCH_REG_SMC_HPP_INCLUDED
#define ARCH_REG_SMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Static Memory Controller
 */
struct SMC
{
  static constexpr reg_addr_t base_addr = 0xffffe800;

  /**
   * SMC Setup Register (CS_number = 0)
   */
  struct SETUP0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 0)
   */
  struct PULSE0
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 0)
   */
  struct CYCLE0
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 0)
   */
  struct MODE0
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x10001000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x10001000 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type   */
    using DBW         = regbits< type, 12,  2 >;  /**< Data Bus Width     */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Setup Register (CS_number = 1)
   */
  struct SETUP1
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 1)
   */
  struct PULSE1
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 1)
   */
  struct CYCLE1
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 1)
   */
  struct MODE1
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x10001000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x10001000 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type   */
    using DBW         = regbits< type, 12,  2 >;  /**< Data Bus Width     */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Setup Register (CS_number = 2)
   */
  struct SETUP2
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 2)
   */
  struct PULSE2
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 2)
   */
  struct CYCLE2
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 2)
   */
  struct MODE2
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x10001000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x10001000 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type   */
    using DBW         = regbits< type, 12,  2 >;  /**< Data Bus Width     */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Setup Register (CS_number = 3)
   */
  struct SETUP3
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 3)
   */
  struct PULSE3
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 3)
   */
  struct CYCLE3
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 3)
   */
  struct MODE3
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x10001000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x10001000 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type   */
    using DBW         = regbits< type, 12,  2 >;  /**< Data Bus Width     */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Setup Register (CS_number = 4)
   */
  struct SETUP4
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 4)
   */
  struct PULSE4
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 4)
   */
  struct CYCLE4
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 4)
   */
  struct MODE4
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x10001000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x10001000 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type   */
    using DBW         = regbits< type, 12,  2 >;  /**< Data Bus Width     */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Setup Register (CS_number = 5)
   */
  struct SETUP5
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 5)
   */
  struct PULSE5
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 5)
   */
  struct CYCLE5
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 5)
   */
  struct MODE5
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0x10001000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0x10001000 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type   */
    using DBW         = regbits< type, 12,  2 >;  /**< Data Bus Width     */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Delay on I/O
   */
  struct DELAY1
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >;

    using Delay1  = regbits< type,  0,  4 >;
    using Delay2  = regbits< type,  4,  4 >;
    using Delay3  = regbits< type,  8,  4 >;
    using Delay4  = regbits< type, 12,  4 >;
    using Delay5  = regbits< type, 16,  4 >;
    using Delay6  = regbits< type, 20,  4 >;
    using Delay7  = regbits< type, 24,  4 >;
    using Delay8  = regbits< type, 28,  4 >;
  };

  /**
   * SMC Delay on I/O
   */
  struct DELAY2
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >
  {
  };

  /**
   * SMC Delay on I/O
   */
  struct DELAY3
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0x00000000 >
  {
  };

  /**
   * SMC Delay on I/O
   */
  struct DELAY4
  : public reg< uint32_t, base_addr + 0x000000cc, rw, 0x00000000 >
  {
  };

  /**
   * SMC Delay on I/O
   */
  struct DELAY5
  : public reg< uint32_t, base_addr + 0x000000d0, rw, 0x00000000 >
  {
  };

  /**
   * SMC Delay on I/O
   */
  struct DELAY6
  : public reg< uint32_t, base_addr + 0x000000d4, rw, 0x00000000 >
  {
  };

  /**
   * SMC Delay on I/O
   */
  struct DELAY7
  : public reg< uint32_t, base_addr + 0x000000d8, rw, 0x00000000 >
  {
  };

  /**
   * SMC Delay on I/O
   */
  struct DELAY8
  : public reg< uint32_t, base_addr + 0x000000dc, rw, 0x00000000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_SMC_HPP_INCLUDED
