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
//  Import from CMSIS-SVD: "Fujitsu/MB9B160L.svd"
//
//  name: MB9B160L
//  version: 1.3
//  description: MB9BF160L Series
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

using csv               = irq_channel< 0>;    
using swdt              = irq_channel< 1>;    
using lvd               = irq_channel< 2>;    
using exint0            = irq_channel<11>;    
using exint1            = irq_channel<12>;    
using exint2            = irq_channel<13>;    
using exint3            = irq_channel<14>;    
using exint4            = irq_channel<15>;    
using exint5            = irq_channel<16>;    
using exint6            = irq_channel<17>;    
using exint7            = irq_channel<18>;    
using qprc0             = irq_channel<19>;    
using wfg0_dtif0        = irq_channel<21>;    
using wfg1_dtif1        = irq_channel<22>;    
using frt0_peak         = irq_channel<24>;    
using frt0_zero         = irq_channel<25>;    
using icu0              = irq_channel<26>;    
using ocu0              = irq_channel<27>;    
using frt1_peak         = irq_channel<28>;    
using frt1_zero         = irq_channel<29>;    
using icu1              = irq_channel<30>;    
using ocu1              = irq_channel<31>;    
using ppg00_02_04       = irq_channel<36>;    
using ppg08_10_12       = irq_channel<37>;    
using ppg16_18_20       = irq_channel<38>;    
using bt0               = irq_channel<39>;    
using bt1               = irq_channel<40>;    
using bt2               = irq_channel<41>;    
using bt3               = irq_channel<42>;    
using bt4               = irq_channel<43>;    
using bt5               = irq_channel<44>;    
using bt6               = irq_channel<45>;    
using bt7               = irq_channel<46>;    
using dt1_2             = irq_channel<47>;    
using wc                = irq_channel<48>;    
using rtc               = irq_channel<50>;    
using exint8            = irq_channel<51>;    
using exint9            = irq_channel<52>;    
using exint10           = irq_channel<53>;    
using exint11           = irq_channel<54>;    
using exint12           = irq_channel<55>;    
using exint13           = irq_channel<56>;    
using exint14           = irq_channel<57>;    
using exint15           = irq_channel<58>;    
using tim               = irq_channel<59>;    
using mfs0_rx           = irq_channel<60>;    
using mfs0_tx           = irq_channel<61>;    
using mfs1_rx           = irq_channel<62>;    
using mfs1_tx           = irq_channel<63>;    
using mfs2_rx           = irq_channel<64>;    
using mfs2_tx           = irq_channel<65>;    
using mfs3_rx           = irq_channel<66>;    
using mfs3_tx           = irq_channel<67>;    
using mfs4_rx           = irq_channel<68>;    
using mfs4_tx           = irq_channel<69>;    
using mfs6_rx           = irq_channel<72>;    
using mfs6_tx           = irq_channel<73>;    
using adc0              = irq_channel<76>;    
using adc1              = irq_channel<77>;    
using dmac0             = irq_channel<83>;    
using dmac1             = irq_channel<84>;    
using dmac2             = irq_channel<85>;    
using dmac3             = irq_channel<86>;    
using dmac4             = irq_channel<87>;    
using dmac5             = irq_channel<88>;    
using dmac6             = irq_channel<89>;    
using dmac7             = irq_channel<90>;    
using dstc              = irq_channel<91>;    
using exint16_17_18_19  = irq_channel<92>;    
using exint20_21_22_23  = irq_channel<93>;    
using exint24_25_26_27  = irq_channel<94>;    
using exint28_29_30_31  = irq_channel<95>;    
using flash             = irq_channel<119>;    

static constexpr int numof_interrupt_channels = 120

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
