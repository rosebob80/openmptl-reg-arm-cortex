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
//  Import from CMSIS-SVD: "STMicro/STM32L100.svd"
//
//  name: STM32L100
//  version: 1.0
//  description: STM32L100
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_NVIC_HPP_INCLUDED
#define ARCH_NVIC_HPP_INCLUDED

#warning "using untested register declarations"

namespace mptl { namespace irq {

using wwdg          = irq_channel< 0>;    /**< Window Watchdog interrupt                                                                */
using pvd           = irq_channel< 1>;    /**< PVD through EXTI Line detection interrupt                                                */
using tamper_stamp  = irq_channel< 2>;    /**< Tamper and TimeStamp through EXTI line interrupts                                        */
using rtc_wkup      = irq_channel< 3>;    /**< RTC Wakeup through EXTI line interrupt                                                   */
using flash         = irq_channel< 4>;    /**< Flash global interrupt                                                                   */
using rcc           = irq_channel< 5>;    /**< RCC global interrupt                                                                     */
using exti0         = irq_channel< 6>;    /**< EXTI Line0 interrupt                                                                     */
using exti1         = irq_channel< 7>;    /**< EXTI Line1 interrupt                                                                     */
using exti2         = irq_channel< 8>;    /**< EXTI Line2 interrupt                                                                     */
using exti3         = irq_channel< 9>;    /**< EXTI Line3 interrupt                                                                     */
using exti4         = irq_channel<10>;    /**< EXTI Line4 interrupt                                                                     */
using adc1          = irq_channel<18>;    /**< ADC1 global interrupt                                                                    */
using usb_hp        = irq_channel<19>;    /**< USB High priority interrupt                                                              */
using usb_lp        = irq_channel<20>;    /**< USB Low priority interrupt                                                               */
using dac           = irq_channel<21>;    /**< DAC interrupt                                                                            */
using comp_ca       = irq_channel<22>;    /**< Comparator wakeup through EXTI line (21 and 22) interrupt/Channel acquisition interrupt  */
using exti9_5       = irq_channel<23>;    /**< EXTI Line[9:5] interrupts                                                                */
using lcd           = irq_channel<24>;    /**< LCD global interrupt                                                                     */
using tim9          = irq_channel<25>;    /**< TIM9 global interrupt                                                                    */
using tim10         = irq_channel<26>;    /**< TIM10 global interrupt                                                                   */
using tim11         = irq_channel<27>;    /**< TIM11 global interrupt                                                                   */
using tim2          = irq_channel<28>;    /**< TIM2 global interrupt                                                                    */
using tim3          = irq_channel<29>;    /**< TIM3 global interrupt                                                                    */
using tim4          = irq_channel<30>;    /**< TIM4 global interrupt                                                                    */
using i2c1_ev       = irq_channel<31>;    /**< I2C1 event interrupt                                                                     */
using i2c1_er       = irq_channel<32>;    /**< I2C1 error interrupt                                                                     */
using i2c2_ev       = irq_channel<33>;    /**< I2C2 event interrupt                                                                     */
using i2c2_er       = irq_channel<34>;    /**< I2C2 error interrupt                                                                     */
using spi1          = irq_channel<35>;    /**< SPI1 global interrupt                                                                    */
using spi2          = irq_channel<36>;    /**< SPI2 global interrupt                                                                    */
using usart1        = irq_channel<37>;    /**< USART1 global interrupt                                                                  */
using usart2        = irq_channel<38>;    /**< USART2 global interrupt                                                                  */
using usart3        = irq_channel<39>;    /**< USART3 global interrupt                                                                  */
using exti15_10     = irq_channel<40>;    /**< EXTI Line[15:10] interrupts                                                              */
using rtc_alarm     = irq_channel<41>;    /**< RTC Alarms (A and B) through EXTI line interrupt                                         */
using usb_fs_wkup   = irq_channel<42>;    /**< USB Device FS Wakeup through EXTI line interrupt                                         */
using tim6          = irq_channel<43>;    /**< TIM6 global interrupt                                                                    */
using tim7          = irq_channel<44>;    /**< TIM7 global interrupt                                                                    */

static constexpr int numof_interrupt_channels = 45

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
