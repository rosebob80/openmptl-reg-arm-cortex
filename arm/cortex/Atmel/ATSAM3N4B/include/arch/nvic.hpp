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
//  Import from CMSIS-SVD: "Atmel/ATSAM3N4B.svd"
//
//  vendor: Atmel
//  name: ATSAM3N4B
//  series: SAM3N
//  version: 20130131
//  description: Atmel ATSAM3N4B device: Cortex-M3 Microcontroller with 256KB Flash, 64 Pins (refer to http://www.atmel.com/devices/SAM3N4B.aspx for more)
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

using pmc     = irq_channel< 5>;    
using efc     = irq_channel< 6>;    
using uart0   = irq_channel< 8>;    
using uart1   = irq_channel< 9>;    
using pioa    = irq_channel<11>;    
using piob    = irq_channel<12>;    
using usart0  = irq_channel<14>;    
using usart1  = irq_channel<15>;    
using twi0    = irq_channel<19>;    
using twi1    = irq_channel<20>;    
using spi     = irq_channel<21>;    
using tc0     = irq_channel<23>;    
using tc1     = irq_channel<24>;    
using tc2     = irq_channel<25>;    
using adc     = irq_channel<29>;    
using dacc    = irq_channel<30>;    
using pwm     = irq_channel<31>;    

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
