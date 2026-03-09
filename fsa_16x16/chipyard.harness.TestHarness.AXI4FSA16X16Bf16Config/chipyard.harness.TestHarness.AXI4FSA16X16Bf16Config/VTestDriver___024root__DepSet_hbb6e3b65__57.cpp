// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

extern const VlWide<66>/*2111:0*/ VTestDriver__ConstPool__CONST_h4b6776b8_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4078(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4078\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h53cba0c0__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_1_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_128) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_1__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_128_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_112_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_565_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_584_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_8_1_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_583_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_582_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4079(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4079\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((0x80U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_4_bits_T_2))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_531_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_554_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_0_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_553_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_552_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___io_out_isZero_T) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_he01cf5be__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT___cmpUnit_io_out_diff_sign 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)) 
                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf)
                     ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_sign))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_a_isInf)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT____Vcellinp__cmpUnit__io_in_a_sign)
                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___io_out_isZero_T)
                             ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_sign)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT____Vcellinp__cmpUnit__io_in_a_sign))
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_he01cf5be__0)) 
                                & ((0x800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U])
                                    ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_sign))
                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT____Vcellinp__cmpUnit__io_in_a_sign))))))));
    __Vtemp_2[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U];
    __Vtemp_2[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U];
    __Vtemp_2[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[2U];
    VL_SHIFTL_WWI(76,76,11, __Vtemp_3, __Vtemp_2, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt));
    VL_SHIFTL_WWI(75,75,11, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt));
    __Vtemp_9[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U];
    __Vtemp_9[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U];
    __Vtemp_9[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[2U];
    VL_SHIFTL_WWI(74,74,11, __Vtemp_10, __Vtemp_9, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__alignShiftAmt));
    if ((0x800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___cAnchoredMantissa_T[2U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp) 
                                        - (IData)(0x7fU))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[0U] 
            = __Vtemp_3[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U] 
            = __Vtemp_3[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[2U] 
            = (0xfffU & __Vtemp_3[2U]);
    } else if ((0x400U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___cAnchoredMantissa_T[2U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[0U] 
            = (__Vtemp_5[0U] << 1U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U] 
            = ((__Vtemp_5[0U] >> 0x1fU) | (__Vtemp_5[1U] 
                                           << 1U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[2U] 
            = (0xfffU & ((__Vtemp_5[1U] >> 0x1fU) | 
                         (0xffeU & (__Vtemp_5[2U] << 1U))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp 
            = (0x1ffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp) 
                          - (IData)(0x7fU)) - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[0U] 
            = (__Vtemp_10[0U] << 2U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U] 
            = ((__Vtemp_10[0U] >> 0x1eU) | (__Vtemp_10[1U] 
                                            << 2U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[2U] 
            = (0xfffU & ((__Vtemp_10[1U] >> 0x1eU) 
                         | (0xffcU & (__Vtemp_10[2U] 
                                      << 2U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4080(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4080\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4081(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4081\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h875fde38__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_0_io_u_output_valid 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_5_valid_T)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT___io_u_output_bits_T_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_5_bits_T_2) 
                 >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((0x80U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_4_bits_T_2))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_531_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_554_exp));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4082(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4082\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_0_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_553_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_552_exp));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_230_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h58c16a52__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h58c16a52__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4083(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4083\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_246_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_246_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4084(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4084\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_197_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h5eab5149__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h5eab5149__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_213_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_213_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4085(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4085\n"); );
    // Body
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_245_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_hfa677b6d__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_sign));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4086(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4086\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_164_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hdb5b13a6__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hdb5b13a6__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_180_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4087(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4087\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_180_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_212_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h6394928f__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4088(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4088\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_484_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_484_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h2e197434__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_244_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4089(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4089\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_244_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_244_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_244_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_131_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h752388ec__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h752388ec__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4090(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4090\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4091(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4091\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_179_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h34eb0ce9__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h56c89833__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4092(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4092\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_98_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_he7e11609__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_he7e11609__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4093(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4093\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_114_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_114_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4094(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4094\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_146_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_hd423cb3b__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_418_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_418_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h54f94dad__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_178_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4095(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4095\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_178_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_178_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_178_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_210_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_210_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_65_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hf7428809__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hf7428809__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4096(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4096\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_81_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_81_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4097(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4097\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_113_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h3894606a__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_385_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_385_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_hfe4b94d7__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_145_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4098(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4098\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_145_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_145_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_145_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_2__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_177_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_177_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_32_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_he8536d14__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_he8536d14__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4099(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4099\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_48_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_48_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4100(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4100\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_80_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h53cba0c0__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_352_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_352_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_hff70b6ab__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_112_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4101(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4101\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_112_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_112_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_112_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_144_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_144_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT___cmpUnit_io_out_diff_sign) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT___cmpUnit_io_out_max_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT___cmpUnit_io_out_max_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT___cmpUnit_io_out_max_mantissa 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__newMax_mantissa;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT___cmpUnit_io_out_max_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT____Vcellinp__cmpUnit__io_in_a_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT___cmpUnit_io_out_max_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT___cmpUnit_io_out_max_mantissa 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0;
    }
    __Vtemp_2[0U] = (IData)((0x7ffffffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U])))));
    __Vtemp_2[1U] = (IData)(((0x7ffffffffffffULL & 
                              (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U])))) 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
            = ((0x3fffffeU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[2U] 
                               << 0xeU) | (0x3ffeU 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U] 
                                              >> 0x12U)))) 
               | (0U != (0x7ffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[0U]))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
            = ((0x3fffffeU & ((__Vtemp_3[1U] << 7U) 
                              | (0x7eU & (__Vtemp_3[0U] 
                                          >> 0x19U)))) 
               | (0U != (0x3ffffffU & VL_SHIFTL_III(26,26,6, 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U], (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4102(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4102\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_0_bits_T_2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_0_bits_T_2))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4103(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4103\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_2_bits_T_2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h875fde38__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___inputDelayer_io_out_3_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h46bf552d__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_4_bits_T_2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4104(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4104\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_4_bits_T_2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_4_bits_T_2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_4_bits_T_2))
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___io_u_output_bits_T_1 
        = (IData)((0x100U == (0x180U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_bits_T_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4105(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4105\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_7__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4106(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4106\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4107(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4107\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_5__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4108(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4108\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4109(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4109\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h2e197434__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_668_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_673_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_15_4_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_672_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___io_u_output_bits_T_1) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___macUnit_io_out_accType_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4110(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4110\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4111(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4111\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h56c89833__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_14_4_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_243) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_668_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_673_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_15_4_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_672_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___macUnit_io_out_accType_exp)
                : 0U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4112(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4112\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_634_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_643_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_13_3_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_642_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_641_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4113(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4113\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4114(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4114\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h54f94dad__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_12_3_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_210) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_210_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_634_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_643_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_13_3_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_642_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_641_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4115(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4115\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_2__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_161_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_600_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_613_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_11_2_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_612_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_2__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_2__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_611_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4116(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4116\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4117(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4117\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hfe4b94d7__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_2__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_10_2_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_177) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_2__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_177_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_2__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_161_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_600_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_613_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_11_2_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_612_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_2__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_2__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_611_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4118(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4118\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_1__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_128_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_566_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_583_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_9_1_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_582_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_581_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_1__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_1__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4119(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4119\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4120(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4120\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hff70b6ab__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_1__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_8_1_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_144) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_1__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_144_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_1__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_128_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_566_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_583_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_9_1_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_582_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_1__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_581_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4121(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4121\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((0x80U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_5_bits_T_2))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_532_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_553_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_0_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_552_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_551_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_0__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4122(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4122\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4123(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4123\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h46bf552d__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_0__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_0_io_u_output_valid 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_valid_T)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___io_u_output_bits_T_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_bits_T_2) 
                 >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((0x80U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_5_bits_T_2))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_532_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_553_exp));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4124(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4124\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_0_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_552_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_551_exp));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_7__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_246_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h789f564f__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h789f564f__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4125(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4125\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_213_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h3f45fb21__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h3f45fb21__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_229_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4126(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4126\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_229_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_5__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_180_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hee27d9a0__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hee27d9a0__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4127(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4127\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_5__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_196_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_196_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
        = (0x1ffU & ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                      ? ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))
                      : ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                             - (IData)(1U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4128(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4128\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
        = (0x7fffffffffffffULL & ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                                   ? VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                   : ((0x200000U & 
                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                                       ? (0x7ffffffffffffeULL 
                                          & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                             << 1U))
                                       : (0x7ffffffffffffcULL 
                                          & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                             << 2U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_228_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h2e197434__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_500_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_500_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4129(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4129\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h39ddf1b2__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h481ccc03__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h481ccc03__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4130(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4130\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_163_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_163_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4131(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4131\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_195_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h56c89833__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h8bceed0b__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4132(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4132\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_114_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hbf10e066__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hbf10e066__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4133(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4133\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_130_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_130_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
        = (0x1ffU & ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                      ? ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))
                      : ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                             - (IData)(1U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4134(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4134\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
        = (0x7fffffffffffffULL & ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                                   ? VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                   : ((0x200000U & 
                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                                       ? (0x7ffffffffffffeULL 
                                          & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                             << 1U))
                                       : (0x7ffffffffffffcULL 
                                          & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                             << 2U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_162_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h54f94dad__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_434_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_434_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4135(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4135\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h3d13683b__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
}
