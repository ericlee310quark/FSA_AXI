// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1489(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1489\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                 [0x91U] >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                 [0x91U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
        = ((0xff800000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x91U]) | (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                        [0x92U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1490(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1490\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0xa1U] << 0x17U) | (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                 [0xa2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0xa1U] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0xa0U] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0xa0U] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x9fU] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x9fU] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x9eU] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x9eU] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x9dU] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x9dU] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x9cU] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x9cU] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x9bU] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x9bU] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x9aU] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x9aU] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x99U] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x99U] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x98U] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x98U] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x97U] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x97U] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x96U] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x96U] >> 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                              [0x95U] << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x95U] >> 9U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                                        [0x93U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                                                    [0x94U])))) 
                              << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                      [0x93U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                       [0x94U])))) 
            >> 9U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                                 [0x93U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                                             [0x94U]))) 
                               >> 0x20U)) << 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((0xff800000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x92U]) | ((IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                                   [0x93U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                                                               [0x94U]))) 
                                 >> 0x20U)) >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
        = ((0xfe000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
            [0x122U]) | (0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT___RANDOM
                         [0x123U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1484(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1485(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1486(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1487(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1488(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1491(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1491\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__1484(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1485(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1486(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1487(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1488(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1489(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1490(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT___RANDOM
                             [0U] >> 1U))) << 6U) | (QData)((IData)(
                                                                    (0x3fU 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT___RANDOM
                                                                     [1U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___RANDOM
                             [0U] >> 1U))) << 0x19U) 
           | (QData)((IData)((0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___RANDOM
                              [1U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1492(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1492\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__acknum 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__dOrig 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__dToggle 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__r_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__d_denied_r 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__gennum 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___RANDOM
                   [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__aToggle_r 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 0xeU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1493(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1493\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1491(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1492(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[9U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xaU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xbU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1494(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1494\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xcU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM[0xdU] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT____Vlvbound_h0b2075dc__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__address 
        = ((0xfffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x10U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                   [1U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [1U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xaU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1495(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1495\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__source_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                   [1U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__inflight 
        = ((0xfff8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                       [1U] >> 0x10U)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                          [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                             [2U] >> 3U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                               [3U])) << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                                [4U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                             [4U] >> 3U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                               [5U])) << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                   [6U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                   [6U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__watchdog 
        = ((0xfffff800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [6U]) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                     [7U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1496(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1496\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                      [7U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__watchdog_1 
        = ((0xfffffff8U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
            [0xcU]) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT___RANDOM
                       [0xdU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1497(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1497\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT____Vlvbound_h9bac8a17__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__1493(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1494(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1495(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1496(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_source 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                   [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_address 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                      [0U] >> 0xeU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1498(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1498\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
        = ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                    [0U] >> 0x1cU)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                                       [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [2U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1499(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1499\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1497(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1498(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                      [0U] >> 0xeU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1500(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1500\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
        = ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                    [0U] >> 0x1cU)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                                       [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [1U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [1U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [1U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                   [1U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                   [1U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                   [1U] >> 0x18U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1501(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1501\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
           [1U] >> 0x1cU);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_1 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
           [3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                   [3U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                   [3U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog_1 
        = ((0xfffc0000U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
            [3U]) | (0x3ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___RANDOM
                     [4U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1502(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1502\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__1499(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1500(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1501(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__head_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_counter 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___RANDOM
                   [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__is_body 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___RANDOM
                 [0U] >> 8U));
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1503(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1503\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
                                     [2U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[3U] 
        = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
                                      [2U]))) >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[4U] 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
           [0U] >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1504(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1504\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1502(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1503(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__data_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM
           [3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__data_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM
           [3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_0_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_0_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_0_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1505(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1505\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_reg 
        = (0x3fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___RANDOM
                          [0U] >> 1U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1506(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1506\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1504(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1505(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_2_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_2_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_2_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_3_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_3_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_3_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_4_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
           [0U]);
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM
           [2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1507(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1507\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM
           [2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1508(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1508\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1506(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1507(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM
           [2U]);
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM
           [2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1509(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1509\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__cmd 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
        = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                            [1U])) << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                                                               [2U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len 
        = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                            [3U])) << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                                                               [4U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__body_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__bodyValid 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
           [6U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__idx 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                 [6U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                   [6U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1510(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1510\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1508(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1509(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____Vlvbound_h06f15279__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address 
        = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                      [0U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                    [0U] >> 0x1cU)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                                       [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1511(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1511\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [1U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [1U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [1U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
           [1U] >> 0x1cU);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
           [3U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1512(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1512\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [3U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [3U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((0xfffc0000U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
            [3U]) | (0x3ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___RANDOM
                     [4U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1513(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1513\n"); );
    // Init
    QData/*63:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__1510(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1511(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1512(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 2U));
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U] 
        = (0x7fffffffffffffffULL & TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U] 
        = (0x7fffffffffffffffULL & TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 1U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1514(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1514\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1515(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1515\n"); );
    // Init
    QData/*63:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1513(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1514(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U] 
        = (0x1fffffffffffULL & TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U] 
        = (0x1fffffffffffULL & TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[8U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1516(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1516\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1517(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1517\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1515(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1516(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1518(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1518\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1519(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1519\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1517(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1518(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1520(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1520\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1521(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1521\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1519(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1520(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1522(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1522\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1523(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1523\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1521(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1522(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1524(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1524\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1525(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1525\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1523(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1524(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1526(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1526\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1527(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1527\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1525(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1526(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1528(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1528\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1529(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1529\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1527(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1528(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1530(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1530\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1531(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1531\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1532(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1532\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1529(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1530(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1531(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1533(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1533\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1534(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1534\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1532(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1533(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1535(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1535\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1536(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1536\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1534(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1535(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1537(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1537\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1538(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1538\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1536(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1537(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1539(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1539\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1540(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1540\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1538(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1539(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1541(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1541\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1542(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1542\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1540(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1541(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1543(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1543\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1544(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1544\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1542(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1543(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1545(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1545\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1546(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1546\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1547(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1547\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1544(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1545(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1546(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1548(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1548\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1549(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1549\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1547(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1548(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1550(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1550\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1551(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1551\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1549(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1550(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1552(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1552\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1553(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1553\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1551(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1552(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1554(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1554\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1555(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1555\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1553(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1554(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1556(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1556\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1557(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1557\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1555(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1556(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1558(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1558\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1559(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1559\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1557(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1558(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1560(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1560\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1561(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1561\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1562(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1562\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1559(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1560(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1561(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1563(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1563\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1564(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1564\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1562(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1563(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1565(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1565\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1566(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1566\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1564(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1565(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1567(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1567\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1568(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1568\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1566(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1567(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1569(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1569\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1570(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1570\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1568(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1569(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1571(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1571\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1572(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1572\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1570(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1571(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1573(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1573\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1574(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1574\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1572(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1573(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1575(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1575\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1576(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1576\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1577(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1577\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1574(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1575(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1576(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1578(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1578\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1579(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1579\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1577(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1578(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1580(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1580\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1581(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1581\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1579(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1580(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1582(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1582\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1583(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1583\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1581(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1582(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1584(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1584\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1585(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1585\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1583(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1584(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1586(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1586\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1587(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1587\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1585(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1586(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1588(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1588\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1589(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1589\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1587(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1588(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen_reg 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1590(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1590\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [6U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1591(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1591\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1592(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1592\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1589(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1590(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1591(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1593(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1593\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1594(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1594\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1592(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1593(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1595(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1595\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1596(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1596\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1594(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1595(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1597(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1597\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1598(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1598\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1596(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1597(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1599(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1599\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1600(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1600\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1598(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1599(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1601(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1601\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1602(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1602\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1600(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1601(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1603(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1603\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1604(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1604\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1602(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1603(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1605(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1605\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1606(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1606\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1607(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1607\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1604(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1605(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1606(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1608(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1608\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1609(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1609\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1607(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1608(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1610(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1610\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1611(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1611\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1609(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1610(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1612(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1612\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1613(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1613\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1611(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1612(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1614(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1614\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1615(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1615\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1613(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1614(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1616(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1616\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1617(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1617\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1615(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1616(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1618(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1618\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1619(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1619\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__1617(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1618(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1620(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1620\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1621(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1621\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1622(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1622\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1619(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1620(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1621(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1623(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1623\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1624(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1624\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1622(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1623(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1625(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1625\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1626(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1626\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1624(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1625(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1627(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1627\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1628(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1628\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__1626(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1627(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1629(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1629\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}
