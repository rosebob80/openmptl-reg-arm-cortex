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
//  Import from CMSIS-SVD: "STMicro/STM32F21x.svd"
//
//  name: STM32F21x
//  version: 1.0
//  description: STM32F21x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TIM8_HPP_INCLUDED
#define ARCH_REG_TIM8_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Advanced-timers
 *
 * (derived from: TIM1)
 */
struct TIM8
{
  static constexpr reg_addr_t base_addr = 0x40010400;

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using CKD   = regbits< type,  8,  2 >;  /**< Clock division                 */
    using ARPE  = regbits< type,  7,  1 >;  /**< Auto-reload preload enable     */
    using CMS   = regbits< type,  5,  2 >;  /**< Center-aligned mode selection  */
    using DIR   = regbits< type,  4,  1 >;  /**< Direction                      */
    using OPM   = regbits< type,  3,  1 >;  /**< One-pulse mode                 */
    using URS   = regbits< type,  2,  1 >;  /**< Update request source          */
    using UDIS  = regbits< type,  1,  1 >;  /**< Update disable                 */
    using CEN   = regbits< type,  0,  1 >;  /**< Counter enable                 */
  };

  /**
   * control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using OIS4   = regbits< type, 14,  1 >;  /**< Output Idle state 4                       */
    using OIS3N  = regbits< type, 13,  1 >;  /**< Output Idle state 3                       */
    using OIS3   = regbits< type, 12,  1 >;  /**< Output Idle state 3                       */
    using OIS2N  = regbits< type, 11,  1 >;  /**< Output Idle state 2                       */
    using OIS2   = regbits< type, 10,  1 >;  /**< Output Idle state 2                       */
    using OIS1N  = regbits< type,  9,  1 >;  /**< Output Idle state 1                       */
    using OIS1   = regbits< type,  8,  1 >;  /**< Output Idle state 1                       */
    using TI1S   = regbits< type,  7,  1 >;  /**< TI1 selection                             */
    using MMS    = regbits< type,  4,  3 >;  /**< Master mode selection                     */
    using CCDS   = regbits< type,  3,  1 >;  /**< Capture/compare DMA selection             */
    using CCUS   = regbits< type,  2,  1 >;  /**< Capture/compare control update selection  */
    using CCPC   = regbits< type,  0,  1 >;  /**< Capture/compare preloaded control         */
  };

  /**
   * slave mode control register
   */
  struct SMCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using ETP   = regbits< type, 15,  1 >;  /**< External trigger polarity   */
    using ECE   = regbits< type, 14,  1 >;  /**< External clock enable       */
    using ETPS  = regbits< type, 12,  2 >;  /**< External trigger prescaler  */
    using ETF   = regbits< type,  8,  4 >;  /**< External trigger filter     */
    using MSM   = regbits< type,  7,  1 >;  /**< Master/Slave mode           */
    using TS    = regbits< type,  4,  3 >;  /**< Trigger selection           */
    using SMS   = regbits< type,  0,  3 >;  /**< Slave mode selection        */
  };

  /**
   * DMA/Interrupt enable register
   */
  struct DIER
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using TDE    = regbits< type, 14,  1 >;  /**< Trigger DMA request enable            */
    using COMDE  = regbits< type, 13,  1 >;  /**< COM DMA request enable                */
    using CC4DE  = regbits< type, 12,  1 >;  /**< Capture/Compare 4 DMA request enable  */
    using CC3DE  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 DMA request enable  */
    using CC2DE  = regbits< type, 10,  1 >;  /**< Capture/Compare 2 DMA request enable  */
    using CC1DE  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 DMA request enable  */
    using UDE    = regbits< type,  8,  1 >;  /**< Update DMA request enable             */
    using BIE    = regbits< type,  7,  1 >;  /**< Break interrupt enable                */
    using TIE    = regbits< type,  6,  1 >;  /**< Trigger interrupt enable              */
    using COMIE  = regbits< type,  5,  1 >;  /**< COM interrupt enable                  */
    using CC4IE  = regbits< type,  4,  1 >;  /**< Capture/Compare 4 interrupt enable    */
    using CC3IE  = regbits< type,  3,  1 >;  /**< Capture/Compare 3 interrupt enable    */
    using CC2IE  = regbits< type,  2,  1 >;  /**< Capture/Compare 2 interrupt enable    */
    using CC1IE  = regbits< type,  1,  1 >;  /**< Capture/Compare 1 interrupt enable    */
    using UIE    = regbits< type,  0,  1 >;  /**< Update interrupt enable               */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using CC4OF  = regbits< type, 12,  1 >;  /**< Capture/Compare 4 overcapture flag  */
    using CC3OF  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 overcapture flag  */
    using CC2OF  = regbits< type, 10,  1 >;  /**< Capture/compare 2 overcapture flag  */
    using CC1OF  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 overcapture flag  */
    using BIF    = regbits< type,  7,  1 >;  /**< Break interrupt flag                */
    using TIF    = regbits< type,  6,  1 >;  /**< Trigger interrupt flag              */
    using COMIF  = regbits< type,  5,  1 >;  /**< COM interrupt flag                  */
    using CC4IF  = regbits< type,  4,  1 >;  /**< Capture/Compare 4 interrupt flag    */
    using CC3IF  = regbits< type,  3,  1 >;  /**< Capture/Compare 3 interrupt flag    */
    using CC2IF  = regbits< type,  2,  1 >;  /**< Capture/Compare 2 interrupt flag    */
    using CC1IF  = regbits< type,  1,  1 >;  /**< Capture/compare 1 interrupt flag    */
    using UIF    = regbits< type,  0,  1 >;  /**< Update interrupt flag               */
  };

  /**
   * event generation register
   */
  struct EGR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x0000 >;

    using BG    = regbits< type,  7,  1 >;  /**< Break generation                           */
    using TG    = regbits< type,  6,  1 >;  /**< Trigger generation                         */
    using COMG  = regbits< type,  5,  1 >;  /**< Capture/Compare control update generation  */
    using CC4G  = regbits< type,  4,  1 >;  /**< Capture/compare 4 generation               */
    using CC3G  = regbits< type,  3,  1 >;  /**< Capture/compare 3 generation               */
    using CC2G  = regbits< type,  2,  1 >;  /**< Capture/compare 2 generation               */
    using CC1G  = regbits< type,  1,  1 >;  /**< Capture/compare 1 generation               */
    using UG    = regbits< type,  0,  1 >;  /**< Update generation                          */
  };

  /**
   * capture/compare mode register (output mode)
   */
  struct CCMR1_Output
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using OC2CE  = regbits< type, 15,  1 >;  /**< Output Compare 2 clear enable    */
    using OC2M   = regbits< type, 12,  3 >;  /**< Output Compare 2 mode            */
    using OC2PE  = regbits< type, 11,  1 >;  /**< Output Compare 2 preload enable  */
    using OC2FE  = regbits< type, 10,  1 >;  /**< Output Compare 2 fast enable     */
    using CC2S   = regbits< type,  8,  2 >;  /**< Capture/Compare 2 selection      */
    using OC1CE  = regbits< type,  7,  1 >;  /**< Output Compare 1 clear enable    */
    using OC1M   = regbits< type,  4,  3 >;  /**< Output Compare 1 mode            */
    using OC1PE  = regbits< type,  3,  1 >;  /**< Output Compare 1 preload enable  */
    using OC1FE  = regbits< type,  2,  1 >;  /**< Output Compare 1 fast enable     */
    using CC1S   = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection      */
  };

  /**
   * capture/compare mode register 1 (input mode)
   */
  struct CCMR1_Input
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using IC2F    = regbits< type, 12,  4 >;  /**< Input capture 2 filter       */
    using IC2PCS  = regbits< type, 10,  2 >;  /**< Input capture 2 prescaler    */
    using CC2S    = regbits< type,  8,  2 >;  /**< Capture/Compare 2 selection  */
    using IC1F    = regbits< type,  4,  4 >;  /**< Input capture 1 filter       */
    using ICPCS   = regbits< type,  2,  2 >;  /**< Input capture 1 prescaler    */
    using CC1S    = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection  */
  };

  /**
   * capture/compare mode register (output mode)
   */
  struct CCMR2_Output
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using OC4CE  = regbits< type, 15,  1 >;  /**< Output compare 4 clear enable    */
    using OC4M   = regbits< type, 12,  3 >;  /**< Output compare 4 mode            */
    using OC4PE  = regbits< type, 11,  1 >;  /**< Output compare 4 preload enable  */
    using OC4FE  = regbits< type, 10,  1 >;  /**< Output compare 4 fast enable     */
    using CC4S   = regbits< type,  8,  2 >;  /**< Capture/Compare 4 selection      */
    using OC3CE  = regbits< type,  7,  1 >;  /**< Output compare 3 clear enable    */
    using OC3M   = regbits< type,  4,  3 >;  /**< Output compare 3 mode            */
    using OC3PE  = regbits< type,  3,  1 >;  /**< Output compare 3 preload enable  */
    using OC3FE  = regbits< type,  2,  1 >;  /**< Output compare 3 fast enable     */
    using CC3S   = regbits< type,  0,  2 >;  /**< Capture/Compare 3 selection      */
  };

  /**
   * capture/compare mode register 2 (input mode)
   */
  struct CCMR2_Input
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using IC4F    = regbits< type, 12,  4 >;  /**< Input capture 4 filter       */
    using IC4PSC  = regbits< type, 10,  2 >;  /**< Input capture 4 prescaler    */
    using CC4S    = regbits< type,  8,  2 >;  /**< Capture/Compare 4 selection  */
    using IC3F    = regbits< type,  4,  4 >;  /**< Input capture 3 filter       */
    using IC3PSC  = regbits< type,  2,  2 >;  /**< Input capture 3 prescaler    */
    using CC3S    = regbits< type,  0,  2 >;  /**< Capture/compare 3 selection  */
  };

  /**
   * capture/compare enable register
   */
  struct CCER
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0000 >;

    using CC4P   = regbits< type, 13,  1 >;  /**< Capture/Compare 3 output Polarity              */
    using CC4E   = regbits< type, 12,  1 >;  /**< Capture/Compare 4 output enable                */
    using CC3NP  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 output Polarity              */
    using CC3NE  = regbits< type, 10,  1 >;  /**< Capture/Compare 3 complementary output enable  */
    using CC3P   = regbits< type,  9,  1 >;  /**< Capture/Compare 3 output Polarity              */
    using CC3E   = regbits< type,  8,  1 >;  /**< Capture/Compare 3 output enable                */
    using CC2NP  = regbits< type,  7,  1 >;  /**< Capture/Compare 2 output Polarity              */
    using CC2NE  = regbits< type,  6,  1 >;  /**< Capture/Compare 2 complementary output enable  */
    using CC2P   = regbits< type,  5,  1 >;  /**< Capture/Compare 2 output Polarity              */
    using CC2E   = regbits< type,  4,  1 >;  /**< Capture/Compare 2 output enable                */
    using CC1NP  = regbits< type,  3,  1 >;  /**< Capture/Compare 1 output Polarity              */
    using CC1NE  = regbits< type,  2,  1 >;  /**< Capture/Compare 1 complementary output enable  */
    using CC1P   = regbits< type,  1,  1 >;  /**< Capture/Compare 1 output Polarity              */
    using CC1E   = regbits< type,  0,  1 >;  /**< Capture/Compare 1 output enable                */
  };

  /**
   * counter
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_ = regbits< type,  0, 16 >;  /**< counter value  */
  };

  /**
   * prescaler
   */
  struct PSC
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0000 >;

    // fixme: Field name equals parent register name: PSC
    using PSC_ = regbits< type,  0, 16 >;  /**< Prescaler value  */
  };

  /**
   * auto-reload register
   */
  struct ARR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: ARR
    using ARR_ = regbits< type,  0, 16 >;  /**< Auto-reload value  */
  };

  /**
   * capture/compare register 1
   */
  struct CCR1
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR1
    using CCR1_ = regbits< type,  0, 16 >;  /**< Capture/Compare 1 value  */
  };

  /**
   * capture/compare register 2
   */
  struct CCR2
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR2
    using CCR2_ = regbits< type,  0, 16 >;  /**< Capture/Compare 2 value  */
  };

  /**
   * capture/compare register 3
   */
  struct CCR3
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR3
    using CCR3_ = regbits< type,  0, 16 >;  /**< Capture/Compare value  */
  };

  /**
   * capture/compare register 4
   */
  struct CCR4
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR4
    using CCR4_ = regbits< type,  0, 16 >;  /**< Capture/Compare value  */
  };

  /**
   * DMA control register
   */
  struct DCR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x0000 >;

    using DBL  = regbits< type,  8,  5 >;  /**< DMA burst length  */
    using DBA  = regbits< type,  0,  5 >;  /**< DMA base address  */
  };

  /**
   * DMA address for full transfer
   */
  struct DMAR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x0000 >;

    using DMAB  = regbits< type,  0, 16 >;  /**< DMA register for burst accesses  */
  };

  /**
   * repetition counter register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x0000 >;

    using REP  = regbits< type,  0,  8 >;  /**< Repetition counter value  */
  };

  /**
   * break and dead-time register
   */
  struct BDTR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x0000 >;

    using MOE   = regbits< type, 15,  1 >;  /**< Main output enable                 */
    using AOE   = regbits< type, 14,  1 >;  /**< Automatic output enable            */
    using BKP   = regbits< type, 13,  1 >;  /**< Break polarity                     */
    using BKE   = regbits< type, 12,  1 >;  /**< Break enable                       */
    using OSSR  = regbits< type, 11,  1 >;  /**< Off-state selection for Run mode   */
    using OSSI  = regbits< type, 10,  1 >;  /**< Off-state selection for Idle mode  */
    using LOCK  = regbits< type,  8,  2 >;  /**< Lock configuration                 */
    using DTG   = regbits< type,  0,  8 >;  /**< Dead-time generator setup          */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIM8_HPP_INCLUDED
