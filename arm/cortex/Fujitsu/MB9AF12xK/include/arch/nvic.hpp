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
//  Import from CMSIS-SVD: "Fujitsu/MB9AF12xK.svd"
//
//  name: MB9AF12xK
//  version: 1.2
//  description: MB9AF12xK
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

using csv         = irq_channel< 0>;    
using swdt        = irq_channel< 1>;    
using lvd         = irq_channel< 2>;    
using wfg         = irq_channel< 3>;    
using extint0_7   = irq_channel< 4>;    
using extint8_23  = irq_channel< 5>;    
using dtim_qdu    = irq_channel< 6>;    
using mfs0rx      = irq_channel< 7>;    
using mfs0tx      = irq_channel< 8>;    
using mfs1rx      = irq_channel< 9>;    
using mfs1tx      = irq_channel<10>;    
using mfs3rx      = irq_channel<13>;    
using mfs3tx      = irq_channel<14>;    
using mfs5rx      = irq_channel<17>;    
using mfs5tx      = irq_channel<18>;    
using ppg         = irq_channel<23>;    
using osc_pll_wc  = irq_channel<24>;    
using adc0        = irq_channel<25>;    
using frtim       = irq_channel<28>;    
using incap       = irq_channel<29>;    
using outcomp     = irq_channel<30>;    
using btim0_7     = irq_channel<31>;    
using can1        = irq_channel<33>;    

static constexpr int numof_interrupt_channels = 34

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
