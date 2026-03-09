// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3403(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3403\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_218_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_218_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_218_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_11__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_250_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_250_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_105_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h33ba8ed8__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h33ba8ed8__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3404(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3404\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_121_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_121_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3405(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3405\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_153_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h472661cc__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_425_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_425_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h14e405a1__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_185_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3406(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3406\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_185_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_185_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_185_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_10__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_217_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_217_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_72_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h3071eaab__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h3071eaab__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3407(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3407\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_88_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_88_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3408(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3408\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_120_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h96bc874d__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_392_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_392_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h1d1f8037__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_152_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3409(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3409\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_152_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_152_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_152_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_9__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_184_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_184_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_39_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h214a784a__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h214a784a__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3410(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3410\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_55_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_55_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3411(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3411\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_87_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_hbff3a5ae__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_359_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_359_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_ha32cab8f__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_119_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3412(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3412\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_119_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_119_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_119_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_8__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_151_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_151_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT____Vcellinp__macUnit__io_in_c_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_diff_sign) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_max_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_max_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_max_mantissa 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__newMax_mantissa;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_max_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT____Vcellinp__cmpUnit__io_in_a_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_max_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_max_mantissa 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0;
    }
    __Vtemp_2[0U] = (IData)((0x7ffffffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U])))));
    __Vtemp_2[1U] = (IData)(((0x7ffffffffffffULL & 
                              (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U])))) 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
            = ((0x3fffffeU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[2U] 
                               << 0xeU) | (0x3ffeU 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U] 
                                              >> 0x12U)))) 
               | (0U != (0x7ffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[0U]))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
            = ((0x3fffffeU & ((__Vtemp_3[1U] << 7U) 
                              | (0x7eU & (__Vtemp_3[0U] 
                                          >> 0x19U)))) 
               | (0U != (0x3ffffffU & VL_SHIFTL_III(26,26,6, 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U], (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3413(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3413\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_22_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_22_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_54_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3414(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3414\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h6d1bf128__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_326_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_326_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_hc4fb80da__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_86_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3415(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3415\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_86_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_86_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_86_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_7__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_118_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_118_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT____Vcellinp__macUnit__io_in_c_sign));
    __Vtemp_2[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_2[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_2[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_3, __Vtemp_2);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_5[0U] = __Vtemp_3[0U];
        __Vtemp_5[1U] = __Vtemp_3[1U];
        __Vtemp_5[2U] = __Vtemp_3[2U];
    } else {
        __Vtemp_5[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_5[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_5[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_7[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_7[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_7[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_21_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h36c7cd93__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3416(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3416\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_293_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_293_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h15b933ad__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_53_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3417(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3417\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_53_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_53_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_53_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_6__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_85_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_85_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_a_isInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_exp) 
                                                 - (IData)(0x7fU)) 
                                                >> 8U)))) 
                                   << 9U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_20_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3418(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3418\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_20_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_20_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_20_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_5__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_52_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_52_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_18_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_18_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_49_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_49_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_80_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_80_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_0__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3419(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3419\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___io_d_output_valid_T 
        = (IData)((0x180U == (0x180U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_bits_T_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_15__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_14__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3420(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3420\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_13__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3421(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3421\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

extern const VlWide<66>/*2111:0*/ VTestDriver__ConstPool__CONST_h4b6776b8_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3422(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3422\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_12__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3423(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3423\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3424(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3424\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hdfd8382c__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_234_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_892_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_897_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_15_11_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_896_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT___io_u_output_bits_T_1) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT___macUnit_io_out_accType_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3425(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3425\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_11__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3426(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3426\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h77347251__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_14_11_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_250) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_11__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_250_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_234_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_892_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_897_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_15_11_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_896_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT___macUnit_io_out_accType_exp)
                : 0U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3427(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3427\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_201_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_858_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_867_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_13_10_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_866_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_10__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_10__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_865_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3428(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3428\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3429(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3429\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h14e405a1__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_12_10_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_217) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_10__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_217_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_201_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_858_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_867_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_13_10_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_866_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_10__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_10__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_865_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3430(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3430\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_168_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_824_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_837_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_11_9_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_836_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_9__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_9__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_835_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_9__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3431(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3431\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3432(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3432\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1d1f8037__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_10_9_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_184) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_9__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_184_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_168_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_824_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_837_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_11_9_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_836_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_9__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_9__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_835_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3433(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3433\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_135_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_790_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_807_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_9_8_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_806_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_805_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___GEN 
        = ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3434(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3434\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3435(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3435\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_ha32cab8f__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_8_8_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_151) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_8__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_151_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_135_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_790_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_807_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_9_8_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_806_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_8__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_805_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3436(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3436\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_7__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_102_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_756_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_777_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_7_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_776_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_775_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3437(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3437\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3438(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3438\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hc4fb80da__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_7_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_118) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_7__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_118_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_7__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_102_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_756_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_777_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_7_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_776_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_775_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3439(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3439\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_6__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_69_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_722_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_747_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_6_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_746_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_745_sign));
    }
    VL_SUB_W(3, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1);
    if ((0x800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U] 
            = __Vtemp_2[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U] 
            = __Vtemp_2[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[2U] 
            = (0x7ffU & __Vtemp_2[2U]);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[2U] 
            = (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_6__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U]);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h15b933ad__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_6__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3440(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3440\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_4_6_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_85) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_6__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_85_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_6__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_69_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_722_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_747_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_6_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_746_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_6__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_745_exp));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_36_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_688_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_717_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_5_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_716_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_715_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchored 
        = (((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__newMax_exp)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0)));
    vlSelf->__VdfgTmp_hd95b2cc9__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff)) 
                                      | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_5__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_2_5_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_52) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_5__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_52_flow_du)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3441(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3441\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_36_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_688_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_717_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_5_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_716_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_5__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_715_exp));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_4_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_686_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_685_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___cmp_array_4_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_3) 
           & (4U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_3_cmd)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT___GEN_1 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_3_cmd)) 
           | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_3_cmd)));
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_3_cmd))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT____Vcellinp__cmpUnit__io_in_a_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_mantissa;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT____Vcellinp__cmpUnit__io_in_a_sign 
            = ((1U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_3_cmd)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__oldMax_sign));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0 
            = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_3_cmd))
                ? 0U : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__oldMax_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_0_4_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_19) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__downCastDIn_rawA_isNaN 
        = ((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_exp)) 
           & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_mantissa));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__downCastDIn_rawA_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__downCastDIn_roundedExp 
        = (0x3ffU & (((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_exp) 
                                  - (IData)(0x7fU)) 
                                 << 1U)) | (0x1ffU 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_exp) 
                                               - (IData)(0x7fU)))) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__downCastDIn_roundedMantissa) 
                              >> 7U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3442(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3442\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_3_cmd))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_4_exp)
            : ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_3_cmd))
                ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_4__DOT__oldMax_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_4_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_686_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_685_exp));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_0_3_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_18) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_18_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_34_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_624_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_653_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___cmp_array_3_io_d_output_valid) {
        __Vtemp_1[0U] = 0x48800000U;
        __Vtemp_1[1U] = 0xc028bf1eU;
        __Vtemp_1[2U] = 0x5ed1b9feU;
        __Vtemp_1[3U] = 0xab711d6U;
        __Vtemp_1[4U] = 0x90141f57U;
        __Vtemp_1[5U] = 0xb95c1fU;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_3_mantissa 
            = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_2_cmd))
                ? 0U : (0x7fffffU & ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_2_cmd))
                                      ? ((0xb7U >= 
                                          (0xffU & 
                                           ((IData)(0x17U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__exp2_counter_value))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x17U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__exp2_counter_value))))
                                               ? 0U
                                               : (__Vtemp_1[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__exp2_counter_value)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__exp2_counter_value)))))) 
                                             | (__Vtemp_1[
                                                (7U 
                                                 & (((IData)(0x17U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__exp2_counter_value)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__exp2_counter_value)))))
                                          : 0U) : (
                                                   (0U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_2_cmd))
                                                    ? 
                                                   ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_rawA_isNaN)) 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_3_sign)) 
                                                     << 0xfU) 
                                                    | (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_rawA_isInf) 
                                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_rawA_isNaN) 
                                                             | VL_LTS_III(10, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_roundedExp))))
                                                          ? 0xffU
                                                          : 
                                                         (((0U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_3_exp)) 
                                                           | VL_GTS_III(10, 0x382U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_roundedExp)))
                                                           ? 0U
                                                           : 
                                                          (0xffU 
                                                           & ((IData)(0x7fU) 
                                                              + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_roundedExp))))) 
                                                        << 7U) 
                                                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_rawA_isNaN)
                                                           ? 0x40U
                                                           : 
                                                          (((0U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_3_exp)) 
                                                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_rawA_isInf) 
                                                               | (VL_GTS_III(10, 0x382U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_roundedExp)) 
                                                                  | VL_LTS_III(10, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_roundedExp)))))
                                                            ? 0U
                                                            : 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT__downCastDIn_roundedMantissa))))))
                                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_3__DOT___cmpUnit_io_out_diff_mantissa))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3443(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3443\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_2_2_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_49) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_2__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_49_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_2__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_65_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_594_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_619_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_2_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_593_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_2__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_592_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_4_1_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_80) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_1__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_80_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_96_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_564_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_585_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_1_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_563_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_1__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_562_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_0_io_d_output_valid 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_valid_T)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___io_d_output_valid_T) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_6_bits_T_2) 
                 >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_0__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((0x80U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__mxControl__DOT___io_pe_ctrl_7_bits_T_2))
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_534_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_551_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_0_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_533_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_0__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_532_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_14__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_253_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hb4930e18__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hb4930e18__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3444(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3444\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_14__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_13__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_220_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hb71add46__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hb71add46__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3445(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3445\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_13__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_236_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_236_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3446(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3446\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_12__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_187_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h6f69fd00__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h6f69fd00__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_12__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_203_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3447(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3447\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_203_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_235_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_hdfd8382c__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3448(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3448\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_507_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_507_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_ha42539e4__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_12__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_266_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_11__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_154_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h02c0f4e1__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h02c0f4e1__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3449(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3449\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_11__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_170_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_170_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
        = (0x1ffU & ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                      ? ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))
                      : ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                             - (IData)(1U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3450(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3450\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
        = (0x7fffffffffffffULL & ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                                   ? VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
                                   : ((0x200000U & 
                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])
                                       ? (0x7ffffffffffffeULL 
                                          & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                             << 1U))
                                       : (0x7ffffffffffffcULL 
                                          & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                             << 2U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_202_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h77347251__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_474_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_474_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3451(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3451\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h010032b9__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_11__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_234_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_234_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_234_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_234_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_11__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3452(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3452\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT___macUnit_io_out_accType_exp 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
            | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__io_out_accType_roundedExp)))
            ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                        | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__io_out_accType_roundedExp)))
                        ? 0U : (0xffU & ((IData)(0x7fU) 
                                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT__macUnit__DOT__io_out_accType_roundedExp)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_11__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_266_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_266_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_10__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_121_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hf3c99794__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_hf3c99794__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3453(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3453\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_10__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_137_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_137_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3454(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3454\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_169_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h14e405a1__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_441_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_441_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_hb6f8fa46__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_10__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_201_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3455(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3455\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_201_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_201_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_201_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_10__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_10__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_233_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_233_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_88_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h0312a6a9__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h0312a6a9__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3456(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3456\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_104_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_104_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3457(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3457\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_136_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h1d1f8037__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_408_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_408_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h02fa0bac__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_9__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_168_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3458(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3458\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_168_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_168_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_168_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_9__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_9__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_200_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_200_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_55_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h365daef1__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h365daef1__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3459(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3459\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_8__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_71_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_71_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3460(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3460\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_103_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_ha32cab8f__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_375_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_375_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h4cf3f2c5__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_135_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}
