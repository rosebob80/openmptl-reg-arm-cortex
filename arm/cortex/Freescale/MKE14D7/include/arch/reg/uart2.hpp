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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UART2_HPP_INCLUDED
#define ARCH_REG_UART2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial Communication Interface
 */
struct UART2
{
  static constexpr reg_addr_t base_addr = 0x4004b000;

  /**
   * UART Baud Rate Registers: High
   */
  struct BDH
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using SBR       = regbits< type,  0,  5 >;  /**< UART Baud Rate Bits                               */
    using RESERVED  = regbits< type,  5,  1 >;  /**< no description available                          */
    using RXEDGIE   = regbits< type,  6,  1 >;  /**< RxD Input Active Edge Interrupt Enable            */
    using LBKDIE    = regbits< type,  7,  1 >;  /**< LIN Break Detect Interrupt or DMA Request Enable  */
  };

  /**
   * UART Baud Rate Registers: Low
   */
  struct BDL
  : public reg< uint8_t, base_addr + 0x1, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x4 >;

    using SBR  = regbits< type,  0,  8 >;  /**< UART Baud Rate Bits  */
  };

  /**
   * UART Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using PT        = regbits< type,  0,  1 >;  /**< Parity Type                    */
    using PE        = regbits< type,  1,  1 >;  /**< Parity Enable                  */
    using ILT       = regbits< type,  2,  1 >;  /**< Idle Line Type Select          */
    using WAKE      = regbits< type,  3,  1 >;  /**< Receiver Wakeup Method Select  */
    using M         = regbits< type,  4,  1 >;  /**< 9-bit or 8-bit Mode Select     */
    using RSRC      = regbits< type,  5,  1 >;  /**< Receiver Source Select         */
    using UARTSWAI  = regbits< type,  6,  1 >;  /**< UART Stops in Wait Mode        */
    using LOOPS     = regbits< type,  7,  1 >;  /**< Loop Mode Select               */
  };

  /**
   * UART Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using SBK   = regbits< type,  0,  1 >;  /**< Send Break                                              */
    using RWU   = regbits< type,  1,  1 >;  /**< Receiver Wakeup Control                                 */
    using RE    = regbits< type,  2,  1 >;  /**< Receiver Enable                                         */
    using TE    = regbits< type,  3,  1 >;  /**< Transmitter Enable                                      */
    using ILIE  = regbits< type,  4,  1 >;  /**< Idle Line Interrupt DMA Transfer Enable                 */
    using RIE   = regbits< type,  5,  1 >;  /**< Receiver Full Interrupt or DMA Transfer Enable          */
    using TCIE  = regbits< type,  6,  1 >;  /**< Transmission Complete Interrupt or DMA Transfer Enable  */
    using TIE   = regbits< type,  7,  1 >;  /**< Transmitter Interrupt or DMA Transfer Enable.           */
  };

  /**
   * UART Status Register 1
   */
  struct S1
  : public reg< uint8_t, base_addr + 0x4, ro, 0xC0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0xC0 >;

    using PF    = regbits< type,  0,  1 >;  /**< Parity Error Flag                  */
    using FE    = regbits< type,  1,  1 >;  /**< Framing Error Flag                 */
    using NF    = regbits< type,  2,  1 >;  /**< Noise Flag                         */
    using OR    = regbits< type,  3,  1 >;  /**< Receiver Overrun Flag              */
    using IDLE  = regbits< type,  4,  1 >;  /**< Idle Line Flag                     */
    using RDRF  = regbits< type,  5,  1 >;  /**< Receive Data Register Full Flag    */
    using TC    = regbits< type,  6,  1 >;  /**< Transmit Complete Flag             */
    using TDRE  = regbits< type,  7,  1 >;  /**< Transmit Data Register Empty Flag  */
  };

  /**
   * UART Status Register 2
   */
  struct S2
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using RAF      = regbits< type,  0,  1 >;  /**< Receiver Active Flag                */
    using LBKDE    = regbits< type,  1,  1 >;  /**< LIN Break Detection Enable          */
    using BRK13    = regbits< type,  2,  1 >;  /**< Break Transmit Character Length     */
    using RWUID    = regbits< type,  3,  1 >;  /**< Receive Wakeup Idle Detect          */
    using RXINV    = regbits< type,  4,  1 >;  /**< Receive Data Inversion              */
    using MSBF     = regbits< type,  5,  1 >;  /**< Most Significant Bit First          */
    using RXEDGIF  = regbits< type,  6,  1 >;  /**< RxD Pin Active Edge Interrupt Flag  */
    using LBKDIF   = regbits< type,  7,  1 >;  /**< LIN Break Detect Interrupt Flag     */
  };

  /**
   * UART Control Register 3
   */
  struct C3
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using PEIE   = regbits< type,  0,  1 >;  /**< Parity Error Interrupt Enable                       */
    using FEIE   = regbits< type,  1,  1 >;  /**< Framing Error Interrupt Enable                      */
    using NEIE   = regbits< type,  2,  1 >;  /**< Noise Error Interrupt Enable                        */
    using ORIE   = regbits< type,  3,  1 >;  /**< Overrun Error Interrupt Enable                      */
    using TXINV  = regbits< type,  4,  1 >;  /**< Transmit Data Inversion.                            */
    using TXDIR  = regbits< type,  5,  1 >;  /**< Transmitter Pin Data Direction in Single-Wire mode  */
    using T8     = regbits< type,  6,  1 >;  /**< Transmit Bit 8                                      */
    using R8     = regbits< type,  7,  1 >;  /**< Received Bit 8                                      */
  };

  /**
   * UART Data Register
   */
  struct D
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using RT  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * UART Match Address Registers 1
   */
  struct MA1
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using MA  = regbits< type,  0,  8 >;  /**< Match Address  */
  };

  /**
   * UART Match Address Registers 2
   */
  struct MA2
  : public reg< uint8_t, base_addr + 0x9, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0 >;

    using MA  = regbits< type,  0,  8 >;  /**< Match Address  */
  };

  /**
   * UART Control Register 4
   */
  struct C4
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

    using BRFA   = regbits< type,  0,  5 >;  /**< Baud Rate Fine Adjust        */
    using M10    = regbits< type,  5,  1 >;  /**< 10-bit Mode select           */
    using MAEN2  = regbits< type,  6,  1 >;  /**< Match Address Mode Enable 2  */
    using MAEN1  = regbits< type,  7,  1 >;  /**< Match Address Mode Enable 1  */
  };

  /**
   * UART Control Register 5
   */
  struct C5
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using RESERVED  = regbits< type,  0,  3 >;  /**< no description available          */
    using LBKDDMAS  = regbits< type,  3,  1 >;  /**< LIN Break Detect DMA Select Bit   */
    using ILDMAS    = regbits< type,  4,  1 >;  /**< Idle Line DMA Select              */
    using RDMAS     = regbits< type,  5,  1 >;  /**< Receiver Full DMA Select          */
    using TCDMAS    = regbits< type,  6,  1 >;  /**< Transmission Complete DMA Select  */
    using TDMAS     = regbits< type,  7,  1 >;  /**< Transmitter DMA Select            */
  };

  /**
   * UART Modem Register
   */
  struct MODEM
  : public reg< uint8_t, base_addr + 0xd, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xd, rw, 0 >;

    using TXCTSE    = regbits< type,  0,  1 >;  /**< Transmitter clear-to-send enable      */
    using TXRTSE    = regbits< type,  1,  1 >;  /**< Transmitter request-to-send enable    */
    using TXRTSPOL  = regbits< type,  2,  1 >;  /**< Transmitter request-to-send polarity  */
    using RXRTSE    = regbits< type,  3,  1 >;  /**< Receiver request-to-send enable       */
    using RESERVED  = regbits< type,  4,  4 >;  /**< no description available              */
  };

  /**
   * UART Infrared Register
   */
  struct IR
  : public reg< uint8_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xe, rw, 0 >;

    using TNP       = regbits< type,  0,  2 >;  /**< Transmitter narrow pulse  */
    using IREN      = regbits< type,  2,  1 >;  /**< Infrared enable           */
    using RESERVED  = regbits< type,  3,  5 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART2_HPP_INCLUDED
