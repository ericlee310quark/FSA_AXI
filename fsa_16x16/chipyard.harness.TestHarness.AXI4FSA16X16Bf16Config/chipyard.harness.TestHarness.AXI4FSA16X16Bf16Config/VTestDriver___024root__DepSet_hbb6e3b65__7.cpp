// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__961(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__961\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_11;
    // Body
    __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_2_req_memStride)) 
                              << 0x2aU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_1_req_memStride)) 
                                            << 0x15U) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_0_req_memStride)))));
    __Vtemp_5[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_3_req_memStride 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_2_req_memStride)) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_1_req_memStride)) 
                                                << 0x15U) 
                                               | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_0_req_memStride)))) 
                                           >> 0x20U)));
    __Vtemp_5[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_4_req_memStride 
                      << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_3_req_memStride 
                                   >> 1U));
    __Vtemp_5[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_6_req_memStride 
                      << 0x1eU) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_5_req_memStride 
                                    << 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_4_req_memStride 
                                              >> 0xcU)));
    __Vtemp_5[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_7_req_memStride 
                      << 0x13U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_6_req_memStride 
                                   >> 2U));
    __Vtemp_5[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_7_req_memStride 
                     >> 0xdU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT___GEN_35 
        = ((0xa7U >= (0xffU & ((IData)(0x15U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value))))
            ? (0x1fffffU & (((0U == (0x1fU & ((IData)(0x15U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value))))
                              ? 0U : (__Vtemp_5[(((IData)(0x14U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x15U) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x15U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value)))))) 
                            | (__Vtemp_5[(7U & (((IData)(0x15U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value)) 
                                                >> 5U))] 
                               >> (0x1fU & ((IData)(0x15U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_6_req_repeat)) 
                              << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_5_req_repeat)) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_4_req_repeat)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_3_req_repeat)) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_2_req_repeat) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_1_req_repeat) 
                                                                        << 9U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_0_req_repeat))))))))));
    __Vtemp_6[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_7_req_repeat) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_6_req_repeat)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_5_req_repeat)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_4_req_repeat)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_3_req_repeat)) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_2_req_repeat) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_1_req_repeat) 
                                                                            << 9U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_0_req_repeat))))))))) 
                                           >> 0x20U)));
    __Vtemp_6[2U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_7_req_repeat) 
                     >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT___GEN_12 
        = ((0x47U >= (0x7fU & ((IData)(9U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value))))
            ? (0x1ffU & (((0U == (0x1fU & ((IData)(9U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value))))
                           ? 0U : (__Vtemp_6[(((IData)(8U) 
                                               + (0x7fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value)))) 
                                              >> 5U)] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value)))))) 
                         | (__Vtemp_6[(3U & (((IData)(9U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value)) 
                                             >> 5U))] 
                            >> (0x1fU & ((IData)(9U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_11[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_2_req_memStride)) 
                               << 0x2aU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_1_req_memStride)) 
                                             << 0x15U) 
                                            | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_0_req_memStride)))));
    __Vtemp_11[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_3_req_memStride 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_2_req_memStride)) 
                                              << 0x2aU) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_1_req_memStride)) 
                                                 << 0x15U) 
                                                | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_0_req_memStride)))) 
                                            >> 0x20U)));
    __Vtemp_11[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_4_req_memStride 
                       << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_3_req_memStride 
                                    >> 1U));
    __Vtemp_11[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_6_req_memStride 
                       << 0x1eU) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_5_req_memStride 
                                     << 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_4_req_memStride 
                                               >> 0xcU)));
    __Vtemp_11[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_7_req_memStride 
                       << 0x13U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_6_req_memStride 
                                    >> 2U));
    __Vtemp_11[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_7_req_memStride 
                      >> 0xdU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT___GEN_35 
        = ((0xa7U >= (0xffU & ((IData)(0x15U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value))))
            ? (0x1fffffU & (((0U == (0x1fU & ((IData)(0x15U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value))))
                              ? 0U : (__Vtemp_11[(((IData)(0x14U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x15U) 
                                                       * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value)))) 
                                                  >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x15U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value)))))) 
                            | (__Vtemp_11[(7U & (((IData)(0x15U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value)) 
                                                 >> 5U))] 
                               >> (0x1fU & ((IData)(0x15U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__962(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__962\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_6_req_repeat)) 
                              << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_5_req_repeat)) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_4_req_repeat)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_3_req_repeat)) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_2_req_repeat) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_1_req_repeat) 
                                                                        << 9U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_0_req_repeat))))))))));
    __Vtemp_1[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_7_req_repeat) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_6_req_repeat)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_5_req_repeat)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_4_req_repeat)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_3_req_repeat)) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_2_req_repeat) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_1_req_repeat) 
                                                                            << 9U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_0_req_repeat))))))))) 
                                           >> 0x20U)));
    __Vtemp_1[2U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_7_req_repeat) 
                     >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT___GEN_12 
        = ((0x47U >= (0x7fU & ((IData)(9U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value))))
            ? (0x1ffU & (((0U == (0x1fU & ((IData)(9U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value))))
                           ? 0U : (__Vtemp_1[(((IData)(8U) 
                                               + (0x7fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value)))) 
                                              >> 5U)] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value)))))) 
                         | (__Vtemp_1[(3U & (((IData)(9U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value)) 
                                             >> 5U))] 
                            >> (0x1fU & ((IData)(9U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_2_req_memStride)) 
                              << 0x2aU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_1_req_memStride)) 
                                            << 0x15U) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_0_req_memStride)))));
    __Vtemp_6[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_3_req_memStride 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_2_req_memStride)) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_1_req_memStride)) 
                                                << 0x15U) 
                                               | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_0_req_memStride)))) 
                                           >> 0x20U)));
    __Vtemp_6[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_4_req_memStride 
                      << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_3_req_memStride 
                                   >> 1U));
    __Vtemp_6[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_6_req_memStride 
                      << 0x1eU) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_5_req_memStride 
                                    << 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_4_req_memStride 
                                              >> 0xcU)));
    __Vtemp_6[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_7_req_memStride 
                      << 0x13U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_6_req_memStride 
                                   >> 2U));
    __Vtemp_6[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_7_req_memStride 
                     >> 0xdU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT___GEN_35 
        = ((0xa7U >= (0xffU & ((IData)(0x15U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value))))
            ? (0x1fffffU & (((0U == (0x1fU & ((IData)(0x15U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value))))
                              ? 0U : (__Vtemp_6[(((IData)(0x14U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x15U) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x15U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value)))))) 
                            | (__Vtemp_6[(7U & (((IData)(0x15U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value)) 
                                                >> 5U))] 
                               >> (0x1fU & ((IData)(0x15U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_6_req_repeat)) 
                              << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_5_req_repeat)) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_4_req_repeat)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_3_req_repeat)) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_2_req_repeat) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_1_req_repeat) 
                                                                        << 9U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_0_req_repeat))))))))));
    __Vtemp_7[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_7_req_repeat) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_6_req_repeat)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_5_req_repeat)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_4_req_repeat)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_3_req_repeat)) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_2_req_repeat) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_1_req_repeat) 
                                                                            << 9U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_0_req_repeat))))))))) 
                                           >> 0x20U)));
    __Vtemp_7[2U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_7_req_repeat) 
                     >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT___GEN_12 
        = ((0x47U >= (0x7fU & ((IData)(9U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value))))
            ? (0x1ffU & (((0U == (0x1fU & ((IData)(9U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value))))
                           ? 0U : (__Vtemp_7[(((IData)(8U) 
                                               + (0x7fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value)))) 
                                              >> 5U)] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value)))))) 
                         | (__Vtemp_7[(3U & (((IData)(9U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value)) 
                                             >> 5U))] 
                            >> (0x1fU & ((IData)(9U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__awPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__963(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__963\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_11;
    // Body
    __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_2_req_memStride)) 
                              << 0x2aU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_1_req_memStride)) 
                                            << 0x15U) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_0_req_memStride)))));
    __Vtemp_5[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_3_req_memStride 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_2_req_memStride)) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_1_req_memStride)) 
                                                << 0x15U) 
                                               | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_0_req_memStride)))) 
                                           >> 0x20U)));
    __Vtemp_5[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_4_req_memStride 
                      << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_3_req_memStride 
                                   >> 1U));
    __Vtemp_5[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_6_req_memStride 
                      << 0x1eU) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_5_req_memStride 
                                    << 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_4_req_memStride 
                                              >> 0xcU)));
    __Vtemp_5[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_7_req_memStride 
                      << 0x13U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_6_req_memStride 
                                   >> 2U));
    __Vtemp_5[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_7_req_memStride 
                     >> 0xdU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT___GEN_35 
        = ((0xa7U >= (0xffU & ((IData)(0x15U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value))))
            ? (0x1fffffU & (((0U == (0x1fU & ((IData)(0x15U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value))))
                              ? 0U : (__Vtemp_5[(((IData)(0x14U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x15U) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x15U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value)))))) 
                            | (__Vtemp_5[(7U & (((IData)(0x15U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value)) 
                                                >> 5U))] 
                               >> (0x1fU & ((IData)(0x15U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_6_req_repeat)) 
                              << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_5_req_repeat)) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_4_req_repeat)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_3_req_repeat)) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_2_req_repeat) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_1_req_repeat) 
                                                                        << 9U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_0_req_repeat))))))))));
    __Vtemp_6[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_7_req_repeat) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_6_req_repeat)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_5_req_repeat)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_4_req_repeat)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_3_req_repeat)) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_2_req_repeat) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_1_req_repeat) 
                                                                            << 9U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_0_req_repeat))))))))) 
                                           >> 0x20U)));
    __Vtemp_6[2U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_7_req_repeat) 
                     >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT___GEN_12 
        = ((0x47U >= (0x7fU & ((IData)(9U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value))))
            ? (0x1ffU & (((0U == (0x1fU & ((IData)(9U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value))))
                           ? 0U : (__Vtemp_6[(((IData)(8U) 
                                               + (0x7fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value)))) 
                                              >> 5U)] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value)))))) 
                         | (__Vtemp_6[(3U & (((IData)(9U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value)) 
                                             >> 5U))] 
                            >> (0x1fU & ((IData)(9U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_11[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_2_req_memStride)) 
                               << 0x2aU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_1_req_memStride)) 
                                             << 0x15U) 
                                            | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_0_req_memStride)))));
    __Vtemp_11[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_3_req_memStride 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_2_req_memStride)) 
                                              << 0x2aU) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_1_req_memStride)) 
                                                 << 0x15U) 
                                                | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_0_req_memStride)))) 
                                            >> 0x20U)));
    __Vtemp_11[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_4_req_memStride 
                       << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_3_req_memStride 
                                    >> 1U));
    __Vtemp_11[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_6_req_memStride 
                       << 0x1eU) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_5_req_memStride 
                                     << 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_4_req_memStride 
                                               >> 0xcU)));
    __Vtemp_11[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_7_req_memStride 
                       << 0x13U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_6_req_memStride 
                                    >> 2U));
    __Vtemp_11[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_7_req_memStride 
                      >> 0xdU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT___GEN_35 
        = ((0xa7U >= (0xffU & ((IData)(0x15U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value))))
            ? (0x1fffffU & (((0U == (0x1fU & ((IData)(0x15U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value))))
                              ? 0U : (__Vtemp_11[(((IData)(0x14U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x15U) 
                                                       * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value)))) 
                                                  >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x15U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value)))))) 
                            | (__Vtemp_11[(7U & (((IData)(0x15U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value)) 
                                                 >> 5U))] 
                               >> (0x1fU & ((IData)(0x15U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__964(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__964\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_6_req_repeat)) 
                              << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_5_req_repeat)) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_4_req_repeat)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_3_req_repeat)) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_2_req_repeat) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_1_req_repeat) 
                                                                        << 9U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_0_req_repeat))))))))));
    __Vtemp_1[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_7_req_repeat) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_6_req_repeat)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_5_req_repeat)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_4_req_repeat)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_3_req_repeat)) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_2_req_repeat) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_1_req_repeat) 
                                                                            << 9U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_0_req_repeat))))))))) 
                                           >> 0x20U)));
    __Vtemp_1[2U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_7_req_repeat) 
                     >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT___GEN_12 
        = ((0x47U >= (0x7fU & ((IData)(9U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value))))
            ? (0x1ffU & (((0U == (0x1fU & ((IData)(9U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value))))
                           ? 0U : (__Vtemp_1[(((IData)(8U) 
                                               + (0x7fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value)))) 
                                              >> 5U)] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value)))))) 
                         | (__Vtemp_1[(3U & (((IData)(9U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value)) 
                                             >> 5U))] 
                            >> (0x1fU & ((IData)(9U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_2_req_memStride)) 
                              << 0x2aU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_1_req_memStride)) 
                                            << 0x15U) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_0_req_memStride)))));
    __Vtemp_6[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_3_req_memStride 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_2_req_memStride)) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_1_req_memStride)) 
                                                << 0x15U) 
                                               | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_0_req_memStride)))) 
                                           >> 0x20U)));
    __Vtemp_6[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_4_req_memStride 
                      << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_3_req_memStride 
                                   >> 1U));
    __Vtemp_6[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_6_req_memStride 
                      << 0x1eU) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_5_req_memStride 
                                    << 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_4_req_memStride 
                                              >> 0xcU)));
    __Vtemp_6[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_7_req_memStride 
                      << 0x13U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_6_req_memStride 
                                   >> 2U));
    __Vtemp_6[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_7_req_memStride 
                     >> 0xdU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___GEN_35 
        = ((0xa7U >= (0xffU & ((IData)(0x15U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value))))
            ? (0x1fffffU & (((0U == (0x1fU & ((IData)(0x15U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value))))
                              ? 0U : (__Vtemp_6[(((IData)(0x14U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x15U) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x15U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value)))))) 
                            | (__Vtemp_6[(7U & (((IData)(0x15U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value)) 
                                                >> 5U))] 
                               >> (0x1fU & ((IData)(0x15U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_6_req_repeat)) 
                              << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_5_req_repeat)) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_4_req_repeat)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_3_req_repeat)) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_2_req_repeat) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_1_req_repeat) 
                                                                        << 9U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_0_req_repeat))))))))));
    __Vtemp_7[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_7_req_repeat) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_6_req_repeat)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_5_req_repeat)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_4_req_repeat)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_3_req_repeat)) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_2_req_repeat) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_1_req_repeat) 
                                                                            << 9U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_0_req_repeat))))))))) 
                                           >> 0x20U)));
    __Vtemp_7[2U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_7_req_repeat) 
                     >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___GEN_12 
        = ((0x47U >= (0x7fU & ((IData)(9U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value))))
            ? (0x1ffU & (((0U == (0x1fU & ((IData)(9U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value))))
                           ? 0U : (__Vtemp_7[(((IData)(8U) 
                                               + (0x7fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value)))) 
                                              >> 5U)] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value)))))) 
                         | (__Vtemp_7[(3U & (((IData)(9U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value)) 
                                             >> 5U))] 
                            >> (0x1fU & ((IData)(9U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__awPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__965(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__965\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_2_req_memStride)) 
                              << 0x2aU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_1_req_memStride)) 
                                            << 0x15U) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_0_req_memStride)))));
    __Vtemp_5[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_3_req_memStride 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_2_req_memStride)) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_1_req_memStride)) 
                                                << 0x15U) 
                                               | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_0_req_memStride)))) 
                                           >> 0x20U)));
    __Vtemp_5[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_4_req_memStride 
                      << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_3_req_memStride 
                                   >> 1U));
    __Vtemp_5[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_6_req_memStride 
                      << 0x1eU) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_5_req_memStride 
                                    << 9U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_4_req_memStride 
                                              >> 0xcU)));
    __Vtemp_5[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_7_req_memStride 
                      << 0x13U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_6_req_memStride 
                                   >> 2U));
    __Vtemp_5[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_7_req_memStride 
                     >> 0xdU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT___GEN_35 
        = ((0xa7U >= (0xffU & ((IData)(0x15U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value))))
            ? (0x1fffffU & (((0U == (0x1fU & ((IData)(0x15U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value))))
                              ? 0U : (__Vtemp_5[(((IData)(0x14U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x15U) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x15U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value)))))) 
                            | (__Vtemp_5[(7U & (((IData)(0x15U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value)) 
                                                >> 5U))] 
                               >> (0x1fU & ((IData)(0x15U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value))))))
            : 0U);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_6_req_repeat)) 
                              << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_5_req_repeat)) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_4_req_repeat)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_3_req_repeat)) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_2_req_repeat) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_1_req_repeat) 
                                                                        << 9U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_0_req_repeat))))))))));
    __Vtemp_6[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_7_req_repeat) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_6_req_repeat)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_5_req_repeat)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_4_req_repeat)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_3_req_repeat)) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_2_req_repeat) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_1_req_repeat) 
                                                                            << 9U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_0_req_repeat))))))))) 
                                           >> 0x20U)));
    __Vtemp_6[2U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_7_req_repeat) 
                     >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT___GEN_12 
        = ((0x47U >= (0x7fU & ((IData)(9U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value))))
            ? (0x1ffU & (((0U == (0x1fU & ((IData)(9U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value))))
                           ? 0U : (__Vtemp_6[(((IData)(8U) 
                                               + (0x7fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value)))) 
                                              >> 5U)] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(9U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value)))))) 
                         | (__Vtemp_6[(3U & (((IData)(9U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value)) 
                                             >> 5U))] 
                            >> (0x1fU & ((IData)(9U) 
                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__awPtr_value))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_idle 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__got_e) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__sent_d));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_idle 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__got_e) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__sent_d));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_idle 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__got_e) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__sent_d));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_idle 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__got_e) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__sent_d));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT____Vcellinp__storeQueue_1__io_req_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_0_isLoad)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_io_req_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_0_isLoad) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__valid));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__966(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__966\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_7_memAddr 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[0U] 
               + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_23) 
                  * vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_2));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_6_memAddr 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[0U] 
               + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_20) 
                  * vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_2));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_5_memAddr 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[0U] 
               + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_17) 
                  * vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_2));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_4_memAddr 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[0U] 
               + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_14) 
                  * vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_2));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_3_memAddr 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[0U] 
               + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_11) 
                  * vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_2));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_2_memAddr 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[0U] 
               + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_8) 
                  * vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_2));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_1_memAddr 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[0U] 
               + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_5) 
                  * vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_2));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_0_memAddr 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[0U] 
               + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_2) 
                  * vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_2));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__967(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__967\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_1_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__in_data_2_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_4_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_3_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_8_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_7_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_13_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_12_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_19_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_18_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_26_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_25_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_34_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_33_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_43_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_42_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_53_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_52_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_64_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_63_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_76_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_75_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_89_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_88_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_103_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_102_mantissa;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_118_mantissa 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_117_mantissa;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__gennum = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__dToggle = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT___a_q_io_enq_ready) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___repeater_io_deq_valid))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__gennum 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__aFragnum;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT___GEN_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__fragmenter__DOT__dToggle 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__zero__DOT__a_q__DOT___ram_ext_R0_data) 
                         >> 8U));
        }
    }
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_20)) 
                              << 0x3cU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_19)) 
                                            << 0x39U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_18)) 
                                               << 0x36U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_17)) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_16)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_15)) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_14)) 
                                                           << 0x2aU) 
                                                          | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_13)) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_12)) 
                                                                 << 0x24U) 
                                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_11)) 
                                                                    << 0x21U) 
                                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_10)) 
                                                                       << 0x1eU) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_9) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_8) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_7) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_6) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_5) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_4) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_3) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_1) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_0))))))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_21) 
                      << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_20)) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_19)) 
                                                << 0x39U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_18)) 
                                                   << 0x36U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_17)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_16)) 
                                                         << 0x30U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_15)) 
                                                            << 0x2dU) 
                                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_14)) 
                                                               << 0x2aU) 
                                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_13)) 
                                                                  << 0x27U) 
                                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_12)) 
                                                                     << 0x24U) 
                                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_11)) 
                                                                        << 0x21U) 
                                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_10)) 
                                                                           << 0x1eU) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_9) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_8) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_7) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_6) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_5) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_4) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_3) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_1) 
                                                                                << 3U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_0))))))))))))))))))))))) 
                                           >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT___GEN_0[0U] 
        = __Vtemp_1[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT___GEN_0[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT___GEN_0[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_31) 
            << 0x1dU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_30) 
                          << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_29) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_28) 
                                         << 0x14U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_27) 
                                            << 0x11U) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_26) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_25) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_24) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_23) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_22) 
                                                           << 2U) 
                                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__semaphores_21) 
                                                             >> 1U)))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__968(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__968\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT___GEN 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_31) 
            << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_30) 
                          << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_29) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_28) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_27) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_26) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_25) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_24) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_23) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_22) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_21) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_20) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_19) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_18) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_17) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_16) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_15) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__semaphores__DOT__busy_0))))))))))))))))))))))))))))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__dToggle = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__gennum = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT___GEN_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__dToggle 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_d_bits_source) 
                         >> 4U));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___tl2axi4_auto_in_a_ready) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT___fragmenter_auto_anon_out_a_valid))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__gennum 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fragmenter__DOT__aFragnum;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT___GEN_7[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_7_rRepeat) 
           >> 1U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__969(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__969\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT___GEN_38 
        = ((0x27U >= (0x3fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__rPtr_value))))
            ? (0x1fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_7_req_sramStride)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_6_req_sramStride)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_5_req_sramStride) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_4_req_sramStride) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_3_req_sramStride) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_2_req_sramStride) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_1_req_sramStride) 
                                                                               << 5U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__entries_0_req_sramStride)))))))))) 
                                >> (0x3fU & ((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_7__DOT__rPtr_value))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_mantissa)) 
           >> 0xeU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT___GEN_7[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_7_rRepeat) 
           >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT___GEN_38 
        = ((0x27U >= (0x3fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__rPtr_value))))
            ? (0x1fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_7_req_sramStride)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_6_req_sramStride)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_5_req_sramStride) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_4_req_sramStride) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_3_req_sramStride) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_2_req_sramStride) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_1_req_sramStride) 
                                                                               << 5U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__entries_0_req_sramStride)))))))))) 
                                >> (0x3fU & ((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_6__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__970(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__970\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_267) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_268_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_267_flow_lr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT___GEN_7[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_7_rRepeat) 
           >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT___GEN_38 
        = ((0x27U >= (0x3fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__rPtr_value))))
            ? (0x1fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_7_req_sramStride)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_6_req_sramStride)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_5_req_sramStride) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_4_req_sramStride) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_3_req_sramStride) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_2_req_sramStride) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_1_req_sramStride) 
                                                                               << 5U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__entries_0_req_sramStride)))))))))) 
                                >> (0x3fU & ((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_5__DOT__rPtr_value))))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_235) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_236_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_235_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_219) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_220_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_219_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_187) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_188_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_187_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_171) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_172_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_171_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_155) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_156_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_155_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_123) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_124_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_123_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_75) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_76_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_75_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_59) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_60_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_59_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_139) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_140_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_139_flow_lr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__971(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__971\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_91) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_92_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_91_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_43) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_44_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_43_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_27) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_28_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_27_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_107) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_108_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_107_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_251) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_252_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_251_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_203) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_204_flow_lr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_203_flow_lr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_268) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_269_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_268_flow_ud;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_269_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_268_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_236) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_237_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_236_flow_du;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_237_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_236_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_220) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_221_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_220_flow_du;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_221_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_220_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_204) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_205_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_204_flow_du;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_205_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_204_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_188) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_189_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_188_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_156) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_157_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_156_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_172) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_173_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_172_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_60) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_61_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_60_flow_du;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_61_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_60_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_140) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_141_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_140_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_108) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_109_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_108_flow_ud;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__972(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__972\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_108) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_109_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_108_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_28) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_29_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_28_flow_du;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_29_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_28_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_76) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_77_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_76_flow_ud;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_77_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_76_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_44) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_45_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_44_flow_ud;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_45_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_44_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_124) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_125_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_124_flow_ud;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_125_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_124_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_140) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_141_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_140_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_92) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_93_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_92_flow_du;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_93_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_92_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_172) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_173_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_172_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_252) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_253_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_252_flow_ud;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_253_flow_du 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_252_flow_du;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_156) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_157_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_156_flow_ud;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_188) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_189_flow_ud 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_188_flow_ud;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_189_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_188_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_268) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_269_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_268_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_236) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_237_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_236_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_204) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_205_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_204_mac;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__973(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__973\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_172) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_173_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_172_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_140) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_141_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_140_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_124) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_125_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_124_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_60) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_61_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_60_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_44) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_45_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_44_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_28) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_29_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_28_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_76) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_77_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_76_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_92) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_93_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_92_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_108) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_109_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_108_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_252) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_253_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_252_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_156) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_157_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_156_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_220) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_221_mac 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_220_mac;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_7_repeat 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (0x1ffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                   << 4U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                     >> 0x1cU))), 3U));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT___GEN_7[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_10_rRepeat) 
            << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_9_rRepeat) 
                          << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_8_rRepeat) 
                                        << 8U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_7_rRepeat) 
                                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT___GEN_7[3U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_14_rRepeat) 
            << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_13_rRepeat) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_12_rRepeat) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_11_rRepeat) 
                                         << 3U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_10_rRepeat) 
                                                   >> 6U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT___GEN_7[4U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_15_rRepeat) 
            << 7U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_14_rRepeat) 
                      >> 2U));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__974(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__974\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_11;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_7_sramAddr 
            = (0x7fU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                          << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0x19U)) + ((0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_23)) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_3))));
    }
    __Vtemp_1[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_12_req_sramStride) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_11_req_sramStride)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_10_req_sramStride)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_9_req_sramStride)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_8_req_sramStride)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_7_req_sramStride)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_6_req_sramStride)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_5_req_sramStride) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_4_req_sramStride) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_0_req_sramStride)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_11_req_sramStride)) 
                              << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_10_req_sramStride)) 
                                            << 0x32U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_9_req_sramStride)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_8_req_sramStride)) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_7_req_sramStride)) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_6_req_sramStride)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_5_req_sramStride) 
                                                                           << 0x19U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_4_req_sramStride) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_0_req_sramStride)))))))))))))));
    __Vtemp_4[1U] = __Vtemp_1[1U];
    __Vtemp_4[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_15_req_sramStride) 
                      << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_14_req_sramStride) 
                                   << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_13_req_sramStride) 
                                              << 1U) 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_12_req_sramStride) 
                                                >> 4U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT___GEN_56 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_4[(((IData)(4U) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value)))))) 
                        | (__Vtemp_4[(3U & (((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value))))))
            : 0U);
    __Vtemp_11[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_8_req_sramAddr)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_7_req_sramAddr)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_6_req_sramAddr)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_5_req_sramAddr)) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_4_req_sramAddr)) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_3_req_sramAddr) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_2_req_sramAddr) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_1_req_sramAddr) 
                                                                               << 7U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_0_req_sramAddr))))))))))));
    __Vtemp_11[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_9_req_sramAddr) 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_8_req_sramAddr)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_7_req_sramAddr)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_6_req_sramAddr)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_5_req_sramAddr)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_4_req_sramAddr)) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_3_req_sramAddr) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_2_req_sramAddr) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_1_req_sramAddr) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_0_req_sramAddr))))))))))) 
                                            >> 0x20U)));
    __Vtemp_11[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_13_req_sramAddr) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_12_req_sramAddr) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_11_req_sramAddr) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_10_req_sramAddr) 
                                                      << 6U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_9_req_sramAddr) 
                                                        >> 1U)))));
    __Vtemp_11[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_15_req_sramAddr) 
                       << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_14_req_sramAddr) 
                                  << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__entries_13_req_sramAddr) 
                                            >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_7_addr 
        = ((0x6fU >= (0x7fU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_11[(((IData)(6U) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value)))))) 
                        | (__Vtemp_11[(3U & (((IData)(7U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_7__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__976(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__976\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT___GEN_7[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_7_rRepeat) 
           >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT___GEN_38 
        = ((0x27U >= (0x3fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__rPtr_value))))
            ? (0x1fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_7_req_sramStride)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_6_req_sramStride)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_5_req_sramStride) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_4_req_sramStride) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_3_req_sramStride) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_2_req_sramStride) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_1_req_sramStride) 
                                                                               << 5U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__entries_0_req_sramStride)))))))))) 
                                >> (0x3fU & ((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_4__DOT__rPtr_value))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_118_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_117_sign;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_1_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__in_data_2_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_4_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_3_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_8_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_7_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_13_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_12_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_19_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_18_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_26_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_25_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_34_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_33_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_43_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_42_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_53_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_52_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_64_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_63_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_76_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_75_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_89_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_88_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_103_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_102_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_118_exp 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__inputDelayer__DOT__out_delay_r_117_exp;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__newMax_exp)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__977(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__977\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_1__DOT__newMax_mantissa)) 
           >> 0xeU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT___GEN_7[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_7_rRepeat) 
           >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT___GEN_38 
        = ((0x27U >= (0x3fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__rPtr_value))))
            ? (0x1fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_7_req_sramStride)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_6_req_sramStride)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_5_req_sramStride) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_4_req_sramStride) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_3_req_sramStride) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_2_req_sramStride) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_1_req_sramStride) 
                                                                               << 5U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__entries_0_req_sramStride)))))))))) 
                                >> (0x3fU & ((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_3__DOT__rPtr_value))))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_6_repeat 
            = (0x1ffU & ((7U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                       >> 0x1cU))) ? 
                         (0x7fU & ((IData)(1U) + (0x3fU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                      << 1U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                        >> 0x1fU)))))
                          : VL_SHIFTR_III(9,9,32, (0x1ffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                       << 4U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 0x1cU))), 3U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT___GEN_7[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_10_rRepeat) 
            << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_9_rRepeat) 
                          << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_8_rRepeat) 
                                        << 8U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_7_rRepeat) 
                                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT___GEN_7[3U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_14_rRepeat) 
            << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_13_rRepeat) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_12_rRepeat) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_11_rRepeat) 
                                         << 3U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_10_rRepeat) 
                                                   >> 6U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT___GEN_7[4U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_15_rRepeat) 
            << 7U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_14_rRepeat) 
                      >> 2U));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__978(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__978\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_11;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_6_sramAddr 
            = (0x7fU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                          << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0x19U)) + ((0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_20)) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_3))));
    }
    __Vtemp_1[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_12_req_sramStride) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_11_req_sramStride)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_10_req_sramStride)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_9_req_sramStride)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_8_req_sramStride)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_7_req_sramStride)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_6_req_sramStride)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_5_req_sramStride) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_4_req_sramStride) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_0_req_sramStride)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_11_req_sramStride)) 
                              << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_10_req_sramStride)) 
                                            << 0x32U) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_9_req_sramStride)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_8_req_sramStride)) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_7_req_sramStride)) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_6_req_sramStride)) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_5_req_sramStride) 
                                                                           << 0x19U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_4_req_sramStride) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_0_req_sramStride)))))))))))))));
    __Vtemp_4[1U] = __Vtemp_1[1U];
    __Vtemp_4[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_15_req_sramStride) 
                      << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_14_req_sramStride) 
                                   << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_13_req_sramStride) 
                                              << 1U) 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_12_req_sramStride) 
                                                >> 4U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT___GEN_56 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_4[(((IData)(4U) 
                                              + (0x7fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value)))))) 
                        | (__Vtemp_4[(3U & (((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value))))))
            : 0U);
    __Vtemp_11[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_8_req_sramAddr)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_7_req_sramAddr)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_6_req_sramAddr)) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_5_req_sramAddr)) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_4_req_sramAddr)) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_3_req_sramAddr) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_2_req_sramAddr) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_1_req_sramAddr) 
                                                                               << 7U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_0_req_sramAddr))))))))))));
    __Vtemp_11[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_9_req_sramAddr) 
                       << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_8_req_sramAddr)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_7_req_sramAddr)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_6_req_sramAddr)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_5_req_sramAddr)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_4_req_sramAddr)) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_3_req_sramAddr) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_2_req_sramAddr) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_1_req_sramAddr) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_0_req_sramAddr))))))))))) 
                                            >> 0x20U)));
    __Vtemp_11[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_13_req_sramAddr) 
                       << 0x1bU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_12_req_sramAddr) 
                                     << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_11_req_sramAddr) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_10_req_sramAddr) 
                                                      << 6U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_9_req_sramAddr) 
                                                        >> 1U)))));
    __Vtemp_11[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_15_req_sramAddr) 
                       << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_14_req_sramAddr) 
                                  << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__entries_13_req_sramAddr) 
                                            >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT___dma_io_spadWrite_6_addr 
        = ((0x6fU >= (0x7fU & ((IData)(7U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_11[(((IData)(6U) 
                                               + (0x7fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(7U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value)))))) 
                        | (__Vtemp_11[(3U & (((IData)(7U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(7U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_6__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__980(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__980\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_0_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_558_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_557_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_15_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1038_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1037_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_14_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1006_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1005_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_13_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_974_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_973_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_12_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_942_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_941_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_11_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_910_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_11__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_11__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_909_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_10_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_878_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_877_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_7_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_782_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_781_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_6_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_750_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_749_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_3_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_654_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_653_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_9_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_846_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_9__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_9__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_845_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_1_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_590_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_589_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_2_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_622_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_621_mantissa);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__981(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__981\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_4_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_686_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_685_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_5_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_718_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_717_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_8_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_814_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT___io_u_output_bits_T_1)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_813_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT___GEN_7[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_7_rRepeat) 
           >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT___GEN_38 
        = ((0x27U >= (0x3fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__rPtr_value))))
            ? (0x1fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_7_req_sramStride)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_6_req_sramStride)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_5_req_sramStride) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_4_req_sramStride) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_3_req_sramStride) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_2_req_sramStride) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_1_req_sramStride) 
                                                                               << 5U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__entries_0_req_sramStride)))))))))) 
                                >> (0x3fU & ((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_2__DOT__rPtr_value))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___GEN_7[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_7_rRepeat) 
           >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT___GEN_38 
        = ((0x27U >= (0x3fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__rPtr_value))))
            ? (0x1fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_7_req_sramStride)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_6_req_sramStride)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_5_req_sramStride) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_4_req_sramStride) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_3_req_sramStride) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_2_req_sramStride) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_1_req_sramStride) 
                                                                               << 5U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__entries_0_req_sramStride)))))))))) 
                                >> (0x3fU & ((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue_1__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__982(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__982\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_103_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_102_sign;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_5_repeat 
            = (0x1ffU & ((5U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                      >> 0x1cU))) ? 
                         (0x7fU & ((IData)(1U) + (0x3fU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                      << 1U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                        >> 0x1fU)))))
                          : VL_SHIFTR_III(9,9,32, (0x1ffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                       << 4U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 0x1cU))), 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_5_sramAddr 
            = (0x7fU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                          << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0x19U)) + ((0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_17)) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_3))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT___GEN_7[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_10_rRepeat) 
            << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_9_rRepeat) 
                          << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_8_rRepeat) 
                                        << 8U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_7_rRepeat) 
                                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT___GEN_7[3U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_14_rRepeat) 
            << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_13_rRepeat) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_12_rRepeat) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_11_rRepeat) 
                                         << 3U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_10_rRepeat) 
                                                   >> 6U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT___GEN_7[4U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_15_rRepeat) 
            << 7U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_14_rRepeat) 
                      >> 2U));
    __Vtemp_9[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_12_req_sramStride) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_11_req_sramStride)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_10_req_sramStride)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_9_req_sramStride)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_8_req_sramStride)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_7_req_sramStride)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_6_req_sramStride)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_5_req_sramStride) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_4_req_sramStride) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_0_req_sramStride)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_11_req_sramStride)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_10_req_sramStride)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_9_req_sramStride)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_8_req_sramStride)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_7_req_sramStride)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_6_req_sramStride)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_5_req_sramStride) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_4_req_sramStride) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_0_req_sramStride)))))))))))))));
    __Vtemp_12[1U] = __Vtemp_9[1U];
    __Vtemp_12[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_15_req_sramStride) 
                       << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_14_req_sramStride) 
                                    << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_13_req_sramStride) 
                                               << 1U) 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__entries_12_req_sramStride) 
                                                 >> 4U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT___GEN_56 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_12[(((IData)(4U) 
                                               + (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value)))))) 
                        | (__Vtemp_12[(3U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_5__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__984(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__984\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT___GEN_7[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_7_rRepeat) 
           >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT___GEN_38 
        = ((0x27U >= (0x3fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__rPtr_value))))
            ? (0x1fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_7_req_sramStride)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_6_req_sramStride)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_5_req_sramStride) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_4_req_sramStride) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_3_req_sramStride) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_2_req_sramStride) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_1_req_sramStride) 
                                                                               << 5U) 
                                                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__entries_0_req_sramStride)))))))))) 
                                >> (0x3fU & ((IData)(5U) 
                                             * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__storeQueue__DOT__rPtr_value))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_15_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_15__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_15__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_15__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_15__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_15__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_14_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_14__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_14__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_14__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_14__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_14__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_13_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_13__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_13__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_13__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_13__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_13__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_12_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_12__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_12__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_12__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_12__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_12__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__985(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__985\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_11_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_11__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_11__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_11__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_11__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_11__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_10_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_10__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_10__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_10__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_10__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_10__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_9_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_9__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_9__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_9__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_9__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_9__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_8_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_8__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_8__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_8__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_8__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_8__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_7_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_6_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_5_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__986(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__986\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_4_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_3_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_2_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_1_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT___banks_subBanks_sram_mem_R0_data 
        = ((0x11U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x10U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__newMax_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_2__DOT__newMax_mantissa)) 
           >> 0xeU);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_4_repeat 
            = (0x1ffU & ((4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                      >> 0x1cU))) ? 
                         (0x7fU & ((IData)(1U) + (0x3fU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                      << 1U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                        >> 0x1fU)))))
                          : VL_SHIFTR_III(9,9,32, (0x1ffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                       << 4U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 0x1cU))), 3U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__987(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__987\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_7[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_10_rRepeat) 
            << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_9_rRepeat) 
                          << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_8_rRepeat) 
                                        << 8U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_7_rRepeat) 
                                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_7[3U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_14_rRepeat) 
            << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_13_rRepeat) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_12_rRepeat) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_11_rRepeat) 
                                         << 3U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_10_rRepeat) 
                                                   >> 6U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_7[4U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_15_rRepeat) 
            << 7U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_14_rRepeat) 
                      >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_4_sramAddr 
            = (0x7fU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                          << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0x19U)) + ((0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_14)) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_3))));
    }
    __Vtemp_9[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_12_req_sramStride) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_11_req_sramStride)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_10_req_sramStride)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_9_req_sramStride)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_8_req_sramStride)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_7_req_sramStride)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_6_req_sramStride)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_5_req_sramStride) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_4_req_sramStride) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_0_req_sramStride)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_11_req_sramStride)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_10_req_sramStride)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_9_req_sramStride)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_8_req_sramStride)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_7_req_sramStride)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_6_req_sramStride)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_5_req_sramStride) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_4_req_sramStride) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_0_req_sramStride)))))))))))))));
    __Vtemp_12[1U] = __Vtemp_9[1U];
    __Vtemp_12[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_15_req_sramStride) 
                       << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_14_req_sramStride) 
                                    << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_13_req_sramStride) 
                                               << 1U) 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__entries_12_req_sramStride) 
                                                 >> 4U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT___GEN_56 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_12[(((IData)(4U) 
                                               + (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value)))))) 
                        | (__Vtemp_12[(3U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_4__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__989(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__989\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_89_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_88_sign;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_3_repeat 
            = (0x1ffU & ((0x40000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U])
                          ? (0x7fU & ((IData)(1U) + 
                                      (0x3fU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                 << 1U) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                   >> 0x1fU)))))
                          : VL_SHIFTR_III(9,9,32, (0x1ffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                       << 4U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 0x1cU))), 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_3_sramAddr 
            = (0x7fU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                          << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0x19U)) + ((0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_11)) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_3))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT___GEN_7[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_10_rRepeat) 
            << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_9_rRepeat) 
                          << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_8_rRepeat) 
                                        << 8U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_7_rRepeat) 
                                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT___GEN_7[3U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_14_rRepeat) 
            << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_13_rRepeat) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_12_rRepeat) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_11_rRepeat) 
                                         << 3U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_10_rRepeat) 
                                                   >> 6U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT___GEN_7[4U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_15_rRepeat) 
            << 7U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_14_rRepeat) 
                      >> 2U));
    __Vtemp_9[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_12_req_sramStride) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_11_req_sramStride)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_10_req_sramStride)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_9_req_sramStride)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_8_req_sramStride)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_7_req_sramStride)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_6_req_sramStride)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_5_req_sramStride) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_4_req_sramStride) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_0_req_sramStride)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_11_req_sramStride)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_10_req_sramStride)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_9_req_sramStride)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_8_req_sramStride)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_7_req_sramStride)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_6_req_sramStride)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_5_req_sramStride) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_4_req_sramStride) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_0_req_sramStride)))))))))))))));
    __Vtemp_12[1U] = __Vtemp_9[1U];
    __Vtemp_12[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_15_req_sramStride) 
                       << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_14_req_sramStride) 
                                    << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_13_req_sramStride) 
                                               << 1U) 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__entries_12_req_sramStride) 
                                                 >> 4U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT___GEN_56 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_12[(((IData)(4U) 
                                               + (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value)))))) 
                        | (__Vtemp_12[(3U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_3__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__991(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__991\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_2_repeat 
            = (0x1ffU & ((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                      >> 0x1cU))) ? 
                         (0x7fU & ((IData)(1U) + (0x3fU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                      << 1U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                        >> 0x1fU)))))
                          : VL_SHIFTR_III(9,9,32, (0x1ffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                       << 4U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 0x1cU))), 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_2_sramAddr 
            = (0x7fU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                          << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0x19U)) + ((0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_8)) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_3))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT___GEN_7[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_10_rRepeat) 
            << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_9_rRepeat) 
                          << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_8_rRepeat) 
                                        << 8U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_7_rRepeat) 
                                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT___GEN_7[3U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_14_rRepeat) 
            << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_13_rRepeat) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_12_rRepeat) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_11_rRepeat) 
                                         << 3U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_10_rRepeat) 
                                                   >> 6U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT___GEN_7[4U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_15_rRepeat) 
            << 7U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_14_rRepeat) 
                      >> 2U));
    __Vtemp_9[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_12_req_sramStride) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_11_req_sramStride)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_10_req_sramStride)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_9_req_sramStride)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_8_req_sramStride)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_7_req_sramStride)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_6_req_sramStride)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_5_req_sramStride) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_4_req_sramStride) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_0_req_sramStride)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_11_req_sramStride)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_10_req_sramStride)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_9_req_sramStride)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_8_req_sramStride)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_7_req_sramStride)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_6_req_sramStride)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_5_req_sramStride) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_4_req_sramStride) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_0_req_sramStride)))))))))))))));
    __Vtemp_12[1U] = __Vtemp_9[1U];
    __Vtemp_12[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_15_req_sramStride) 
                       << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_14_req_sramStride) 
                                    << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_13_req_sramStride) 
                                               << 1U) 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__entries_12_req_sramStride) 
                                                 >> 4U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT___GEN_56 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_12[(((IData)(4U) 
                                               + (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value)))))) 
                        | (__Vtemp_12[(3U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_2__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__993(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__993\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__newMax_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__newMax_mantissa)) 
           >> 0xeU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_76_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_75_sign;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_1_repeat 
            = (0x1ffU & ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                       >> 0x1dU))) ? 
                         (0x7fU & ((IData)(1U) + (0x3fU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                      << 1U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                        >> 0x1fU)))))
                          : VL_SHIFTR_III(9,9,32, (0x1ffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                       << 4U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 0x1cU))), 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_1_sramAddr 
            = (0x7fU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                          << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0x19U)) + ((0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_5)) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_3))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT___GEN_7[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_10_rRepeat) 
            << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_9_rRepeat) 
                          << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_8_rRepeat) 
                                        << 8U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_7_rRepeat) 
                                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT___GEN_7[3U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_14_rRepeat) 
            << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_13_rRepeat) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_12_rRepeat) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_11_rRepeat) 
                                         << 3U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_10_rRepeat) 
                                                   >> 6U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT___GEN_7[4U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_15_rRepeat) 
            << 7U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_14_rRepeat) 
                      >> 2U));
    __Vtemp_9[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_12_req_sramStride) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_11_req_sramStride)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_10_req_sramStride)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_9_req_sramStride)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_8_req_sramStride)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_7_req_sramStride)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_6_req_sramStride)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_5_req_sramStride) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_4_req_sramStride) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_0_req_sramStride)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_11_req_sramStride)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_10_req_sramStride)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_9_req_sramStride)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_8_req_sramStride)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_7_req_sramStride)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_6_req_sramStride)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_5_req_sramStride) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_4_req_sramStride) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_0_req_sramStride)))))))))))))));
    __Vtemp_12[1U] = __Vtemp_9[1U];
    __Vtemp_12[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_15_req_sramStride) 
                       << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_14_req_sramStride) 
                                    << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_13_req_sramStride) 
                                               << 1U) 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__entries_12_req_sramStride) 
                                                 >> 4U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT___GEN_56 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_12[(((IData)(4U) 
                                               + (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value)))))) 
                        | (__Vtemp_12[(3U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue_1__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__995(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__995\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__newMax_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__newMax_mantissa)) 
           >> 0xeU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_64_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_63_sign;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT__do_deq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_0_repeat 
            = (0x1ffU & ((0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                       >> 0x1cU))) ? 
                         (0x7fU & ((IData)(1U) + (0x3fU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                      << 1U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                        >> 0x1fU)))))
                          : VL_SHIFTR_III(9,9,32, (0x1ffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[3U] 
                                                       << 4U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 0x1cU))), 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT__reqs_0_sramAddr 
            = (0x7fU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                          << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dmaInst_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0x19U)) + ((0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___addrIncr_T_2)) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__partitioner__DOT___GEN_3))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT___GEN_7[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_6_rRepeat)) 
                    << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_5_rRepeat)) 
                                  << 0x2dU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_4_rRepeat)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_3_rRepeat)) 
                                                   << 0x1bU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_2_rRepeat) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_1_rRepeat) 
                                                                         << 9U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_0_rRepeat))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT___GEN_7[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_7_rRepeat) 
            << 0x1fU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_6_rRepeat)) 
                                   << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_5_rRepeat)) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_4_rRepeat)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_3_rRepeat)) 
                                                       << 0x1bU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_2_rRepeat) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_1_rRepeat) 
                                                                             << 9U) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_0_rRepeat))))))))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT___GEN_7[2U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_10_rRepeat) 
            << 0x1aU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_9_rRepeat) 
                          << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_8_rRepeat) 
                                        << 8U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_7_rRepeat) 
                                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT___GEN_7[3U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_14_rRepeat) 
            << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_13_rRepeat) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_12_rRepeat) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_11_rRepeat) 
                                         << 3U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_10_rRepeat) 
                                                   >> 6U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT___GEN_7[4U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_15_rRepeat) 
            << 7U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_14_rRepeat) 
                      >> 2U));
    __Vtemp_9[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_12_req_sramStride) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_11_req_sramStride)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_10_req_sramStride)) 
                                                << 0x32U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_9_req_sramStride)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_8_req_sramStride)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_7_req_sramStride)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_6_req_sramStride)) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_5_req_sramStride) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_4_req_sramStride) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_0_req_sramStride)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_11_req_sramStride)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_10_req_sramStride)) 
                                             << 0x32U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_9_req_sramStride)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_8_req_sramStride)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_7_req_sramStride)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_6_req_sramStride)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_5_req_sramStride) 
                                                                            << 0x19U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_4_req_sramStride) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_3_req_sramStride) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_2_req_sramStride) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_1_req_sramStride) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_0_req_sramStride)))))))))))))));
    __Vtemp_12[1U] = __Vtemp_9[1U];
    __Vtemp_12[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_15_req_sramStride) 
                       << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_14_req_sramStride) 
                                    << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_13_req_sramStride) 
                                               << 1U) 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__entries_12_req_sramStride) 
                                                 >> 4U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT___GEN_56 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value))))
                          ? 0U : (__Vtemp_12[(((IData)(4U) 
                                               + (0x7fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value)))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value)))))) 
                        | (__Vtemp_12[(3U & (((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value)) 
                                             >> 5U))] 
                           >> (0x1fU & ((IData)(5U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__dma__DOT__loadQueue__DOT__rPtr_value))))))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__997(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__997\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_mantissa)) 
           >> 0xeU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_53_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_52_sign;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__newMax_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__newMax_mantissa)) 
           >> 0xeU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_43_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_42_sign;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_34_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_33_sign;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___banks_subBanks_sram_mem_7_R0_data 
        = ((0x60U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_7__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___banks_subBanks_sram_mem_4_R0_data 
        = ((0x60U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_4__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___banks_subBanks_sram_mem_3_R0_data 
        = ((0x60U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_3__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___banks_subBanks_sram_mem_R0_data 
        = ((0x60U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__998(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__998\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___banks_subBanks_sram_mem_6_R0_data 
        = ((0x60U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_6__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___banks_subBanks_sram_mem_5_R0_data 
        = ((0x60U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_5__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___banks_subBanks_sram_mem_2_R0_data 
        = ((0x60U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_2__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT___banks_subBanks_sram_mem_1_R0_data 
        = ((0x60U <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT___RAND_1
            : ((0x5fU >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0))
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram
               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__spRAM_sram__DOT__banks_subBanks_sram_mem_1__DOT__banks_subBanks_sram_mem_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]
                : 0ULL));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_mantissa)) 
           >> 0xeU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_26_sign 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_25_sign;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__newMax_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__newMax_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[1U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__newMax_mantissa)) 
           << 0x12U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____Vcellinp__shiftRightJam__io_in[2U] 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__newMax_exp))
             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_8__DOT__newMax_mantissa)) 
           >> 0xeU);
}
