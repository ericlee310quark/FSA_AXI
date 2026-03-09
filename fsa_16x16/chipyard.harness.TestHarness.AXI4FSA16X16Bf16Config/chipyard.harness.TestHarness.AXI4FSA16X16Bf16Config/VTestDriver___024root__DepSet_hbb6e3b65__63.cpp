// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4517(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4517\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    VlWide<8>/*255:0*/ __Vtemp_18;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid) {
        __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_0_phit;
        __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_1_phit;
        __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_2_phit;
        __Vtemp_6[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_3_phit;
        __Vtemp_6[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_4_phit;
        __Vtemp_6[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_5_phit;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_7_phit)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_6_phit))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_6_phit))) 
                                 >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___index_T) 
                                                               ^ 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                << 2U)), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                     << 2U)), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___index_T) 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                   << 2U)), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___index_T) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                  << 2U)), 5U))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid) {
        __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_0_phit;
        __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_1_phit;
        __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_2_phit;
        __Vtemp_12[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_3_phit;
        __Vtemp_12[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_4_phit;
        __Vtemp_12[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_5_phit;
        __Vtemp_12[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_6_phit))));
        __Vtemp_12[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_7_phit)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_6_phit))) 
                                  >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_12[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                 << 2U)), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                    << 2U)), 5U))))) 
               | (__Vtemp_12[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___index_T) 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                    << 2U)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                   << 2U)), 5U))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid) {
        __Vtemp_18[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_0_phit;
        __Vtemp_18[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_1_phit;
        __Vtemp_18[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_2_phit;
        __Vtemp_18[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_3_phit;
        __Vtemp_18[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_4_phit;
        __Vtemp_18[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_5_phit;
        __Vtemp_18[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit))));
        __Vtemp_18[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit))) 
                                  >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_18[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                 << 2U)), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                    << 2U)), 5U))))) 
               | (__Vtemp_18[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                    << 2U)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                   << 2U)), 5U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4518(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4518\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    VlWide<8>/*255:0*/ __Vtemp_18;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid) {
        __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_0_phit;
        __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_1_phit;
        __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_2_phit;
        __Vtemp_6[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_3_phit;
        __Vtemp_6[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_4_phit;
        __Vtemp_6[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_5_phit;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_7_phit)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_6_phit))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_6_phit))) 
                                 >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___index_T) 
                                                               ^ 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                << 2U)), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                     << 2U)), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___index_T) 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                   << 2U)), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___index_T) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                  << 2U)), 5U))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid) {
        __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_0_phit;
        __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_1_phit;
        __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_2_phit;
        __Vtemp_12[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_3_phit;
        __Vtemp_12[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_4_phit;
        __Vtemp_12[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_5_phit;
        __Vtemp_12[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_6_phit))));
        __Vtemp_12[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_7_phit)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_6_phit))) 
                                  >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_12[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                 << 2U)), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                    << 2U)), 5U))))) 
               | (__Vtemp_12[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___index_T) 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                    << 2U)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                   << 2U)), 5U))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid) {
        __Vtemp_18[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_0_phit;
        __Vtemp_18[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_1_phit;
        __Vtemp_18[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_2_phit;
        __Vtemp_18[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_3_phit;
        __Vtemp_18[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_4_phit;
        __Vtemp_18[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_5_phit;
        __Vtemp_18[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit))));
        __Vtemp_18[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit))) 
                                  >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_18[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                 << 2U)), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                    << 2U)), 5U))))) 
               | (__Vtemp_18[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                    << 2U)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                   << 2U)), 5U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4519(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4519\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__maybe_full = 0U;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__maybe_full = 0U;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__maybe_full = 0U;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___GEN_2) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___GEN_2;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___GEN_2) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___GEN_2;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___GEN))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4520(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4520\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___GEN))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___GEN))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___GEN))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__do_enq;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__beat = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__beat 
                = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__beat)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__beat) 
                            - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT___GEN_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat 
                = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat) 
                            - (IData)(1U))));
        }
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT___GEN_0) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__beat)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__channel_vec_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___in_demux_io_out_0_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT___GEN_1) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen_prio;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___GEN_0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_reg 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
               >> 2U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4521(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4521\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat 
                = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat) 
                            - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT___GEN_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat 
                = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat) 
                            - (IData)(1U))));
        }
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT___GEN_0) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__channel_vec_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT___GEN_1) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen_prio;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4522(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4522\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_counter;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__head_counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__head_counter;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__enq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value;
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value;
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4523(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4523\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value;
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((0x8000000U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)
                                              ? (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                          >> 0x11U))) 
                                                     >> 2U)))
                                              : 0U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4524(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4524\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                     >> 0x1bU));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1 
            = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                     >> 0x19U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                     >> 0x11U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                     >> 9U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink 
            = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                     >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied 
            = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                            >> 2U)))
                                              ? 0U : 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                                 >> 6U)))) 
                                                    >> 2U))))));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param 
            = (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                             >> 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size 
            = (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                             >> 6U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                             >> 9U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address 
            = (0xffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                  >> 0xaU)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4525(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4525\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
                = (0xfU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter))
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                               - (IData)(1U)) : ((1U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))
                                                  ? 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                   >> 5U)))) 
                                                      >> 2U)))
                                                  : 0U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
                = (0xfU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter))
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                               - (IData)(1U)) : (((7U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                                   ? 0U
                                                   : 4U)
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                      >> 2U))))));
        }
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1 
            = (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                             >> 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1 
            = (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                             >> 5U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                             >> 8U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink 
            = (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                             >> 9U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                             >> 0xbU)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4526(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4526\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode 
            = ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                ? 1U : 4U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4528(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4528\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_demux__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat;
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___GEN_2) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__beat)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__data_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__data_1 = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___GEN_2) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__data_2 
            = (0xffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[2U] 
                             << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[1U] 
                                       >> 0x1eU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__data_1 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[1U] 
                << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[0U] 
                          >> 0x1eU));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN 
        = (QData)((IData)((0xfffcU & (((IData)(1U) 
                                       + (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                  >> 2U))) 
                                      << 2U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_16 
        = (0U == ((8U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                  >> 0xfU)) << 3U)) 
                  | (7U & (5U ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                         >> 0xcU))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4529(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4529\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN_0[0U] 
        = (IData)(((QData)((IData)((0xfffcU & (((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 2U))) 
                                               << 2U)))) 
                   - vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN_0[1U] 
        = (IData)((((QData)((IData)((0xfffcU & (((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 2U))) 
                                                << 2U)))) 
                    - vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr) 
                   >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN_0[2U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__head 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__head_counter));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_head 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__is_body)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__head_counter)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__valid) {
        __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_0_phit;
        __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_1_phit;
        __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_2_phit;
        __Vtemp_6[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_3_phit;
        __Vtemp_6[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_4_phit;
        __Vtemp_6[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_5_phit;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_7_phit)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_6_phit))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_6_phit))) 
                                 >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___index_T) 
                                                               ^ 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                << 2U)), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                     << 2U)), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___index_T) 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                   << 2U)), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___index_T) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                  << 2U)), 5U))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__valid) {
        __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_0_phit;
        __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_1_phit;
        __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_2_phit;
        __Vtemp_12[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_3_phit;
        __Vtemp_12[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_4_phit;
        __Vtemp_12[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_5_phit;
        __Vtemp_12[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_6_phit))));
        __Vtemp_12[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_7_phit)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_6_phit))) 
                                  >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_12[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                 << 2U)), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                    << 2U)), 5U))))) 
               | (__Vtemp_12[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___index_T) 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                    << 2U)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                   << 2U)), 5U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4530(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4530\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid) {
        __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_0_phit;
        __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_1_phit;
        __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_2_phit;
        __Vtemp_6[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_3_phit;
        __Vtemp_6[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_4_phit;
        __Vtemp_6[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_5_phit;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_7_phit)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_6_phit))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_6_phit))) 
                                 >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___index_T) 
                                                               ^ 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                << 2U)), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                     << 2U)), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___index_T) 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                   << 2U)), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___index_T) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                  << 2U)), 5U))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_0_in_bits_flit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid) {
        __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_0_phit;
        __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_1_phit;
        __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_2_phit;
        __Vtemp_12[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_3_phit;
        __Vtemp_12[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_4_phit;
        __Vtemp_12[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_5_phit;
        __Vtemp_12[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_6_phit))));
        __Vtemp_12[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_7_phit)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_6_phit))) 
                                  >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_12[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                 << 2U)), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                    << 2U)), 5U))))) 
               | (__Vtemp_12[(7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___index_T) 
                                                   ^ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                    << 2U)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                   << 2U)), 5U))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__enq_ptr_value));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4531(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4531\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid) {
        __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_0_phit;
        __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_1_phit;
        __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_2_phit;
        __Vtemp_6[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_3_phit;
        __Vtemp_6[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_4_phit;
        __Vtemp_6[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_5_phit;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_7_phit)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_6_phit))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_7_phit)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_6_phit))) 
                                 >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___index_T) 
                                               ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                  << 2U)), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___index_T) 
                                                               ^ 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                << 2U)), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                     << 2U)), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___index_T) 
                                                  ^ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                   << 2U)), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___index_T) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0) 
                                                                  << 2U)), 5U))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value));
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___GEN)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___beat_T)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_in_bits_flit;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___GEN) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___beat_T)
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___GEN) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___beat_T)
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat))));
        }
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___GEN)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___beat_T)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_3_in_bits_flit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4532(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4532\n"); );
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___GEN)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___beat_T)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_2_in_bits_flit;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___GEN) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___beat_T)
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4533(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4533\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4534(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4534\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4535(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4535\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4536(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4536\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___GEN)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___beat_T)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_1_in_bits_flit;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___GEN)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___beat_T)) 
                  | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_1_in_bits_flit;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT___harnessBinderReset_catcher_io_sync_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___GEN) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___beat_T)
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4537(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4537\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__maybe_full)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ptr_match))) 
           & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_0_in_bits_flit) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_0_2__DOT__is_const)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4538(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4538\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_out_ready 
        = (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ptr_match) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__maybe_full))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_in_valid 
        = (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__maybe_full)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ptr_match))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_3_in_valid 
        = (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__maybe_full)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ptr_match))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_2_in_valid 
        = (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__maybe_full)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ptr_match))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_1_in_valid 
        = (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__maybe_full)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ptr_match))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_in_bits_flit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_3_in_bits_flit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4539(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4539\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_2_in_bits_flit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid 
        = (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ptr_match))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid 
        = (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ptr_match))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_d_ready 
        = (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ptr_match) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_6 
        = (0U == ((8U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                  >> 0x19U)) << 3U)) 
                  | (7U & (5U ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                         >> 0x16U))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_size 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U] 
                         << 0x1aU) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U] 
                                      >> 6U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_mask 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U] 
                         << 0xaU) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U] 
                                     >> 0x16U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U]);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_size 
            = (0xffU & (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                      >> 6U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_mask 
            = (0xffU & (0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                        >> 0x1aU))));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4540(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4540\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4541(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4541\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_1_in_bits_flit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ptr_match) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__maybe_full))) 
           & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__beat)));
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4542(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4542\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4543(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4543\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4544(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4544\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___ser_4_io_in_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_out_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat)));
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___beat_T 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4545(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4545\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_4_2_io_beat_ready 
        = ((~ vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__data_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_4_2__DOT__is_const));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___beat_T 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_3_2_io_beat_ready 
        = ((~ vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__data_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_3_2__DOT__is_const));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___beat_T 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_2_2_io_beat_ready 
        = ((~ vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__data_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_2_2__DOT__is_const));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__is_body) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[0U] 
            = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                          ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[4U])) 
                              << 0x22U) | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[3U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U])) 
                                              >> 0x1eU)))
                          : (QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                             >> 0x1eU))))) 
                << 1U) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                                 ? (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[4U] 
                                    >> 0x1eU) : (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                         >> 0x3eU)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[1U] 
            = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                          ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[4U])) 
                              << 0x22U) | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[3U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U])) 
                                              >> 0x1eU)))
                          : (QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                             >> 0x1eU))))) 
                >> 0x1fU) | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                                        ? (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[4U])) 
                                            << 0x22U) 
                                           | (((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[3U])) 
                                               << 2U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U])) 
                                                 >> 0x1eU)))
                                        : (QData)((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 0x1eU)))) 
                                      >> 0x20U)) << 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[2U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_mask) 
                << 1U) | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                                     ? (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[4U])) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[3U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U])) 
                                              >> 0x1eU)))
                                     : (QData)((IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                        >> 0x1eU)))) 
                                   >> 0x20U)) >> 0x1fU));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[0U] 
            = (IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                        ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U])) 
                            << 0x2aU) | (((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[1U])) 
                                          << 0xaU) 
                                         | ((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U])) 
                                            >> 0x16U)))
                        : (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                      >> 0xaU)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[1U] 
            = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                         ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U])) 
                             << 0x2aU) | (((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[1U])) 
                                           << 0xaU) 
                                          | ((QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U])) 
                                             >> 0x16U)))
                         : (QData)((IData)((0xffffU 
                                            & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                       >> 0xaU)))))) 
                       >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_payload[2U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_opcode) 
                << 0x13U) | ((0x70000U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                                            ? ((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U] 
                                                << 0x1dU) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U] 
                                                  >> 3U))
                                            : (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                       >> 3U))) 
                                          << 0x10U)) 
                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_size) 
                                 << 8U) | (0xffU & 
                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)
                                             ? ((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U] 
                                                 << 0x12U) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U] 
                                                   >> 0xeU))
                                             : (1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                                                           >> 9U))))))));
    }
}

extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h3fd96f20_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h52851b47_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4546(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4546\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    // Body
    VL_SHIFTL_WWI(261,261,8, __Vtemp_1, VTestDriver__ConstPool__CONST_h3fd96f20_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_size));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_beats1 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_opcode))
            ? 0U : (0xfU & (~ (((VTestDriver__ConstPool__CONST_h52851b47_0[0U] 
                                 & __Vtemp_1[0U]) << 0x1eU) 
                               | ((VTestDriver__ConstPool__CONST_h52851b47_0[0U] 
                                   & __Vtemp_1[0U]) 
                                  >> 2U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT____VdfgTmp_heee498bb__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__is_body) 
           | (0U == (0x1ffU & (~ ((0x100U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_opcode) 
                                             << 6U)) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_bits_mask))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___beat_T 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___des_1_io_out_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_1_in_valid) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_1_2_io_beat_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_d_ready) 
           | ((~ vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__is_const)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
        = (0x3fffffffU & ((2U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0)
                           ? (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
                              >> 2U) : vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_reg));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4547(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4547\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_4_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_4_2_io_beat_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_in_valid) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_4_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_3_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_3_2_io_beat_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_3_in_valid) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4548(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4548\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_3_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_3_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_2_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_2_2_io_beat_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_2_in_valid) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_2_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_2_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___ser_4_io_in_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___GEN_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_out_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_valid) 
              | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_tail 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_counter)) 
            | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_beats1))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT____VdfgTmp_heee498bb__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q_io_deq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___ser_4_io_in_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT____VdfgTmp_heee498bb__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__is_const)) 
            | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___des_1_io_out_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_1_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_1_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_1_2_io_beat_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___des_1_io_out_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data 
                             >> 9U))) == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                                                >> 9U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_a_valid) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q_io_deq_ready)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4549(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4549\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_37 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid) 
            & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
           & (6U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                           >> 0x1bU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___serdesser_auto_manager_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___GEN) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
              >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q_io_deq_ready))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_47 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1)) 
              & (6U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0 
                              >> 0x1bU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_48 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
           & (IData)(((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2)) 
                      & (0x30000000U == (0x38000000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__const_0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4550(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4550\n"); );
    // Body
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4551(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4551\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__beat 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__beat;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4765(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4765\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___GEN_1) {
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__data_1;
        __Vtemp_2[2U] = (IData)((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__data_2)));
        __Vtemp_2[3U] = (IData)(((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__data_2)) 
                                 >> 0x20U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory__v0 
            = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat))
                ? 2U : (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat), 5U)))
                          ? 0U : (__Vtemp_2[(((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat), 5U))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat), 5U))))) 
                        | (__Vtemp_2[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat), 5U) 
                                            >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat), 5U)))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___GEN_2) {
        __Vtemp_4[0U] = 0U;
        __Vtemp_4[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__data_1;
        __Vtemp_4[2U] = (IData)((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__data_2)));
        __Vtemp_4[3U] = (IData)(((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__data_2)) 
                                 >> 0x20U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory__v0 
            = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat))
                ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___out_channels_1_2_io_beat_bits_payload[0U] 
                    << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___out_channels_1_2_io_beat_bits_head) 
                               << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___out_channels_1_2_io_beat_bits_tail)))
                : (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat), 5U)))
                     ? 0U : (__Vtemp_4[(((IData)(0x1fU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat), 5U))) 
                                        >> 5U)] << 
                             ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat), 5U))))) 
                   | (__Vtemp_4[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat), 5U) 
                                       >> 5U))] >> 
                      (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat), 5U)))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset)
            ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq)
                     ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__watchdog_1)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4766(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4766\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    // Body
    __Vtemp_6[0U] = 0xfU;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_7, __Vtemp_6, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq)
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog_1));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq)
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog_1));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___GEN_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat 
                = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT__beat))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_49)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_source))
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_49)
                      ? (((QData)((IData)(__Vtemp_7[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_7[0U])))
                      : 0ULL)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__watchdog));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_0_2__DOT__is_const 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_deq) 
               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_0_in_bits_flit) 
              | ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_deq) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_0_in_bits_flit 
                        >> 1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_0_2__DOT__is_const))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4767(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4767\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__watchdog));
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q_io_deq_ready) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_valid))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter 
                = (0xfU & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter))
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_beats1)
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter) 
                               - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___GEN_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_1)
                            ? ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U])
                                ? 0U : (~ (0x7ffU & 
                                           (((IData)(0x3fU) 
                                             << (7U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                    >> 8U))) 
                                            >> 2U))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                               - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4768(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4768\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    __Vtemp_4[0U] = 0xfU;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_5, __Vtemp_4, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                     >> 8U)) << 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_2)
                            ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_opcode))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_size)) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                         - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_1)
                            ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_opcode))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_size)) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                         - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_47)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                      (0xfU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 8U))))
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_47)
                      ? (((QData)((IData)(__Vtemp_5[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_5[0U])))
                      : 0ULL)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4769(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4769\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<9>/*287:0*/ __Vtemp_7;
    // Body
    __Vtemp_4[0U] = 0xfU;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_5, __Vtemp_4, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                     >> 8U)) << 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head_counter = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___GEN_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat 
                = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_49)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                      (0xfU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 8U))))
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_49)
                      ? (((QData)((IData)(__Vtemp_5[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_5[0U])))
                      : 0ULL)));
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q_io_deq_ready) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_valid))) {
            VL_SHIFTL_WWI(261,261,8, __Vtemp_7, VTestDriver__ConstPool__CONST_h3fd96f20_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_bits_size));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head_counter 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head)
                            ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_bits_opcode))
                                ? (~ (((VTestDriver__ConstPool__CONST_h52851b47_0[0U] 
                                        & __Vtemp_7[0U]) 
                                       << 0x1eU) | 
                                      ((VTestDriver__ConstPool__CONST_h52851b47_0[0U] 
                                        & __Vtemp_7[0U]) 
                                       >> 2U))) : 0U)
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head_counter) 
                               - (IData)(1U))));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__is_body 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset))) 
           && ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___GEN) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___out_channels_1_2_io_beat_bits_tail))) 
               & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___GEN) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___out_channels_1_2_io_beat_bits_head)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__is_body))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4770(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4770\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    // Body
    __Vtemp_5[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_1)
                      ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                       >> 0x12U))) : 0U);
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_6, __Vtemp_5, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                            << 2U)));
    __Vtemp_9[0U] = 0xfU;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    __Vtemp_9[3U] = 0U;
    __Vtemp_9[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_10, __Vtemp_9, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                     >> 8U)) << 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___d_first_T_2)
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__watchdog_1));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_2)
                            ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                             >> 5U)))) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                         - (IData)(1U))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                               (0xfU 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U]))
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_48)
                                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                         >> 8U))))
                                             : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_1)
                    ? (((QData)((IData)(__Vtemp_6[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_6[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_48)
                                    ? (((QData)((IData)(
                                                        __Vtemp_10[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_10[0U])))
                                    : 0ULL)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4771(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4771\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    __Vtemp_3[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_1)
                      ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                       >> 7U))) : 0U);
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_4, __Vtemp_3, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                            << 2U)));
    __Vtemp_7[0U] = 0xfU;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_8, __Vtemp_7, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                     >> 8U)) << 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_1)
                    ? (((QData)((IData)(__Vtemp_4[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_4[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_48)
                                    ? (((QData)((IData)(
                                                        __Vtemp_8[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_8[0U])))
                                    : 0ULL)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_1)
                            ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                             >> 5U)))) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                         - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT___GEN) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT___GEN) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4772(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4772\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT___GEN) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_2)
                            ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                             >> 5U)))) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                         - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_1)
                            ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                             >> 5U)))) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                         - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___GEN_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4773(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4773\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    // Body
    __Vtemp_5[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_1)
                      ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 1U))) : 0U);
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_6, __Vtemp_5, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    __Vtemp_9[0U] = 0xfU;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    __Vtemp_9[3U] = 0U;
    __Vtemp_9[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_10, __Vtemp_9, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___d_first_T_2))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_1)
                               ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                               (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_48)
                                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_source))
                                             : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_1)
                    ? (((QData)((IData)(__Vtemp_6[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_6[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_48)
                                    ? (((QData)((IData)(
                                                        __Vtemp_10[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_10[0U])))
                                    : 0ULL)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4774(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4774\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    __Vtemp_3[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_1)
                      ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U))) : 0U);
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_4, __Vtemp_3, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    __Vtemp_7[0U] = 0xfU;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_8, __Vtemp_7, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_1)
                    ? (((QData)((IData)(__Vtemp_4[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_4[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT___GEN_48)
                                    ? (((QData)((IData)(
                                                        __Vtemp_8[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_8[0U])))
                                    : 0ULL)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_1)
                            ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                                ? 0U : (~ (0x7ffU & 
                                           (((IData)(0x3fU) 
                                             << (7U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U))) 
                                            >> 2U))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                               - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_1)
                            ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                                ? 0U : (~ (0x7ffU & 
                                           (((IData)(0x3fU) 
                                             << (7U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U))) 
                                            >> 2U))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter_1) 
                               - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4775(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4775\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    // Body
    __Vtemp_4[0U] = 0xfU;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_5, __Vtemp_4, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x23U)) << 2U)));
    __Vtemp_10[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_1)
                       ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        << 1U))) : 0U);
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 0U;
    __Vtemp_10[3U] = 0U;
    __Vtemp_10[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_11, __Vtemp_10, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    __Vtemp_14[0U] = 0xfU;
    __Vtemp_14[1U] = 0U;
    __Vtemp_14[2U] = 0U;
    __Vtemp_14[3U] = 0U;
    __Vtemp_14[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_15, __Vtemp_14, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                     >> 8U)) << 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___GEN) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_45)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                      (0xfU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x23U))))
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_45)
                      ? (((QData)((IData)(__Vtemp_5[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_5[0U])))
                      : 0ULL)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_1)
                               ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                               (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                         >> 8U))))
                                             : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_1)
                    ? (((QData)((IData)(__Vtemp_11[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_11[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                    ? (((QData)((IData)(
                                                        __Vtemp_15[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_15[0U])))
                                    : 0ULL)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4776(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4776\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    __Vtemp_3[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_1)
                      ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U))) : 0U);
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_4, __Vtemp_3, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    __Vtemp_7[0U] = 0xfU;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_8, __Vtemp_7, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                     >> 8U)) << 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_1)
                    ? (((QData)((IData)(__Vtemp_4[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_4[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT___GEN_46)
                                    ? (((QData)((IData)(
                                                        __Vtemp_8[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_8[0U])))
                                    : 0ULL)));
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__full) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q_io_deq_ready)) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_valid)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__do_enq;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_1)
                            ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                                ? 0U : (~ (0x7ffU & 
                                           (((IData)(0x3fU) 
                                             << (7U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U))) 
                                            >> 2U))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter_1) 
                               - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___d_first_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_2 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_2)
                            ? ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x2cU)))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x27U)))) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_2) 
                                         - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4777(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4777\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_4[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_1)
                      ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 1U))) : 0U);
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_5, __Vtemp_4, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    __Vtemp_8[0U] = 0xfU;
    __Vtemp_8[1U] = 0U;
    __Vtemp_8[2U] = 0U;
    __Vtemp_8[3U] = 0U;
    __Vtemp_8[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_9, __Vtemp_8, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x23U)) << 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___d_first_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_1 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_1)
                            ? ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x2cU)))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x27U)))) 
                                                >> 2U)))
                                : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_1) 
                                         - (IData)(1U))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_1)
                               ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                               (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_44)
                                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                         >> 0x23U))))
                                             : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_1)
                    ? (((QData)((IData)(__Vtemp_5[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_5[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_44)
                                    ? (((QData)((IData)(
                                                        __Vtemp_9[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_9[0U])))
                                    : 0ULL)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4778(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4778\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    __Vtemp_3[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_1)
                      ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U))) : 0U);
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_4, __Vtemp_3, 
                  (0x3cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    __Vtemp_7[0U] = 0xfU;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_8, __Vtemp_7, 
                  (0x3cU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x23U)) << 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_1)
                    ? (((QData)((IData)(__Vtemp_4[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_4[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT___GEN_44)
                                    ? (((QData)((IData)(
                                                        __Vtemp_8[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_8[0U])))
                                    : 0ULL)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4779(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4779\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_corrupt)) 
                << 0x2fU) | (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_0)
                                                 ? (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                            >> 0xfU))
                                                 : 0U) 
                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__muxState_1)
                                                   ? (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 1U))
                                                   : 0U)))) 
                              << 0xfU) | (QData)((IData)(
                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_denied) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_sink) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_source) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_size) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_param) 
                                                                       << 3U) 
                                                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_bits_opcode))))))))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_3_2__DOT__is_const 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_3_2__DOT___GEN) 
               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT__data_0) 
              | ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_3_2__DOT___GEN) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT__data_0 
                        >> 1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_3_2__DOT__is_const))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_2_2__DOT__is_const 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_2_2__DOT___GEN) 
               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT__data_0) 
              | ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_2_2__DOT___GEN) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT__data_0 
                        >> 1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_2_2__DOT__is_const))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_1_2__DOT__is_const 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_1_2__DOT___GEN) 
               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT__data_0) 
              | ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_1_2__DOT___GEN) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT__data_0 
                        >> 1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_1_2__DOT__is_const))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4780(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4780\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft 
            = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__latch)
                        ? ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__winner_0) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data))
                             ? (~ (0x7ffU & (((IData)(0x3fU) 
                                              << (7U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                             >> 5U)))) 
                                             >> 2U)))
                             : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__winner_1) 
                                       & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x2cU)))
                                       ? (~ (0x7ffU 
                                             & (((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x27U)))) 
                                                >> 2U)))
                                       : 0U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft) 
                                                 - 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___coupler_from_port_named_serial_tl_0_in_auto_tl_out_d_ready) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_d_valid)))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask)) 
                        << 0x1dU) | (QData)((IData)(
                                                    ((0x1fffe000U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                         << 0xdU)) 
                                                     | ((0x1e00U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                            << 9U)) 
                                                        | ((0x1c0U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                               >> 2U)) 
                                                           | ((0x38U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                                  >> 0xdU)) 
                                                              | (7U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                                    >> 0x13U))))))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)((vlSelf->__VdfgTmp_h275e29aa__0 
                         >> 1U)) << 1U) | (IData)((
                                                   (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_mask)) 
                                                     << 0x1dU) 
                                                    | (QData)((IData)(
                                                                      ((0x1fffe000U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
                                                                           << 0xdU)) 
                                                                       | ((0x1e00U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                                              << 9U)) 
                                                                          | ((0x1c0U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                                                >> 2U)) 
                                                                             | ((0x38U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                                                >> 0xdU)) 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
                                                                                >> 0x13U))))))))) 
                                                   >> 0x20U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0 
                      >> 1U)) | ((IData)((vlSelf->__VdfgTmp_h275e29aa__0 
                                          >> 1U)) >> 0x1fU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__is_const 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___GEN) 
               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0) 
              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___GEN_0)) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__is_const))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4781(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4781\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 0x1dU))))) 
                << 0x1cU) | (0xfffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 0x1dU))))) 
                >> 4U) | ((IData)(((0x1fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                         << 3U) | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0x1dU)))) 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((IData)(((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                << 3U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 0x1dU)))) 
                        >> 0x20U)) >> 4U);
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_corrupt)) 
                << 0x2fU) | (((QData)((IData)((((0xffU 
                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_count)
                                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_sel_hold_r)
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT___GEN_0)) 
                                                    & (((IData)(7U) 
                                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_size)) 
                                                       >> 2U))) 
                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeat_count))
                                                ? (IData)(
                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                                                             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_bus_named_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data
                                                             : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data) 
                                                           >> 0x20U))
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__broadcast_1__DOT__muxState_1)
                                                    ? 
                                                   ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U] 
                                                     << 0x10U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__wrapped_zero_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x10U))
                                                    : 0U)))) 
                              << 0xfU) | (QData)((IData)(
                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_denied) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_sink) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_source) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_size) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_param) 
                                                                       << 3U) 
                                                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_opcode))))))))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4783(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4783\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___GEN_0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_bits_payload[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_bits_payload[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_bits_payload[2U];
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__ram[0U] 
            = (((IData)((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                         >> 0xfU)))) 
                << 0x1eU) | ((0x20000000U & ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                      >> 0xeU)) 
                                             << 0x1dU)) 
                             | ((0x600000U & ((IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                       >> 0xcU)) 
                                              << 0x15U)) 
                                | ((0x1e000U & ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 8U)) 
                                                << 0xdU)) 
                                   | ((0xe0U & ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                         >> 5U)) 
                                                << 5U)) 
                                      | (0x1fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__ram[1U] 
            = (((IData)((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                         >> 0xfU)))) 
                >> 2U) | ((IData)(((QData)((IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                    >> 0xfU))) 
                                   >> 0x20U)) << 0x1eU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__ram[2U] 
            = ((0x40000000U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                        >> 0x2fU)) 
                               << 0x1eU)) | ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data 
                                                                       >> 0xfU))) 
                                                      >> 0x20U)) 
                                             >> 2U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_mask 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x1dU)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4784(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4784\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address 
            = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_source 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 9U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_mask 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x1dU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address 
            = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4785(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4785\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_data 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_mask 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x1dU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_source 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 9U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x1dU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_data 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_mask 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x1dU)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4786(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4786\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_data 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_address 
            = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_source 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 9U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_data 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_mask 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x1dU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_source 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 9U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_param 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4787(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4787\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 1U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_address 
            = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_source 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 9U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 1U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_address 
            = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_mask 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x1dU)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4788(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4788\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_source 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 9U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address 
            = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 1U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 1U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_param 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4789(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4789\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_address 
            = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_param 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_param 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_address 
            = (0xffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_mask 
            = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x1dU)));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_source 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 9U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4790(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4790\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_param 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source 
            = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 9U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_size 
            = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__enq_ptr_value = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__maybe_full = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__maybe_full = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4791(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4791\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__maybe_full = 0U;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__maybe_full = 0U;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___GEN_1) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_3__DOT___GEN_1;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT___GEN))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT___GEN))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT___GEN))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___GEN_2) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___GEN_2;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___GEN))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4792(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4792\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_fbus_0_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__readys_mask = 3U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__latch) 
             & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__readys_valid)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__readys_mask 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT___readys_mask_T) 
                            << 1U)));
        }
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4793(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4793\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_3_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_1_io_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4794(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4794\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_4_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4795(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4795\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_2_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_5_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_4_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_3_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_2_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_1_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_0_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_enq_flit2phit_io_out_bits_phit;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4796(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4796\n"); );
    // Body
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory__v0;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head_counter 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__head_counter;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4797(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4797\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__full 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q__DOT__full;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_to_fsa__DOT__asource__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1;
    if (vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory__v0;
    }
}
