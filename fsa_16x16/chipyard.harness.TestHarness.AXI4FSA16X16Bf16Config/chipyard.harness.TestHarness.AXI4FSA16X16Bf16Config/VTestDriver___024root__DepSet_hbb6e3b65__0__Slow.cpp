// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_static__TOP(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_static(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_static\n"); );
    // Body
    VTestDriver___024root___eval_static__TOP(vlSelf);
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void VTestDriver___024root___eval_static__TOP(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->TestDriver__DOT__clock = 0U;
    vlSelf->TestDriver__DOT__reset = 1U;
    vlSelf->TestDriver__DOT__verbose = 0U;
    vlSelf->TestDriver__DOT__max_cycles = 0ULL;
    vlSelf->TestDriver__DOT__trace_count = 0ULL;
    vlSelf->TestDriver__DOT__reason[0U] = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->TestDriver__DOT__reason[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->TestDriver__DOT__reason[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->TestDriver__DOT__reason[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->TestDriver__DOT__reason[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->TestDriver__DOT__reason[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->TestDriver__DOT__reason[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->TestDriver__DOT__reason[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
    vlSelf->TestDriver__DOT__failure = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__simdram_1__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_1__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__simdram_2__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_2__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__simdram_3__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_3__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__simdram_4__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_4__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__simdram_5__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_5__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__simdram_6__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_6__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__simdram_7__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__axiTracker_7__DOT__initialized = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__source__DOT__clk_i = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__source_1__DOT__clk_i = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__source_2__DOT__clk_i = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1664(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1665(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1664(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1665(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__anonOut_a_bits_mask_rdata_written_once 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__anonOut_a_bits_mask_rdata_0 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                   [1U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_count 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_4 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_5 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_6 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_7 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_8 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x11U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__2(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__2\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_9 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_10 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_11 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_12 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_13 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_14 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_sel_sources_15 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_hold_r 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___RANDOM
                 [1U] >> 0x19U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__0(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__3(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__3\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__0(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1(vlSelf);
    VTestDriver___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__4(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__4\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__address 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
           [0U] >> 0x11U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
           [1U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                 [1U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                 [1U] >> 7U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__5(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__5\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                 [1U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__source_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                   [1U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__sink 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__inflight 
        = ((0xfff8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                       [1U] >> 0x10U)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                                          [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                             [2U] >> 3U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                               [3U])) << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                                                                [4U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__inflight_sizes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                             [4U] >> 3U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                               [5U])) << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                   [6U] >> 3U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__6(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__6\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                   [6U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__watchdog 
        = ((0xfffff800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
            [6U]) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                     [7U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__inflight_1 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                      [7U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                             [9U] >> 0x1bU))) << 0x3bU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                               [0xaU])) << 0x1bU) | (QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                                                                     [0xbU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                  [0xbU] >> 0x1cU)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                                       [0xcU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__watchdog_1 
        = ((0xfffffff8U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
            [0xcU]) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT___RANDOM
                       [0xdU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__7(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__7\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT____Vlvbound_h9bac8a17__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__3(vlSelf);
    VTestDriver___024root___eval_initial__TOP__4(vlSelf);
    VTestDriver___024root___eval_initial__TOP__5(vlSelf);
    VTestDriver___024root___eval_initial__TOP__6(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_param 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                   [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_sink 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                 [0U] >> 0xdU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__8(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__8\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                 [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                             [0U] >> 0x10U))) << 0x30U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                               [1U])) << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                                                                   [2U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT___RANDOM
                 [2U] >> 0x10U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__9(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__9\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__7(vlSelf);
    VTestDriver___024root___eval_initial__TOP__8(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__readys_mask 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__state_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__state_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__10(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__10\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xdU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__11(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__11\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__address 
        = ((0xfffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x10U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                   [1U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                 [1U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                 [1U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__source_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                   [1U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__sink 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight 
        = ((0xfff0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                       [1U] >> 0x10U)) | (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                                          [2U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__12(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__12\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_opcodes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                             [2U] >> 4U))) << 0x24U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                               [3U])) << 4U) | (QData)((IData)(
                                                               (0xfU 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                                                                [4U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_sizes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                             [4U] >> 4U))) << 0x24U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                               [5U])) << 4U) | (QData)((IData)(
                                                               (0xfU 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                   [6U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                   [6U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__watchdog 
        = ((0xfffff000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
            [6U]) | (0xfffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                     [7U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_1 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                      [7U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_sizes_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                             [9U] >> 0x1cU))) << 0x3cU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                               [0xaU])) << 0x1cU) | (QData)((IData)(
                                                                    (0xfffffffU 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                                                                     [0xbU])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__13(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__13\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_2 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
           [0xcU]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__watchdog_1 
        = ((0xfffffff0U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
            [0xcU]) | (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___RANDOM
                       [0xdU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__14(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__14\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__9(vlSelf);
    VTestDriver___024root___eval_initial__TOP__10(vlSelf);
    VTestDriver___024root___eval_initial__TOP__11(vlSelf);
    VTestDriver___024root___eval_initial__TOP__12(vlSelf);
    VTestDriver___024root___eval_initial__TOP__13(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__15(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__15\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__address 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
           [0U] >> 0x11U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
           [1U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__16(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__16\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__source_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [1U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__sink 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight 
        = ((0xfff8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [1U] >> 0x10U)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                          [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [2U] >> 3U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [3U])) << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                [4U])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__17(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__17\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [4U] >> 3U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [5U])) << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [6U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [6U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((0xfffff800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [6U]) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                     [7U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_1 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                      [7U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [9U] >> 0x1bU))) << 0x3bU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [0xaU])) << 0x1bU) | (QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                     [0xbU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0xbU] >> 0x1cU)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                       [0xcU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__18(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__18\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((0xfffffff8U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xcU]) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0xdU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__19(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__19\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__14(vlSelf);
    VTestDriver___024root___eval_initial__TOP__15(vlSelf);
    VTestDriver___024root___eval_initial__TOP__16(vlSelf);
    VTestDriver___024root___eval_initial__TOP__17(vlSelf);
    VTestDriver___024root___eval_initial__TOP__18(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__20(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__20\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__21(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__21\n"); );
    // Init
    QData/*63:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__19(vlSelf);
    VTestDriver___024root___eval_initial__TOP__20(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 2U));
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U] 
        = (0xffffffffffffULL & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U] 
        = (0xffffffffffffULL & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__22(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__22\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 7U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__23(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__23\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__address 
        = ((0xfffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x10U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [1U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__source_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [1U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__sink 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x13U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__24(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__24\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight 
        = ((0xfff0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [1U] >> 0x10U)) | (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                                          [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [2U] >> 4U))) << 0x24U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [3U])) << 4U) | (QData)((IData)(
                                                               (0xfU 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                [4U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [4U] >> 4U))) << 0x24U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [5U])) << 4U) | (QData)((IData)(
                                                               (0xfU 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [6U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [6U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((0xfffff000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
            [6U]) | (0xfffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                     [7U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                      [7U] >> 0xcU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__25(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__25\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                             [9U] >> 0x1cU))) << 0x3cU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                               [0xaU])) << 0x1cU) | (QData)((IData)(
                                                                    (0xfffffffU 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                     [0xbU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
           [0xcU]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((0xfffffff0U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xcU]) | (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0xdU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__26(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__26\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__21(vlSelf);
    VTestDriver___024root___eval_initial__TOP__22(vlSelf);
    VTestDriver___024root___eval_initial__TOP__23(vlSelf);
    VTestDriver___024root___eval_initial__TOP__24(vlSelf);
    VTestDriver___024root___eval_initial__TOP__25(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__27(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__27\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__28(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__28\n"); );
    // Init
    QData/*63:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__26(vlSelf);
    VTestDriver___024root___eval_initial__TOP__27(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 2U));
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U] 
        = (0xffffffffffffULL & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U] 
        = (0xffffffffffffULL & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__29(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__29\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                 [0U] >> 7U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__30(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__30\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__address 
        = ((0xfffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x10U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                   [1U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                 [1U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                 [1U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__source_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                   [1U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__sink 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x12U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__31(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__31\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight 
        = ((0xfff8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                       [1U] >> 0x10U)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                                          [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_opcodes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                             [2U] >> 3U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                               [3U])) << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                                                                [4U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_sizes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                             [4U] >> 3U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                               [5U])) << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                   [6U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                   [6U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__watchdog 
        = ((0xfffff800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
            [6U]) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                     [7U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_1 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                      [7U] >> 0xbU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__32(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__32\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                             [9U] >> 0x1bU))) << 0x3bU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                               [0xaU])) << 0x1bU) | (QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                                                                     [0xbU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_2 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                  [0xbU] >> 0x1cU)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                                       [0xcU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__watchdog_1 
        = ((0xfffffff8U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
            [0xcU]) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___RANDOM
                       [0xdU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__33(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__33\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__28(vlSelf);
    VTestDriver___024root___eval_initial__TOP__29(vlSelf);
    VTestDriver___024root___eval_initial__TOP__30(vlSelf);
    VTestDriver___024root___eval_initial__TOP__31(vlSelf);
    VTestDriver___024root___eval_initial__TOP__32(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__34(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__34\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT____Vlvbound_h127306c5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0U] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__35(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__35\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                      [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask 
        = ((0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                    [0U] >> 0x1cU)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                                       [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data 
        = ((0xfffffffeU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
            [1U]) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                     [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [2U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [2U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [2U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [2U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [2U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_address 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                      [2U] >> 0xfU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__36(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__36\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_mask 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                  [2U] >> 0x1cU)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                                     [3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_data 
        = ((0xfffffff8U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
            [3U]) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                     [4U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [4U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [4U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [4U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [4U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [4U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_address 
        = ((0xfffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [4U] >> 0x10U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                                          [5U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_mask 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [5U] >> 1U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__37(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__37\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_data 
        = ((0xffffffe0U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
            [5U]) | (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                     [6U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [6U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [6U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [6U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [6U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [6U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_address 
        = ((0xfff8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [6U] >> 0x10U)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                                          [7U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_mask 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [7U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_data 
        = ((0xffffff80U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
            [7U]) | (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                     [8U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__38(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__38\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [8U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [8U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [8U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [8U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [8U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_address 
        = ((0xffe0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [8U] >> 0x10U)) | (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                                          [9U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_mask 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [9U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_data 
        = ((0xfffffe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
            [9U]) | (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                     [0xaU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xaU] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xaU] >> 0xaU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__39(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__39\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xaU] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xaU] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0xaU] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_address 
        = ((0xff80U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [0xaU] >> 0x10U)) | (0x7fU & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                                            [0xbU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_mask 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0xbU] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data 
        = ((0xfffff800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
            [0xbU]) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [0xcU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xcU] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xcU] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xcU] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xcU] >> 0x12U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__40(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__40\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0xcU] >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address 
        = ((0xfe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [0xcU] >> 0x10U)) | (0x1ffU 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                                            [0xdU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_mask 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0xdU] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data 
        = ((0xffffe000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
            [0xdU]) | (0x1fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [0xeU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xeU] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xeU] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xeU] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0xeU] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0xeU] >> 0x17U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__41(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__41\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address 
        = ((0xf800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [0xeU] >> 0x10U)) | (0x7ffU 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                                            [0xfU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_mask 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0xfU] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data 
        = ((0xffff8000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
            [0xfU]) | (0x7fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                       [0x10U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0x10U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0x10U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                 [0x10U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___RANDOM
                   [0x10U] >> 0x15U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__42(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__42\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__33(vlSelf);
    VTestDriver___024root___eval_initial__TOP__34(vlSelf);
    VTestDriver___024root___eval_initial__TOP__35(vlSelf);
    VTestDriver___024root___eval_initial__TOP__36(vlSelf);
    VTestDriver___024root___eval_initial__TOP__37(vlSelf);
    VTestDriver___024root___eval_initial__TOP__38(vlSelf);
    VTestDriver___024root___eval_initial__TOP__39(vlSelf);
    VTestDriver___024root___eval_initial__TOP__40(vlSelf);
    VTestDriver___024root___eval_initial__TOP__41(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__43(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__43\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__44(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__44\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__42(vlSelf);
    VTestDriver___024root___eval_initial__TOP__43(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__45(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__45\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__46(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__46\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__44(vlSelf);
    VTestDriver___024root___eval_initial__TOP__45(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__47(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__47\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__48(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__48\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__46(vlSelf);
    VTestDriver___024root___eval_initial__TOP__47(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__49(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__49\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__50(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__50\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__48(vlSelf);
    VTestDriver___024root___eval_initial__TOP__49(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                            [0U])) << 0xfU) | (QData)((IData)(
                                                              (0x7fffU 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
                                                               [1U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__51(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__51\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__52(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__52\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__50(vlSelf);
    VTestDriver___024root___eval_initial__TOP__51(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__53(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__53\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__54(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__54\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__52(vlSelf);
    VTestDriver___024root___eval_initial__TOP__53(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__55(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__55\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0xeU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0xfU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x10U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x11U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x12U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x13U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x14U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x15U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x16U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x17U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__56(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__56\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x18U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x19U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x1aU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x1bU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x1cU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x1dU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x1eU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x1fU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x20U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x21U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x22U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x23U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__57(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__57\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x24U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x25U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x26U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM[0x27U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT____Vlvbound_h2b0667fd__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__source 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                    [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__address 
        = ((0x7ffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x11U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [1U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [1U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__58(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__58\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [1U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [1U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__source_1 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                    [1U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__sink 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                             [1U] >> 0x14U))) << 0x34U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                               [2U])) << 0x14U) | (QData)((IData)(
                                                                  (0xfffffU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                                   [3U])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__59(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__59\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0xaU] << 0x14U) | (0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                [0xbU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                               [9U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [9U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                             [8U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [8U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                             [7U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [7U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                             [6U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [6U] >> 0xcU) | ((IData)((((QData)((IData)(
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                       [4U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                                   [5U])))) 
                             << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                      [4U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                       [5U])))) >> 0xcU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                         [4U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                          [5U]))) >> 0x20U)) 
              << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((0xfff00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [3U]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                [4U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                            [5U]))) 
                              >> 0x20U)) >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x12U] << 0x14U) | (0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                 [0x13U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x12U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                [0x11U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                [0x10U] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                [0xfU] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                               [0xeU] << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0xcU) | ((IData)((((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                         [0xcU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                          [0xdU])))) 
                               << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                      [0xcU])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                       [0xdU])))) >> 0xcU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                         [0xcU])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                          [0xdU]))) 
                       >> 0x20U)) << 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((0xfff00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0xbU]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                  [0xcU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                              [0xdU]))) 
                                >> 0x20U)) >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [0x13U] >> 0x14U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__60(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__60\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                 [0x13U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__watchdog 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x13U]) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                        [0x14U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                             [0x14U] >> 0x1aU))) << 0x3aU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                               [0x15U])) << 0x1aU) 
              | (QData)((IData)((0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                 [0x16U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x25U] << 0x1aU) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                 [0x26U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x25U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                              [0x24U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x24U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                              [0x23U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x23U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                              [0x22U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x22U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                              [0x21U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x21U] >> 6U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                        [0x1fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                                    [0x20U])))) 
                              << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                      [0x1fU])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                       [0x20U])))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                 [0x1fU])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                             [0x20U]))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((0xfc000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
            [0x1eU]) | ((IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                   [0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
                                                               [0x20U]))) 
                                 >> 0x20U)) >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
           [0x26U] >> 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__watchdog_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___RANDOM
        [0x27U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__61(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__61\n"); );
    // Init
    SData/*9:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__unnamedblk1__DOT__i;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__unnamedblk1__DOT__i = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__54(vlSelf);
    VTestDriver___024root___eval_initial__TOP__55(vlSelf);
    VTestDriver___024root___eval_initial__TOP__56(vlSelf);
    VTestDriver___024root___eval_initial__TOP__57(vlSelf);
    VTestDriver___024root___eval_initial__TOP__58(vlSelf);
    VTestDriver___024root___eval_initial__TOP__59(vlSelf);
    VTestDriver___024root___eval_initial__TOP__60(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x244U > (IData)(TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__unnamedblk1__DOT__i))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT____Vlvbound_h250b5004__0 
            = VL_RANDOM_I();
        if (VL_LIKELY((0x243U >= (IData)(TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM[TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__unnamedblk1__DOT__i] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT____Vlvbound_h250b5004__0;
        }
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__unnamedblk1__DOT__i 
            = (0x3ffU & ((IData)(1U) + (IData)(TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__unnamedblk1__DOT__i)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__a_first_counter 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__size 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__source 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                     [0U] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__62(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__62\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__address 
        = ((0x7ffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x11U)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__d_first_counter 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [1U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [1U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__size_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [1U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__source_1 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                     [1U] >> 0xaU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__63(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__63\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x20U] << 0x16U) | (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                 [0x21U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x20U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x1fU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x1fU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x1eU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x1eU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x1dU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x1dU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x1cU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x1cU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x1bU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x1bU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x1aU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x1aU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x19U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x19U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x18U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x18U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x17U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x17U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x16U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x16U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x15U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x15U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x14U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x14U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x13U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xeU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x13U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x12U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0xfU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x12U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x11U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x10U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0x10U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x11U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                [0xfU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x12U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0xeU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x13U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0xdU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x14U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0xdU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0xcU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x15U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0xcU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0xbU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x16U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0xbU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0xaU] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x17U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [9U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x18U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [9U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                             [8U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x19U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [8U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                             [7U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1aU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [7U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                             [6U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1bU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [6U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                             [5U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1cU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [5U] >> 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                             [4U] << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1dU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [4U] >> 0xaU) | ((IData)((((QData)((IData)(
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                       [2U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                                   [3U])))) 
                             << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1eU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                      [2U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                       [3U])))) >> 0xaU) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                         [2U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                          [3U]))) >> 0x20U)) 
              << 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight[0x1fU] 
        = ((0xffc00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [1U]) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                [2U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                            [3U]))) 
                              >> 0x20U)) >> 0xaU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__64(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__64\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    VlWide<66>/*2111:0*/ __Vtemp_64;
    VlWide<67>/*2143:0*/ __Vtemp_65;
    VlWide<68>/*2175:0*/ __Vtemp_66;
    VlWide<69>/*2207:0*/ __Vtemp_67;
    VlWide<70>/*2239:0*/ __Vtemp_68;
    VlWide<71>/*2271:0*/ __Vtemp_69;
    VlWide<72>/*2303:0*/ __Vtemp_70;
    VlWide<73>/*2335:0*/ __Vtemp_71;
    VlWide<74>/*2367:0*/ __Vtemp_72;
    VlWide<75>/*2399:0*/ __Vtemp_73;
    VlWide<76>/*2431:0*/ __Vtemp_74;
    VlWide<77>/*2463:0*/ __Vtemp_75;
    VlWide<78>/*2495:0*/ __Vtemp_76;
    VlWide<79>/*2527:0*/ __Vtemp_77;
    VlWide<80>/*2559:0*/ __Vtemp_78;
    VlWide<81>/*2591:0*/ __Vtemp_79;
    VlWide<82>/*2623:0*/ __Vtemp_80;
    VlWide<83>/*2655:0*/ __Vtemp_81;
    VlWide<84>/*2687:0*/ __Vtemp_82;
    VlWide<85>/*2719:0*/ __Vtemp_83;
    VlWide<86>/*2751:0*/ __Vtemp_84;
    VlWide<87>/*2783:0*/ __Vtemp_85;
    VlWide<88>/*2815:0*/ __Vtemp_86;
    VlWide<89>/*2847:0*/ __Vtemp_87;
    VlWide<90>/*2879:0*/ __Vtemp_88;
    VlWide<91>/*2911:0*/ __Vtemp_89;
    VlWide<92>/*2943:0*/ __Vtemp_90;
    VlWide<93>/*2975:0*/ __Vtemp_91;
    VlWide<94>/*3007:0*/ __Vtemp_92;
    VlWide<95>/*3039:0*/ __Vtemp_93;
    VlWide<96>/*3071:0*/ __Vtemp_94;
    VlWide<97>/*3103:0*/ __Vtemp_95;
    VlWide<98>/*3135:0*/ __Vtemp_96;
    VlWide<99>/*3167:0*/ __Vtemp_97;
    VlWide<100>/*3199:0*/ __Vtemp_98;
    VlWide<101>/*3231:0*/ __Vtemp_99;
    VlWide<102>/*3263:0*/ __Vtemp_100;
    VlWide<103>/*3295:0*/ __Vtemp_101;
    VlWide<104>/*3327:0*/ __Vtemp_102;
    VlWide<105>/*3359:0*/ __Vtemp_103;
    VlWide<106>/*3391:0*/ __Vtemp_104;
    VlWide<107>/*3423:0*/ __Vtemp_105;
    VlWide<108>/*3455:0*/ __Vtemp_106;
    VlWide<109>/*3487:0*/ __Vtemp_107;
    VlWide<110>/*3519:0*/ __Vtemp_108;
    VlWide<111>/*3551:0*/ __Vtemp_109;
    VlWide<112>/*3583:0*/ __Vtemp_110;
    VlWide<113>/*3615:0*/ __Vtemp_111;
    VlWide<114>/*3647:0*/ __Vtemp_112;
    VlWide<115>/*3679:0*/ __Vtemp_113;
    VlWide<116>/*3711:0*/ __Vtemp_114;
    VlWide<117>/*3743:0*/ __Vtemp_115;
    VlWide<118>/*3775:0*/ __Vtemp_116;
    VlWide<119>/*3807:0*/ __Vtemp_117;
    VlWide<120>/*3839:0*/ __Vtemp_118;
    VlWide<121>/*3871:0*/ __Vtemp_119;
    VlWide<122>/*3903:0*/ __Vtemp_120;
    VlWide<123>/*3935:0*/ __Vtemp_121;
    VlWide<124>/*3967:0*/ __Vtemp_122;
    VlWide<125>/*3999:0*/ __Vtemp_123;
    VlWide<126>/*4031:0*/ __Vtemp_124;
    VlWide<127>/*4063:0*/ __Vtemp_125;
    VlWide<128>/*4095:0*/ __Vtemp_126;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x61U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x60U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x5fU];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x5eU];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x5dU];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x5cU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x5bU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x5aU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x59U];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x58U];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x57U];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x56U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x55U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x54U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x53U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x52U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x51U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x50U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x4fU];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x4eU];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x4dU];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x4cU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x4bU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x4aU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x49U];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x48U];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x47U];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x46U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x45U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x44U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x43U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x42U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x41U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x40U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x3fU];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x3eU];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x3dU];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x3cU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x3bU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x3aU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x39U];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x38U];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x37U];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x36U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x35U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x34U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x33U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x32U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x31U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x30U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x2fU];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x2eU];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x2dU];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x2cU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x2bU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x2aU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x29U];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x28U];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x27U];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x26U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x25U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x24U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                  [0x22U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                              [0x23U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                   [0x22U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                               [0x23U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_63, __Vtemp_62, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x62U]);
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_64, __Vtemp_63, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x63U]);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_65, __Vtemp_64, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x64U]);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_66, __Vtemp_65, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x65U]);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_67, __Vtemp_66, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x66U]);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_68, __Vtemp_67, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x67U]);
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_69, __Vtemp_68, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x68U]);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_70, __Vtemp_69, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x69U]);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_71, __Vtemp_70, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x6aU]);
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_72, __Vtemp_71, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x6bU]);
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_73, __Vtemp_72, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x6cU]);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_74, __Vtemp_73, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x6dU]);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_75, __Vtemp_74, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x6eU]);
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_76, __Vtemp_75, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x6fU]);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_77, __Vtemp_76, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x70U]);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_78, __Vtemp_77, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x71U]);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_79, __Vtemp_78, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x72U]);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_80, __Vtemp_79, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x73U]);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_81, __Vtemp_80, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x74U]);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_82, __Vtemp_81, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x75U]);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_83, __Vtemp_82, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x76U]);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_84, __Vtemp_83, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x77U]);
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_85, __Vtemp_84, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x78U]);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_86, __Vtemp_85, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x79U]);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_87, __Vtemp_86, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x7aU]);
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_88, __Vtemp_87, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x7bU]);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_89, __Vtemp_88, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x7cU]);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_90, __Vtemp_89, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x7dU]);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_91, __Vtemp_90, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x7eU]);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_92, __Vtemp_91, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x7fU]);
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_93, __Vtemp_92, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x80U]);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_94, __Vtemp_93, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x81U]);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_95, __Vtemp_94, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x82U]);
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_96, __Vtemp_95, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x83U]);
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_97, __Vtemp_96, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x84U]);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_98, __Vtemp_97, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x85U]);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_99, __Vtemp_98, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x86U]);
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_100, __Vtemp_99, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x87U]);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_101, __Vtemp_100, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x88U]);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_102, __Vtemp_101, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x89U]);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_103, __Vtemp_102, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x8aU]);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_104, __Vtemp_103, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x8bU]);
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_105, __Vtemp_104, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x8cU]);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_106, __Vtemp_105, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x8dU]);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_107, __Vtemp_106, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x8eU]);
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_108, __Vtemp_107, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x8fU]);
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_109, __Vtemp_108, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x90U]);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_110, __Vtemp_109, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x91U]);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_111, __Vtemp_110, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x92U]);
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_112, __Vtemp_111, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x93U]);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_113, __Vtemp_112, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x94U]);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_114, __Vtemp_113, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x95U]);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_115, __Vtemp_114, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x96U]);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_116, __Vtemp_115, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x97U]);
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_117, __Vtemp_116, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x98U]);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_118, __Vtemp_117, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x99U]);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_119, __Vtemp_118, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x9aU]);
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_120, __Vtemp_119, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x9bU]);
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_121, __Vtemp_120, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x9cU]);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_122, __Vtemp_121, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x9dU]);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_123, __Vtemp_122, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x9eU]);
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_124, __Vtemp_123, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x9fU]);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_125, __Vtemp_124, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xa0U]);
    VL_CONCAT_WWI(4086,4064,22, __Vtemp_126, __Vtemp_125, 
                  (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                   [0xa1U]));
    VL_CONCAT_WIW(4096,10,4086, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_opcodes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                   [0x21U] >> 0x16U), __Vtemp_126);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__65(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__65\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    VlWide<66>/*2111:0*/ __Vtemp_64;
    VlWide<67>/*2143:0*/ __Vtemp_65;
    VlWide<68>/*2175:0*/ __Vtemp_66;
    VlWide<69>/*2207:0*/ __Vtemp_67;
    VlWide<70>/*2239:0*/ __Vtemp_68;
    VlWide<71>/*2271:0*/ __Vtemp_69;
    VlWide<72>/*2303:0*/ __Vtemp_70;
    VlWide<73>/*2335:0*/ __Vtemp_71;
    VlWide<74>/*2367:0*/ __Vtemp_72;
    VlWide<75>/*2399:0*/ __Vtemp_73;
    VlWide<76>/*2431:0*/ __Vtemp_74;
    VlWide<77>/*2463:0*/ __Vtemp_75;
    VlWide<78>/*2495:0*/ __Vtemp_76;
    VlWide<79>/*2527:0*/ __Vtemp_77;
    VlWide<80>/*2559:0*/ __Vtemp_78;
    VlWide<81>/*2591:0*/ __Vtemp_79;
    VlWide<82>/*2623:0*/ __Vtemp_80;
    VlWide<83>/*2655:0*/ __Vtemp_81;
    VlWide<84>/*2687:0*/ __Vtemp_82;
    VlWide<85>/*2719:0*/ __Vtemp_83;
    VlWide<86>/*2751:0*/ __Vtemp_84;
    VlWide<87>/*2783:0*/ __Vtemp_85;
    VlWide<88>/*2815:0*/ __Vtemp_86;
    VlWide<89>/*2847:0*/ __Vtemp_87;
    VlWide<90>/*2879:0*/ __Vtemp_88;
    VlWide<91>/*2911:0*/ __Vtemp_89;
    VlWide<92>/*2943:0*/ __Vtemp_90;
    VlWide<93>/*2975:0*/ __Vtemp_91;
    VlWide<94>/*3007:0*/ __Vtemp_92;
    VlWide<95>/*3039:0*/ __Vtemp_93;
    VlWide<96>/*3071:0*/ __Vtemp_94;
    VlWide<97>/*3103:0*/ __Vtemp_95;
    VlWide<98>/*3135:0*/ __Vtemp_96;
    VlWide<99>/*3167:0*/ __Vtemp_97;
    VlWide<100>/*3199:0*/ __Vtemp_98;
    VlWide<101>/*3231:0*/ __Vtemp_99;
    VlWide<102>/*3263:0*/ __Vtemp_100;
    VlWide<103>/*3295:0*/ __Vtemp_101;
    VlWide<104>/*3327:0*/ __Vtemp_102;
    VlWide<105>/*3359:0*/ __Vtemp_103;
    VlWide<106>/*3391:0*/ __Vtemp_104;
    VlWide<107>/*3423:0*/ __Vtemp_105;
    VlWide<108>/*3455:0*/ __Vtemp_106;
    VlWide<109>/*3487:0*/ __Vtemp_107;
    VlWide<110>/*3519:0*/ __Vtemp_108;
    VlWide<111>/*3551:0*/ __Vtemp_109;
    VlWide<112>/*3583:0*/ __Vtemp_110;
    VlWide<113>/*3615:0*/ __Vtemp_111;
    VlWide<114>/*3647:0*/ __Vtemp_112;
    VlWide<115>/*3679:0*/ __Vtemp_113;
    VlWide<116>/*3711:0*/ __Vtemp_114;
    VlWide<117>/*3743:0*/ __Vtemp_115;
    VlWide<118>/*3775:0*/ __Vtemp_116;
    VlWide<119>/*3807:0*/ __Vtemp_117;
    VlWide<120>/*3839:0*/ __Vtemp_118;
    VlWide<121>/*3871:0*/ __Vtemp_119;
    VlWide<122>/*3903:0*/ __Vtemp_120;
    VlWide<123>/*3935:0*/ __Vtemp_121;
    VlWide<124>/*3967:0*/ __Vtemp_122;
    VlWide<125>/*3999:0*/ __Vtemp_123;
    VlWide<126>/*4031:0*/ __Vtemp_124;
    VlWide<127>/*4063:0*/ __Vtemp_125;
    VlWide<128>/*4095:0*/ __Vtemp_126;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xe1U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xe0U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xdfU];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xdeU];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xddU];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xdcU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xdbU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xdaU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd9U];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd8U];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd7U];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd6U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd5U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd4U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd3U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd2U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd1U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xd0U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xcfU];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xceU];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xcdU];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xccU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xcbU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xcaU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc9U];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc8U];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc7U];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc6U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc5U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc4U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc3U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc2U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc1U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xc0U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xbfU];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xbeU];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xbdU];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xbcU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xbbU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xbaU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb9U];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb8U];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb7U];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb6U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb5U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb4U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb3U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb2U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb1U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xb0U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xafU];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xaeU];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xadU];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xacU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xabU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xaaU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xa9U];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xa8U];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xa7U];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xa6U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xa5U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0xa4U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                  [0xa2U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                              [0xa3U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                   [0xa2U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                               [0xa3U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_63, __Vtemp_62, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xe2U]);
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_64, __Vtemp_63, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xe3U]);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_65, __Vtemp_64, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xe4U]);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_66, __Vtemp_65, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xe5U]);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_67, __Vtemp_66, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xe6U]);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_68, __Vtemp_67, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xe7U]);
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_69, __Vtemp_68, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xe8U]);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_70, __Vtemp_69, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xe9U]);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_71, __Vtemp_70, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xeaU]);
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_72, __Vtemp_71, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xebU]);
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_73, __Vtemp_72, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xecU]);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_74, __Vtemp_73, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xedU]);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_75, __Vtemp_74, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xeeU]);
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_76, __Vtemp_75, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xefU]);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_77, __Vtemp_76, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf0U]);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_78, __Vtemp_77, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf1U]);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_79, __Vtemp_78, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf2U]);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_80, __Vtemp_79, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf3U]);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_81, __Vtemp_80, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf4U]);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_82, __Vtemp_81, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf5U]);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_83, __Vtemp_82, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf6U]);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_84, __Vtemp_83, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf7U]);
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_85, __Vtemp_84, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf8U]);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_86, __Vtemp_85, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xf9U]);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_87, __Vtemp_86, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xfaU]);
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_88, __Vtemp_87, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xfbU]);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_89, __Vtemp_88, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xfcU]);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_90, __Vtemp_89, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xfdU]);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_91, __Vtemp_90, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xfeU]);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_92, __Vtemp_91, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0xffU]);
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_93, __Vtemp_92, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x100U]);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_94, __Vtemp_93, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x101U]);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_95, __Vtemp_94, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x102U]);
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_96, __Vtemp_95, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x103U]);
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_97, __Vtemp_96, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x104U]);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_98, __Vtemp_97, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x105U]);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_99, __Vtemp_98, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x106U]);
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_100, __Vtemp_99, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x107U]);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_101, __Vtemp_100, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x108U]);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_102, __Vtemp_101, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x109U]);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_103, __Vtemp_102, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x10aU]);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_104, __Vtemp_103, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x10bU]);
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_105, __Vtemp_104, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x10cU]);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_106, __Vtemp_105, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x10dU]);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_107, __Vtemp_106, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x10eU]);
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_108, __Vtemp_107, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x10fU]);
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_109, __Vtemp_108, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x110U]);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_110, __Vtemp_109, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x111U]);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_111, __Vtemp_110, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x112U]);
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_112, __Vtemp_111, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x113U]);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_113, __Vtemp_112, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x114U]);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_114, __Vtemp_113, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x115U]);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_115, __Vtemp_114, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x116U]);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_116, __Vtemp_115, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x117U]);
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_117, __Vtemp_116, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x118U]);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_118, __Vtemp_117, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x119U]);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_119, __Vtemp_118, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x11aU]);
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_120, __Vtemp_119, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x11bU]);
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_121, __Vtemp_120, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x11cU]);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_122, __Vtemp_121, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x11dU]);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_123, __Vtemp_122, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x11eU]);
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_124, __Vtemp_123, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x11fU]);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_125, __Vtemp_124, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x120U]);
    VL_CONCAT_WWI(4086,4064,22, __Vtemp_126, __Vtemp_125, 
                  (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                   [0x121U]));
    VL_CONCAT_WIW(4096,10,4086, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_sizes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                   [0xa1U] >> 0x16U), __Vtemp_126);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__66(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__66\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__a_first_counter_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [0x121U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__d_first_counter_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                 [0x121U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__watchdog 
        = ((0xff000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x121U]) | (0xffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                         [0x122U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__67(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__67\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x141U] << 0x18U) | (0xffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                  [0x142U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x141U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x140U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x140U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x13fU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x13fU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x13eU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x13eU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x13dU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x13dU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x13cU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x13cU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x13bU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x13bU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x13aU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x13aU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x139U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x139U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x138U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x138U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x137U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x137U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x136U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x136U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x135U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x135U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x134U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0xeU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x134U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x133U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x133U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x132U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x10U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x132U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x131U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x11U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x131U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x130U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x12U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x130U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x12fU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x13U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x12fU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x12eU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x14U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x12eU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x12dU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x15U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x12dU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x12cU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x16U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x12cU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x12bU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x17U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x12bU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x12aU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x18U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x12aU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x129U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x19U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x129U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x128U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x1aU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x128U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x127U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x1bU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x127U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x126U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x1cU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x126U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                               [0x125U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x1dU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x125U] >> 8U) | ((IData)((((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                         [0x123U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                          [0x124U])))) 
                               << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x1eU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                      [0x123U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                       [0x124U])))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                 [0x123U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                             [0x124U]))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_1[0x1fU] 
        = ((0xff000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
            [0x122U]) | ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                    [0x123U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                                [0x124U]))) 
                                  >> 0x20U)) >> 8U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__68(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__68\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    VlWide<66>/*2111:0*/ __Vtemp_64;
    VlWide<67>/*2143:0*/ __Vtemp_65;
    VlWide<68>/*2175:0*/ __Vtemp_66;
    VlWide<69>/*2207:0*/ __Vtemp_67;
    VlWide<70>/*2239:0*/ __Vtemp_68;
    VlWide<71>/*2271:0*/ __Vtemp_69;
    VlWide<72>/*2303:0*/ __Vtemp_70;
    VlWide<73>/*2335:0*/ __Vtemp_71;
    VlWide<74>/*2367:0*/ __Vtemp_72;
    VlWide<75>/*2399:0*/ __Vtemp_73;
    VlWide<76>/*2431:0*/ __Vtemp_74;
    VlWide<77>/*2463:0*/ __Vtemp_75;
    VlWide<78>/*2495:0*/ __Vtemp_76;
    VlWide<79>/*2527:0*/ __Vtemp_77;
    VlWide<80>/*2559:0*/ __Vtemp_78;
    VlWide<81>/*2591:0*/ __Vtemp_79;
    VlWide<82>/*2623:0*/ __Vtemp_80;
    VlWide<83>/*2655:0*/ __Vtemp_81;
    VlWide<84>/*2687:0*/ __Vtemp_82;
    VlWide<85>/*2719:0*/ __Vtemp_83;
    VlWide<86>/*2751:0*/ __Vtemp_84;
    VlWide<87>/*2783:0*/ __Vtemp_85;
    VlWide<88>/*2815:0*/ __Vtemp_86;
    VlWide<89>/*2847:0*/ __Vtemp_87;
    VlWide<90>/*2879:0*/ __Vtemp_88;
    VlWide<91>/*2911:0*/ __Vtemp_89;
    VlWide<92>/*2943:0*/ __Vtemp_90;
    VlWide<93>/*2975:0*/ __Vtemp_91;
    VlWide<94>/*3007:0*/ __Vtemp_92;
    VlWide<95>/*3039:0*/ __Vtemp_93;
    VlWide<96>/*3071:0*/ __Vtemp_94;
    VlWide<97>/*3103:0*/ __Vtemp_95;
    VlWide<98>/*3135:0*/ __Vtemp_96;
    VlWide<99>/*3167:0*/ __Vtemp_97;
    VlWide<100>/*3199:0*/ __Vtemp_98;
    VlWide<101>/*3231:0*/ __Vtemp_99;
    VlWide<102>/*3263:0*/ __Vtemp_100;
    VlWide<103>/*3295:0*/ __Vtemp_101;
    VlWide<104>/*3327:0*/ __Vtemp_102;
    VlWide<105>/*3359:0*/ __Vtemp_103;
    VlWide<106>/*3391:0*/ __Vtemp_104;
    VlWide<107>/*3423:0*/ __Vtemp_105;
    VlWide<108>/*3455:0*/ __Vtemp_106;
    VlWide<109>/*3487:0*/ __Vtemp_107;
    VlWide<110>/*3519:0*/ __Vtemp_108;
    VlWide<111>/*3551:0*/ __Vtemp_109;
    VlWide<112>/*3583:0*/ __Vtemp_110;
    VlWide<113>/*3615:0*/ __Vtemp_111;
    VlWide<114>/*3647:0*/ __Vtemp_112;
    VlWide<115>/*3679:0*/ __Vtemp_113;
    VlWide<116>/*3711:0*/ __Vtemp_114;
    VlWide<117>/*3743:0*/ __Vtemp_115;
    VlWide<118>/*3775:0*/ __Vtemp_116;
    VlWide<119>/*3807:0*/ __Vtemp_117;
    VlWide<120>/*3839:0*/ __Vtemp_118;
    VlWide<121>/*3871:0*/ __Vtemp_119;
    VlWide<122>/*3903:0*/ __Vtemp_120;
    VlWide<123>/*3935:0*/ __Vtemp_121;
    VlWide<124>/*3967:0*/ __Vtemp_122;
    VlWide<125>/*3999:0*/ __Vtemp_123;
    VlWide<126>/*4031:0*/ __Vtemp_124;
    VlWide<127>/*4063:0*/ __Vtemp_125;
    VlWide<128>/*4095:0*/ __Vtemp_126;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x202U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x201U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x200U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1ffU];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1feU];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1fdU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1fcU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1fbU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1faU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f9U];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f8U];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f7U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f6U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f5U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f4U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f3U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f2U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f1U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1f0U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1efU];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1eeU];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1edU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1ecU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1ebU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1eaU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e9U];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e8U];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e7U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e6U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e5U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e4U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e3U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e2U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e1U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1e0U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1dfU];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1deU];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1ddU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1dcU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1dbU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1daU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d9U];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d8U];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d7U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d6U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d5U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d4U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d3U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d2U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d1U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1d0U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1cfU];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1ceU];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1cdU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1ccU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1cbU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1caU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1c9U];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1c8U];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1c7U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1c6U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
        [0x1c5U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                  [0x1c3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                              [0x1c4U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                   [0x1c3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                                                               [0x1c4U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_63, __Vtemp_62, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x203U]);
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_64, __Vtemp_63, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x204U]);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_65, __Vtemp_64, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x205U]);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_66, __Vtemp_65, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x206U]);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_67, __Vtemp_66, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x207U]);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_68, __Vtemp_67, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x208U]);
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_69, __Vtemp_68, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x209U]);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_70, __Vtemp_69, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x20aU]);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_71, __Vtemp_70, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x20bU]);
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_72, __Vtemp_71, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x20cU]);
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_73, __Vtemp_72, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x20dU]);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_74, __Vtemp_73, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x20eU]);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_75, __Vtemp_74, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x20fU]);
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_76, __Vtemp_75, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x210U]);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_77, __Vtemp_76, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x211U]);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_78, __Vtemp_77, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x212U]);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_79, __Vtemp_78, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x213U]);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_80, __Vtemp_79, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x214U]);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_81, __Vtemp_80, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x215U]);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_82, __Vtemp_81, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x216U]);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_83, __Vtemp_82, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x217U]);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_84, __Vtemp_83, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x218U]);
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_85, __Vtemp_84, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x219U]);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_86, __Vtemp_85, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x21aU]);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_87, __Vtemp_86, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x21bU]);
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_88, __Vtemp_87, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x21cU]);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_89, __Vtemp_88, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x21dU]);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_90, __Vtemp_89, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x21eU]);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_91, __Vtemp_90, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x21fU]);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_92, __Vtemp_91, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x220U]);
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_93, __Vtemp_92, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x221U]);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_94, __Vtemp_93, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x222U]);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_95, __Vtemp_94, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x223U]);
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_96, __Vtemp_95, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x224U]);
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_97, __Vtemp_96, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x225U]);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_98, __Vtemp_97, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x226U]);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_99, __Vtemp_98, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x227U]);
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_100, __Vtemp_99, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x228U]);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_101, __Vtemp_100, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x229U]);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_102, __Vtemp_101, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x22aU]);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_103, __Vtemp_102, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x22bU]);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_104, __Vtemp_103, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x22cU]);
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_105, __Vtemp_104, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x22dU]);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_106, __Vtemp_105, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x22eU]);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_107, __Vtemp_106, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x22fU]);
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_108, __Vtemp_107, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x230U]);
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_109, __Vtemp_108, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x231U]);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_110, __Vtemp_109, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x232U]);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_111, __Vtemp_110, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x233U]);
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_112, __Vtemp_111, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x234U]);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_113, __Vtemp_112, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x235U]);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_114, __Vtemp_113, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x236U]);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_115, __Vtemp_114, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x237U]);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_116, __Vtemp_115, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x238U]);
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_117, __Vtemp_116, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x239U]);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_118, __Vtemp_117, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x23aU]);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_119, __Vtemp_118, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x23bU]);
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_120, __Vtemp_119, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x23cU]);
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_121, __Vtemp_120, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x23dU]);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_122, __Vtemp_121, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x23eU]);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_123, __Vtemp_122, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x23fU]);
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_124, __Vtemp_123, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x240U]);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_125, __Vtemp_124, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                  [0x241U]);
    VL_CONCAT_WWI(4088,4064,24, __Vtemp_126, __Vtemp_125, 
                  (0xffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                   [0x242U]));
    VL_CONCAT_WIW(4096,8,4088, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT__inflight_sizes_1, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__monitor__DOT___RANDOM
                   [0x1c2U] >> 0x18U), __Vtemp_126);
}
