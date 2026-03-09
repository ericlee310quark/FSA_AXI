// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__544(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__544\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    VlWide<32>/*1023:0*/ __Vtemp_6;
    VlWide<32>/*1023:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT___fragmenter_auto_anon_out_a_bits_source;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    __Vtemp_2[0x11U] = 0U;
    __Vtemp_2[0x12U] = 0U;
    __Vtemp_2[0x13U] = 0U;
    __Vtemp_2[0x14U] = 0U;
    __Vtemp_2[0x15U] = 0U;
    __Vtemp_2[0x16U] = 0U;
    __Vtemp_2[0x17U] = 0U;
    __Vtemp_2[0x18U] = 0U;
    __Vtemp_2[0x19U] = 0U;
    __Vtemp_2[0x1aU] = 0U;
    __Vtemp_2[0x1bU] = 0U;
    __Vtemp_2[0x1cU] = 0U;
    __Vtemp_2[0x1dU] = 0U;
    __Vtemp_2[0x1eU] = 0U;
    __Vtemp_2[0x1fU] = 0U;
    VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_3, VTestDriver__ConstPool__CONST_h2ae7f32a_0, __Vtemp_2);
    __Vtemp_6[0U] = (0x3ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                               >> 5U));
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    __Vtemp_6[5U] = 0U;
    __Vtemp_6[6U] = 0U;
    __Vtemp_6[7U] = 0U;
    __Vtemp_6[8U] = 0U;
    __Vtemp_6[9U] = 0U;
    __Vtemp_6[0xaU] = 0U;
    __Vtemp_6[0xbU] = 0U;
    __Vtemp_6[0xcU] = 0U;
    __Vtemp_6[0xdU] = 0U;
    __Vtemp_6[0xeU] = 0U;
    __Vtemp_6[0xfU] = 0U;
    __Vtemp_6[0x10U] = 0U;
    __Vtemp_6[0x11U] = 0U;
    __Vtemp_6[0x12U] = 0U;
    __Vtemp_6[0x13U] = 0U;
    __Vtemp_6[0x14U] = 0U;
    __Vtemp_6[0x15U] = 0U;
    __Vtemp_6[0x16U] = 0U;
    __Vtemp_6[0x17U] = 0U;
    __Vtemp_6[0x18U] = 0U;
    __Vtemp_6[0x19U] = 0U;
    __Vtemp_6[0x1aU] = 0U;
    __Vtemp_6[0x1bU] = 0U;
    __Vtemp_6[0x1cU] = 0U;
    __Vtemp_6[0x1dU] = 0U;
    __Vtemp_6[0x1eU] = 0U;
    __Vtemp_6[0x1fU] = 0U;
    VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_7, VTestDriver__ConstPool__CONST_h2ae7f32a_0, __Vtemp_6);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__axi4yank__DOT__Queue512_BundleMap_1__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__wrap = 0U;
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_1[8U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_1[9U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_1[0xaU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_1[0xbU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_1[0xcU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_1[0xdU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_1[0xeU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_1[0xfU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_1[0x10U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_1[0x11U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_1[0x12U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_1[0x13U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_1[0x14U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_1[0x15U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_1[0x16U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_1[0x17U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_1[0x18U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_1[0x19U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_1[0x1aU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_1[0x1bU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_1[0x1cU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_1[0x1dU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_1[0x1eU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_1[0x1fU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0U] 
            = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U];
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT___GEN_25) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__enqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT___GEN_25) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__enqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT___GEN_25) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__enqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT___GEN_25) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__enqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___GEN_25) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__enqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__axi4yank__DOT__Queue512_BundleMap_1__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__axi4yank__DOT__Queue512_BundleMap_1__DOT__enq_ptr_value 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__axi4yank__DOT__Queue512_BundleMap_1__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[1U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[1U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[2U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[2U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[3U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[3U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[4U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[4U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[5U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[5U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[6U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[6U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[7U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[7U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_1[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[8U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[8U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[8U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_1[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[9U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_3[9U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                ? __Vtemp_7[9U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_1[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xaU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_3[0xaU] : 
                               VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                  ? __Vtemp_7[0xaU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_1[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xbU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_3[0xbU] : 
                               VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                  ? __Vtemp_7[0xbU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_1[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xcU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_3[0xcU] : 
                               VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                  ? __Vtemp_7[0xcU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_1[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xdU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_3[0xdU] : 
                               VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                  ? __Vtemp_7[0xdU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_1[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xeU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_3[0xeU] : 
                               VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                  ? __Vtemp_7[0xeU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_1[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xfU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_3[0xfU] : 
                               VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                  ? __Vtemp_7[0xfU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_1[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x10U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x10U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x10U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_1[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x11U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x11U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x11U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_1[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x12U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x12U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x12U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_1[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x13U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x13U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x13U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_1[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x14U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x14U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x14U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_1[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x15U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x15U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x15U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_1[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x16U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x16U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x16U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_1[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x17U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x17U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x17U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_1[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x18U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x18U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x18U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_1[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x19U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x19U]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x19U]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_1[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1aU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x1aU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x1aU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_1[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1bU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x1bU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x1bU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_1[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1cU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x1cU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x1cU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_1[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1dU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x1dU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x1dU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_1[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1eU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x1eU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x1eU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_1[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1fU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_3[0x1fU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                                   ? __Vtemp_7[0x1fU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                    ? __Vtemp_3[0U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35)
                      ? __Vtemp_7[0U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_1[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_1[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_1[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_1[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_1[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_1[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_1[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_1[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_1[0x10U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x11U] 
        = __Vtemp_1[0x11U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x12U] 
        = __Vtemp_1[0x12U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x13U] 
        = __Vtemp_1[0x13U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x14U] 
        = __Vtemp_1[0x14U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x15U] 
        = __Vtemp_1[0x15U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x16U] 
        = __Vtemp_1[0x16U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x17U] 
        = __Vtemp_1[0x17U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x18U] 
        = __Vtemp_1[0x18U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x19U] 
        = __Vtemp_1[0x19U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1aU] 
        = __Vtemp_1[0x1aU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1bU] 
        = __Vtemp_1[0x1bU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1cU] 
        = __Vtemp_1[0x1cU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1dU] 
        = __Vtemp_1[0x1dU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1eU] 
        = __Vtemp_1[0x1eU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1fU] 
        = __Vtemp_1[0x1fU];
}

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42ac30fb_0;
extern const VlWide<128>/*4095:0*/ VTestDriver__ConstPool__CONST_h6e0f3f36_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_ha3e17051_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b3b0f7_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42ac30ff_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__545(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__545\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    VlWide<257>/*8223:0*/ __Vtemp_4;
    VlWide<128>/*4095:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<257>/*8223:0*/ __Vtemp_8;
    VlWide<257>/*8223:0*/ __Vtemp_9;
    VlWide<128>/*4095:0*/ __Vtemp_10;
    VlWide<128>/*4095:0*/ __Vtemp_11;
    VlWide<128>/*4095:0*/ __Vtemp_12;
    VlWide<128>/*4095:0*/ __Vtemp_13;
    VlWide<128>/*4095:0*/ __Vtemp_14;
    VlWide<257>/*8223:0*/ __Vtemp_15;
    VlWide<257>/*8223:0*/ __Vtemp_16;
    VlWide<257>/*8223:0*/ __Vtemp_17;
    VlWide<128>/*4095:0*/ __Vtemp_18;
    VlWide<128>/*4095:0*/ __Vtemp_19;
    VlWide<128>/*4095:0*/ __Vtemp_20;
    VlWide<257>/*8223:0*/ __Vtemp_21;
    VlWide<257>/*8223:0*/ __Vtemp_22;
    VlWide<128>/*4095:0*/ __Vtemp_23;
    VlWide<128>/*4095:0*/ __Vtemp_24;
    VlWide<128>/*4095:0*/ __Vtemp_25;
    VlWide<128>/*4095:0*/ __Vtemp_26;
    // Body
    VL_EXTEND_WI(8194,3, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT___fragmenter_auto_anon_out_a_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT___fragmenter_auto_anon_out_a_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_4, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_3);
    VL_SEL_WWII(4096,8194, __Vtemp_5, __Vtemp_4, 0U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0), __Vtemp_5, VTestDriver__ConstPool__CONST_h6e0f3f36_0);
    VL_OR_W(128, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_sizes, __Vtemp_6);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_8, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                             >> 3U)));
    VL_AND_W(257, __Vtemp_9, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_8);
    VL_SEL_WWII(4096,8207, __Vtemp_10, __Vtemp_9, 0U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35), __Vtemp_10, VTestDriver__ConstPool__CONST_h6e0f3f36_0);
    VL_NOT_W(128, __Vtemp_12, __Vtemp_11);
    VL_AND_W(128, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    VL_COND_WIWW(4096, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset), VTestDriver__ConstPool__CONST_h6e0f3f36_0, __Vtemp_13);
    VL_ASSIGN_W(4096,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_sizes, __Vtemp_1);
    VL_EXTEND_WI(8195,4, __Vtemp_15, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0)
                                       ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_16, __Vtemp_15, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT___fragmenter_auto_anon_out_a_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_17, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_16);
    VL_SEL_WWII(4096,8195, __Vtemp_18, __Vtemp_17, 0U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_19, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_0), __Vtemp_18, VTestDriver__ConstPool__CONST_h6e0f3f36_0);
    VL_OR_W(128, __Vtemp_20, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_opcodes, __Vtemp_19);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_21, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                             >> 3U)));
    VL_AND_W(257, __Vtemp_22, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_21);
    VL_SEL_WWII(4096,8207, __Vtemp_23, __Vtemp_22, 0U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_24, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___GEN_35), __Vtemp_23, VTestDriver__ConstPool__CONST_h6e0f3f36_0);
    VL_NOT_W(128, __Vtemp_25, __Vtemp_24);
    VL_AND_W(128, __Vtemp_26, __Vtemp_20, __Vtemp_25);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        VL_ASSIGN_W(4096,__Vtemp_14, VTestDriver__ConstPool__CONST_h6e0f3f36_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap = 0U;
    } else {
        VL_ASSIGN_W(4096,__Vtemp_14, __Vtemp_26);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___a_first_T_1) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___widx_T_1))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__watchdog));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap) 
                         - (IData)(1U)));
        }
    }
    VL_ASSIGN_W(4096,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_opcodes, __Vtemp_14);
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hea2bd2fa_0;
extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h9e67c271_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a54009_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a4c3f1_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__546(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__546\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<8>/*255:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_22;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1) {
        __Vtemp_3[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 1U)));
        __Vtemp_16[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U)));
    } else {
        __Vtemp_3[0U] = 0U;
        __Vtemp_16[0U] = 0U;
    }
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    __Vtemp_3[5U] = 0U;
    __Vtemp_3[6U] = 0U;
    __Vtemp_3[7U] = 0U;
    __Vtemp_3[8U] = 0U;
    __Vtemp_3[9U] = 0U;
    __Vtemp_3[0xaU] = 0U;
    __Vtemp_3[0xbU] = 0U;
    __Vtemp_3[0xcU] = 0U;
    __Vtemp_3[0xdU] = 0U;
    __Vtemp_3[0xeU] = 0U;
    __Vtemp_3[0xfU] = 0U;
    __Vtemp_3[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_4, __Vtemp_3, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_9, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                            >> 7U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__rawInstQueue__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
        __Vtemp_2[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_2[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_2[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_2[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_2[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_2[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_2[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__rawInstQueue__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__rawInstQueue__DOT__enq_ptr_value 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__rawInstQueue__DOT__enq_ptr_value)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                    ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(
                                                                    (0x3fU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 9U)))))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                    ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                                                                                >> 9U)))))
                                    : 0ULL)));
        __Vtemp_2[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                 & __Vtemp_4[1U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                   & __Vtemp_9[1U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_2[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                 & __Vtemp_4[2U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                   & __Vtemp_9[2U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_2[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                 & __Vtemp_4[3U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                   & __Vtemp_9[3U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_2[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                 & __Vtemp_4[4U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                   & __Vtemp_9[4U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_2[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                 & __Vtemp_4[5U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                   & __Vtemp_9[5U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_2[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                 & __Vtemp_4[6U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                   & __Vtemp_9[6U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_2[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[7U] 
                                 & __Vtemp_4[7U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                   & __Vtemp_9[7U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_4[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_9[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_2[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_2[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_2[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_2[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_2[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_2[7U];
    __Vtemp_16[1U] = 0U;
    __Vtemp_16[2U] = 0U;
    __Vtemp_16[3U] = 0U;
    __Vtemp_16[4U] = 0U;
    __Vtemp_16[5U] = 0U;
    __Vtemp_16[6U] = 0U;
    __Vtemp_16[7U] = 0U;
    __Vtemp_16[8U] = 0U;
    __Vtemp_16[9U] = 0U;
    __Vtemp_16[0xaU] = 0U;
    __Vtemp_16[0xbU] = 0U;
    __Vtemp_16[0xcU] = 0U;
    __Vtemp_16[0xdU] = 0U;
    __Vtemp_16[0xeU] = 0U;
    __Vtemp_16[0xfU] = 0U;
    __Vtemp_16[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_17, __Vtemp_16, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_22, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                            >> 7U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        __Vtemp_15[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_15[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_15[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_15[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_15[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_15[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_15[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        __Vtemp_15[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                  & __Vtemp_17[1U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                    & __Vtemp_22[1U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_15[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                  & __Vtemp_17[2U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                    & __Vtemp_22[2U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_15[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                  & __Vtemp_17[3U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                    & __Vtemp_22[3U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_15[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                  & __Vtemp_17[4U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                    & __Vtemp_22[4U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_15[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                  & __Vtemp_17[5U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                    & __Vtemp_22[5U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_15[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                  & __Vtemp_17[6U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                    & __Vtemp_22[6U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_15[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[7U] 
                                  & __Vtemp_17[7U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                    & __Vtemp_22[7U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_17[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT___GEN_38)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_22[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_15[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_15[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_15[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_15[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_15[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_15[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_15[7U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__547(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__547\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__acqPtr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT___GEN_25) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__enqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT___GEN_16) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__acqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT___GEN_16) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__acqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT___GEN_16) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__acqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT___GEN_16) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__acqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT___GEN_16) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__acqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT___GEN_16) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__acqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___GEN_16) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__acqPtr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__acqPtr_value)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__548(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__548\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__acknum = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT__cnt = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__enqPtr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__dFirst)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                             >> 5U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__acknum) 
                                       - (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT___fragmenter_auto_anon_in_d_bits_opcode) 
                                                | (3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                                                       >> 3U))))))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT___io_in_ready_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT__cnt 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT___cnt_T_2;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT___cnt_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT__cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__mx__DOT__cnt)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT___GEN_35) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__enqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT___GEN_35) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__enqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT___GEN_35) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__enqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__enqPtr_value)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = ((0x3f00U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                           >> 1U)) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT___fragmenter_auto_anon_in_d_bits_size) 
                                       << 5U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT___fragmenter_auto_anon_in_d_bits_opcode)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[1U] = 0U;
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[2U] = 0U;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    }
}

extern const VlWide<129>/*4127:0*/ VTestDriver__ConstPool__CONST_hab8e39bf_0;
extern const VlWide<129>/*4127:0*/ VTestDriver__ConstPool__CONST_h7b2d393d_0;
extern const VlWide<129>/*4127:0*/ VTestDriver__ConstPool__CONST_hab8db9bb_0;
extern const VlWide<64>/*2047:0*/ VTestDriver__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__549(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__549\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<129>/*4127:0*/ __Vtemp_2;
    VlWide<129>/*4127:0*/ __Vtemp_3;
    VlWide<129>/*4127:0*/ __Vtemp_4;
    VlWide<129>/*4127:0*/ __Vtemp_8;
    VlWide<129>/*4127:0*/ __Vtemp_9;
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
           & ((~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT___a_q_io_enq_ready) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___repeater_io_deq_valid)) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT___GEN) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__repeater__DOT__full))));
    VL_EXTEND_WI(4098,3, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(4098,4098,11, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_bits_source) 
                   << 2U));
    VL_AND_W(129, __Vtemp_4, VTestDriver__ConstPool__CONST_hab8e39bf_0, __Vtemp_3);
    VL_SHIFTL_WWI(4111,4111,11, __Vtemp_8, VTestDriver__ConstPool__CONST_h7b2d393d_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(129, __Vtemp_9, VTestDriver__ConstPool__CONST_hab8db9bb_0, __Vtemp_8);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__enqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__dma__DOT__cnt = 0U;
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_1[__Vilp] = VTestDriver__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h6be9aa18_0[0U];
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_35) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__enqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT___GEN_35) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__enqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT___GEN_35) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__enqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT___GEN_35) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__enqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__enqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__dma__DOT___io_in_ready_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__dma__DOT__cnt 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__dma__DOT___cnt_T_2;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__dma__DOT___cnt_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__dma__DOT__cnt 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__decoder__DOT__dma__DOT__cnt)));
        }
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[1U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[1U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[2U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[2U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[3U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[3U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[4U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[4U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[5U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[5U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[6U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[6U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[7U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[7U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])));
        __Vtemp_1[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[8U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[8U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[8U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])));
        __Vtemp_1[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[9U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                              ? __Vtemp_4[9U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                ? __Vtemp_9[9U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])));
        __Vtemp_1[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xaU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_4[0xaU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                  ? __Vtemp_9[0xaU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])));
        __Vtemp_1[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xbU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_4[0xbU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                  ? __Vtemp_9[0xbU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])));
        __Vtemp_1[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xcU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_4[0xcU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                  ? __Vtemp_9[0xcU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])));
        __Vtemp_1[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xdU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_4[0xdU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                  ? __Vtemp_9[0xdU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])));
        __Vtemp_1[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xeU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_4[0xeU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                  ? __Vtemp_9[0xeU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])));
        __Vtemp_1[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xfU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                ? __Vtemp_4[0xfU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                  ? __Vtemp_9[0xfU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])));
        __Vtemp_1[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x10U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x10U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x10U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])));
        __Vtemp_1[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x11U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x11U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x11U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])));
        __Vtemp_1[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x12U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x12U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x12U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])));
        __Vtemp_1[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x13U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x13U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x13U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])));
        __Vtemp_1[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x14U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x14U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x14U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])));
        __Vtemp_1[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x15U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x15U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x15U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])));
        __Vtemp_1[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x16U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x16U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x16U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])));
        __Vtemp_1[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x17U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x17U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x17U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])));
        __Vtemp_1[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x18U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x18U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x18U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])));
        __Vtemp_1[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x19U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x19U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x19U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])));
        __Vtemp_1[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x1aU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x1aU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x1aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])));
        __Vtemp_1[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x1bU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x1bU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x1bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])));
        __Vtemp_1[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x1cU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x1cU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x1cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])));
        __Vtemp_1[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x1dU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x1dU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x1dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])));
        __Vtemp_1[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x1eU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x1eU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x1eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])));
        __Vtemp_1[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x1fU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x1fU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x1fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])));
        __Vtemp_1[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x20U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x20U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x20U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])));
        __Vtemp_1[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x21U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x21U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x21U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])));
        __Vtemp_1[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x22U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x22U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x22U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])));
        __Vtemp_1[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x23U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x23U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x23U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])));
        __Vtemp_1[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x24U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x24U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x24U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])));
        __Vtemp_1[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x25U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x25U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x25U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])));
        __Vtemp_1[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x26U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x26U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x26U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])));
        __Vtemp_1[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x27U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x27U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x27U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])));
        __Vtemp_1[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x28U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x28U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x28U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])));
        __Vtemp_1[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x29U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x29U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x29U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])));
        __Vtemp_1[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x2aU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x2aU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x2aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])));
        __Vtemp_1[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x2bU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x2bU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x2bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])));
        __Vtemp_1[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x2cU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x2cU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x2cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])));
        __Vtemp_1[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x2dU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x2dU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x2dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])));
        __Vtemp_1[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x2eU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x2eU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x2eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])));
        __Vtemp_1[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x2fU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x2fU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x2fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])));
        __Vtemp_1[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x30U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x30U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x30U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])));
        __Vtemp_1[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x31U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x31U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x31U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])));
        __Vtemp_1[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x32U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x32U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x32U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])));
        __Vtemp_1[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x33U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x33U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x33U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])));
        __Vtemp_1[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x34U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x34U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x34U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])));
        __Vtemp_1[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x35U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x35U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x35U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])));
        __Vtemp_1[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x36U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x36U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x36U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])));
        __Vtemp_1[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x37U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x37U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x37U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])));
        __Vtemp_1[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x38U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x38U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x38U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])));
        __Vtemp_1[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x39U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x39U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x39U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])));
        __Vtemp_1[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x3aU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x3aU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x3aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])));
        __Vtemp_1[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x3bU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x3bU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x3bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])));
        __Vtemp_1[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x3cU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x3cU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x3cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])));
        __Vtemp_1[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x3dU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x3dU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x3dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])));
        __Vtemp_1[0x3eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x3eU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x3eU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x3eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])));
        __Vtemp_1[0x3fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0x3fU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                                 ? __Vtemp_4[0x3fU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                                   ? __Vtemp_9[0x3fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_0)
                    ? __Vtemp_4[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___GEN_34)
                      ? __Vtemp_9[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])));
    }
    __Vilp = 1U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[__Vilp] 
            = __Vtemp_1[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__550(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__550\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__count = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__rawInstQueue__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__enqPtr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__asink__DOT__nodeIn_d_source__DOT___widx_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0)
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_widget_anon_in_d_bits_size)) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                         - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__count 
                = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__last)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__count) 
                            - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__rawInstQueue__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__rawInstQueue__DOT__deq_ptr_value 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__rawInstQueue__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT___GEN_35) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__enqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__enqPtr_value)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__sent_d 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) 
           || ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH) 
                 >> 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_h94954db9__0)) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___GEN)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__sent_d))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__sent_d 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) 
           || ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH) 
                 >> 2U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_h94954db9__0)) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___GEN)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__sent_d))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__551(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__551\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<8>/*255:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_19;
    // Body
    VL_SHIFTL_WWI(527,527,8, __Vtemp_3, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1 = 0ULL;
        __Vtemp_2[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_2[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_2[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_2[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_2[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_2[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_2[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                      ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 8U)))))
                      : 0ULL)));
        __Vtemp_2[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[1U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                   & __Vtemp_3[1U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_2[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[2U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                   & __Vtemp_3[2U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_2[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[3U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                   & __Vtemp_3[3U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_2[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[4U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                   & __Vtemp_3[4U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_2[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[5U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                   & __Vtemp_3[5U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_2[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[6U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                   & __Vtemp_3[6U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_2[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[7U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                   & __Vtemp_3[7U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_45)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_3[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vtemp_2[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vtemp_2[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vtemp_2[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = __Vtemp_2[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = __Vtemp_2[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = __Vtemp_2[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = __Vtemp_2[7U];
    VL_SHIFTL_WWI(527,527,8, __Vtemp_11, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_1 = 0ULL;
        __Vtemp_10[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_10[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_10[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_10[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_10[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_10[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_10[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_1 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_1 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                      ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 8U)))))
                      : 0ULL)));
        __Vtemp_10[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                    & __Vtemp_11[1U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_10[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                    & __Vtemp_11[2U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_10[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                    & __Vtemp_11[3U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_10[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                    & __Vtemp_11[4U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_10[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                    & __Vtemp_11[5U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_10[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                    & __Vtemp_11[6U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_10[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                    & __Vtemp_11[7U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_45)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_11[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vtemp_10[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vtemp_10[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vtemp_10[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = __Vtemp_10[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = __Vtemp_10[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = __Vtemp_10[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = __Vtemp_10[7U];
    VL_SHIFTL_WWI(527,527,8, __Vtemp_19, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_1 = 0ULL;
        __Vtemp_18[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_18[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_18[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_18[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_18[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_18[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_18[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_1 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_1 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                      ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 8U)))))
                      : 0ULL)));
        __Vtemp_18[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[1U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                    & __Vtemp_19[1U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_18[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[2U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                    & __Vtemp_19[2U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_18[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[3U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                    & __Vtemp_19[3U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_18[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[4U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                    & __Vtemp_19[4U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_18[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[5U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                    & __Vtemp_19[5U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_18[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[6U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                    & __Vtemp_19[6U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_18[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[7U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                    & __Vtemp_19[7U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_45)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_19[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vtemp_18[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vtemp_18[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vtemp_18[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = __Vtemp_18[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = __Vtemp_18[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = __Vtemp_18[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = __Vtemp_18[7U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__552(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__552\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__deq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__deq_ptr_value)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                    ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source)))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                    ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 8U)))))
                                    : 0ULL)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                    ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source)))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                    ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 8U)))))
                                    : 0ULL)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                    ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source)))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                    ? VL_SHIFTL_QQQ(64,64,64, 1ULL, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 8U)))))
                                    : 0ULL)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__553(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__553\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_8;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_opcode) 
                               << 1U)) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_8, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_2)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_2)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_2)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                 & __Vtemp_3[1U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                   & __Vtemp_8[1U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                 & __Vtemp_3[2U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                   & __Vtemp_8[2U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                 & __Vtemp_3[3U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                   & __Vtemp_8[3U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                 & __Vtemp_3[4U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                   & __Vtemp_8[4U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                 & __Vtemp_3[5U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                   & __Vtemp_8[5U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                 & __Vtemp_3[6U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                   & __Vtemp_8[6U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[7U] 
                                 & __Vtemp_3[7U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                   & __Vtemp_8[7U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_3[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_8[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_1[7U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__554(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__554\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_21;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_size) 
                               << 1U)) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_8, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                 & __Vtemp_3[1U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                   & __Vtemp_8[1U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                 & __Vtemp_3[2U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                   & __Vtemp_8[2U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                 & __Vtemp_3[3U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                   & __Vtemp_8[3U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                 & __Vtemp_3[4U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                   & __Vtemp_8[4U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                 & __Vtemp_3[5U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                   & __Vtemp_8[5U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                 & __Vtemp_3[6U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                   & __Vtemp_8[6U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[7U] 
                                 & __Vtemp_3[7U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                   & __Vtemp_8[7U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_1)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_3[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_44)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_8[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    __Vtemp_15[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                       ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_opcode) 
                                << 1U)) : 0U);
    __Vtemp_15[1U] = 0U;
    __Vtemp_15[2U] = 0U;
    __Vtemp_15[3U] = 0U;
    __Vtemp_15[4U] = 0U;
    __Vtemp_15[5U] = 0U;
    __Vtemp_15[6U] = 0U;
    __Vtemp_15[7U] = 0U;
    __Vtemp_15[8U] = 0U;
    __Vtemp_15[9U] = 0U;
    __Vtemp_15[0xaU] = 0U;
    __Vtemp_15[0xbU] = 0U;
    __Vtemp_15[0xcU] = 0U;
    __Vtemp_15[0xdU] = 0U;
    __Vtemp_15[0xeU] = 0U;
    __Vtemp_15[0xfU] = 0U;
    __Vtemp_15[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_16, __Vtemp_15, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_21, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vtemp_14[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_14[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_14[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_14[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_14[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_14[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_14[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        __Vtemp_14[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                  & __Vtemp_16[1U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                    & __Vtemp_21[1U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_14[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                  & __Vtemp_16[2U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                    & __Vtemp_21[2U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_14[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                  & __Vtemp_16[3U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                    & __Vtemp_21[3U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_14[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                  & __Vtemp_16[4U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                    & __Vtemp_21[4U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_14[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                  & __Vtemp_16[5U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                    & __Vtemp_21[5U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_14[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                  & __Vtemp_16[6U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                    & __Vtemp_21[6U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_14[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[7U] 
                                  & __Vtemp_16[7U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                    & __Vtemp_21[7U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_16[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_21[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_14[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_14[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_14[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_14[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_14[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_14[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_14[7U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__555(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__555\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_21;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_size) 
                               << 1U)) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_8, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                 & __Vtemp_3[1U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                   & __Vtemp_8[1U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                 & __Vtemp_3[2U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                   & __Vtemp_8[2U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                 & __Vtemp_3[3U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                   & __Vtemp_8[3U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                 & __Vtemp_3[4U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                   & __Vtemp_8[4U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                 & __Vtemp_3[5U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                   & __Vtemp_8[5U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                 & __Vtemp_3[6U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                   & __Vtemp_8[6U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[7U] 
                                 & __Vtemp_3[7U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                   & __Vtemp_8[7U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_1)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_3[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT___GEN_44)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_8[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    __Vtemp_15[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                       ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_opcode) 
                                << 1U)) : 0U);
    __Vtemp_15[1U] = 0U;
    __Vtemp_15[2U] = 0U;
    __Vtemp_15[3U] = 0U;
    __Vtemp_15[4U] = 0U;
    __Vtemp_15[5U] = 0U;
    __Vtemp_15[6U] = 0U;
    __Vtemp_15[7U] = 0U;
    __Vtemp_15[8U] = 0U;
    __Vtemp_15[9U] = 0U;
    __Vtemp_15[0xaU] = 0U;
    __Vtemp_15[0xbU] = 0U;
    __Vtemp_15[0xcU] = 0U;
    __Vtemp_15[0xdU] = 0U;
    __Vtemp_15[0xeU] = 0U;
    __Vtemp_15[0xfU] = 0U;
    __Vtemp_15[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_16, __Vtemp_15, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_21, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vtemp_14[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_14[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_14[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_14[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_14[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_14[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_14[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        __Vtemp_14[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                  & __Vtemp_16[1U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                    & __Vtemp_21[1U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_14[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                  & __Vtemp_16[2U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                    & __Vtemp_21[2U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_14[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                  & __Vtemp_16[3U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                    & __Vtemp_21[3U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_14[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[4U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                  & __Vtemp_16[4U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                    & __Vtemp_21[4U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_14[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[5U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                  & __Vtemp_16[5U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                    & __Vtemp_21[5U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_14[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[6U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                  & __Vtemp_16[6U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                    & __Vtemp_21[6U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_14[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[7U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[7U] 
                                  & __Vtemp_16[7U])
                               : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                 ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                    & __Vtemp_21[7U])
                                 : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_16[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_21[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_14[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_14[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_14[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_14[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_14[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_14[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_14[7U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__556(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__556\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_8;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_size) 
                               << 1U)) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___broadcast_1_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_8, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                 & __Vtemp_3[1U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                   & __Vtemp_8[1U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                 & __Vtemp_3[2U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                   & __Vtemp_8[2U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                 & __Vtemp_3[3U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                   & __Vtemp_8[3U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                 & __Vtemp_3[4U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                   & __Vtemp_8[4U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[5U] 
                                 & __Vtemp_3[5U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                   & __Vtemp_8[5U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[6U] 
                                 & __Vtemp_3[6U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                   & __Vtemp_8[6U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[7U] 
                                 & __Vtemp_3[7U]) : 
                             VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                   & __Vtemp_8[7U])
                                : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_1)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_3[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_44)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_8[0U]) : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U))) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__acknum 
                = (0xfU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__acknum))
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__acknum) 
                               - ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT____VdfgTmp_h672eb8bd__0) 
                                  | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_size))))
                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__r_denied 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___GEN_0)) 
            | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__acknum))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__r_denied));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__557(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__557\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__d_denied_r 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__acknum)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__d_denied_r));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__axi4yank__DOT__Queue512_BundleMap_1__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__acqPtr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__acqPtr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__axi4yank__DOT__Queue512_BundleMap_1__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__axi4yank__DOT__Queue512_BundleMap_1__DOT__deq_ptr_value 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__axi4yank__DOT__Queue512_BundleMap_1__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT___GEN_18) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__acqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT___GEN_18) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__acqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT___GEN_18) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__acqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_18) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__acqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT___GEN_18) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__acqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__acqPtr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT___GEN_18) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__acqPtr_value 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__acqPtr_value)));
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset)) 
           & ((~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_bus_xing_out_d_ready) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_valid)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_last))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___GEN) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__full))));
}
