// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2495(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2495\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_11__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_58_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_881_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_908_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_0_11_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_880_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_11_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_10_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_73) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_10__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_73_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_10__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_89_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_851_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_874_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_2_10_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_850_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_849_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_9_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_104) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_104_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_9__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_120_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_821_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_840_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_4_9_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_820_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_819_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__io_out_elemType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT___GEN) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__io_out_elemType_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__io_out_accType_roundedExp 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT___GEN) 
                     + (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
                              >> 0x17U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_8_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_135) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_135_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_8__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_151_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_791_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_806_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_8_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_790_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_789_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_262_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2496(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2496\n"); );
    // Body
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_9_7_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_166) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_7__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_166_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_7__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_182_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_761_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_772_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_8_7_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_760_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_759_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h17a57639__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_11_6_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_197) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_197_flow_ud)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2497(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2497\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_6__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_213_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_731_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_738_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_10_6_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_730_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_729_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN 
        = ((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp) 
                      << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_13_5_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_228) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_228_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_5__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_244_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_701_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_704_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_12_5_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_700_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_699_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_516_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_516_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT____VdfgTmp_hb81aa0ad__0)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_258) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_259 = 1U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_load_reg_ui 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_load_reg_ui;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_update_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_update_reg;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_load_reg_li 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_load_reg_li;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_259 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_mantissa)))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa 
        = (0x7fffU & ((0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_mantissa)) 
                      << (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                                - (IData)(7U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2498(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2498\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0 
        = (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_mantissa) 
                    << (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                              - (IData)(7U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1 
        = (VL_GTS_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                                        - (IData)(0x7fU)))) 
           | (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                               - (IData)(0x7fU)) >> 3U))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_258) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_exp2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_exp2;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_14_4_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_670_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_669_mantissa);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_15_3_io_r_output_valid) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_mantissa;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_exp;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_514_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_514_mantissa;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_514_exp;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2499(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2499\n"); );
    // Body
    vlSelf->__VdfgTmp_hafb22fa6__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2500(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2500\n"); );
    // Body
    vlSelf->__VdfgTmp_hab273ad2__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2501(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2501\n"); );
    // Body
    vlSelf->__VdfgTmp_h3fad002a__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2502(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2502\n"); );
    // Body
    vlSelf->__VdfgTmp_h1087dc2f__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
    vlSelf->__VdfgTmp_heffcf41b__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2503(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2503\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
    vlSelf->__VdfgTmp_h19c4a407__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2504(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2504\n"); );
    // Body
    vlSelf->__VdfgTmp_h9d432f63__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2505(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2505\n"); );
    // Body
    vlSelf->__VdfgTmp_h752388ec__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2506(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2506\n"); );
    // Body
    vlSelf->__VdfgTmp_h481ccc03__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
    vlSelf->__VdfgTmp_h139f311c__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2507(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2507\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
    vlSelf->__VdfgTmp_h6eee593a__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2508(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2508\n"); );
    // Body
    vlSelf->__VdfgTmp_hc28b67bc__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2509(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2509\n"); );
    // Body
    vlSelf->__VdfgTmp_hfeee78cf__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2510(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2510\n"); );
    // Body
    vlSelf->__VdfgTmp_h886b08f3__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
    vlSelf->__VdfgTmp_h049af106__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2511(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2511\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_30_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_30_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2512(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2512\n"); );
    // Body
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_62_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h7a388702__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_334_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_334_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2513(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2513\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h1129a276__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_94_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_94_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_94_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_94_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2514(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2514\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_15__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_126_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_126_mac));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_diff_sign) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_max_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__newMax_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_max_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__newMax_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_max_mantissa 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__newMax_mantissa;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_max_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT____Vcellinp__cmpUnit__io_in_a_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_max_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT___cmpUnit_io_out_max_mantissa 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0;
    }
    __Vtemp_2[0U] = (IData)((0x7ffffffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U])))));
    __Vtemp_2[1U] = (IData)(((0x7ffffffffffffULL & 
                              (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U])))) 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
            = ((0x3fffffeU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[2U] 
                               << 0xeU) | (0x3ffeU 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U] 
                                              >> 0x12U)))) 
               | (0U != (0x7ffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchoredNormMantissa[0U]))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
            = ((0x3fffffeU & ((__Vtemp_3[1U] << 7U) 
                              | (0x7eU & (__Vtemp_3[0U] 
                                          >> 0x19U)))) 
               | (0U != (0x3ffffffU & VL_SHIFTL_III(26,26,6, 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U], (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_29_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_hdc0fe5f6__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2515(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2515\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_301_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_301_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_hae882254__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_61_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2516(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2516\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_61_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_61_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_61_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_14__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_93_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_93_mac));
    __Vtemp_2[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
    __Vtemp_2[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
    __Vtemp_2[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    VL_NEGATE_W(3, __Vtemp_3, __Vtemp_2);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__doSub) {
        __Vtemp_5[0U] = __Vtemp_3[0U];
        __Vtemp_5[1U] = __Vtemp_3[1U];
        __Vtemp_5[2U] = __Vtemp_3[2U];
    } else {
        __Vtemp_5[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[0U];
        __Vtemp_5[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[1U];
        __Vtemp_5[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0[2U];
    }
    __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[0U];
    __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[1U];
    __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1[2U];
    VL_ADD_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U] 
        = __Vtemp_7[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U] 
        = __Vtemp_7[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U] 
        = (0xfffU & __Vtemp_7[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_28_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2517(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2517\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_28_exp2)) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_28_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT____Vcellinp__macUnit__io_in_c_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_28_exp2)
                      ? ((0x7eU | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT____Vcellinp__macUnit__io_in_c_exp))) 
                         - (IData)(0x7fU)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT____Vcellinp__macUnit__io_in_c_exp) 
                                              - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_13__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_60_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_60_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT____Vcellinp__rawFMA__io_a_isInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__newMax_exp) 
                                                 - (IData)(0x7fU)) 
                                                >> 8U)))) 
                                   << 9U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__newMax_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_12__DOT___io_u_output_bits_T_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_27_acc_ui)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_27_mac));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2518(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2518\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_26_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_26_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_57_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_57_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_88_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_88_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT___macUnit_io_out_accType_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
            ? 0x400000U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                            | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__io_out_accType_roundedExp)) 
                               | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__io_out_accType_roundedExp))))
                            ? 0U : (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_8__DOT__macUnit__DOT__io_out_accType_roundedMantissa)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_119_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_119_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2519(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2519\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_150_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_150_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_181_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_181_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_212_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_212_mac));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->__VdfgTmp_h8783ccd0__0 = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_sign)
                                                 ? 
                                                (- 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                     >> 7U)))
                                                 : 
                                                (0xffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                    >> 7U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2520(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2520\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14 
        = ((0x40U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
            ? 1U : ((0x20U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                     ? 2U : ((0x10U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                              ? 3U : ((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                       ? 4U : ((4U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa))
                                                ? 5U
                                                : (6U 
                                                   | (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                          >> 1U)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT___io_d_output_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_acc_ui) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_mac));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_0_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_534_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___io_d_output_valid_T)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_533_sign));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_1_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_565_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT___io_d_output_valid_T)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_564_sign));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_4_2_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_596_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT___io_d_output_valid_T)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_595_sign));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_3_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_627_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT___io_d_output_valid_T)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_626_sign));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2521(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2521\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_2_4_io_d_output_valid) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT___io_d_output_valid_T) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_658_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_658_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT___macUnit_io_out_accType_exp;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_658_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_657_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_658_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_657_exp;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_5_io_d_output_valid) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT___io_d_output_valid_T) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_689_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_689_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_5__DOT___macUnit_io_out_accType_exp;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_689_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_688_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_689_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_688_exp;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_0_6_io_d_output_valid) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT___io_d_output_valid_T) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_720_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_720_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_6__DOT___macUnit_io_out_accType_exp;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_720_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_6_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_720_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_6_exp;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___cmp_array_7_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_7_sign 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___GEN_1)) 
               & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_6_cmd)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_diff_sign)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_7_exp 
            = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_6_cmd))
                ? 0U : (0xffU & ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_6_cmd))
                                  ? (IData)((0xe0c0a0806040201ULL 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT__exp2_counter_value), 3U))))
                                  : ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_6_cmd))
                                      ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_7__DOT___cmpUnit_io_out_diff_exp)))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_0_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_534_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___io_d_output_valid_T)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_0__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_533_exp));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_1_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_565_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT___io_d_output_valid_T)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_1__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_564_exp));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_4_2_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_596_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT___io_d_output_valid_T)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_2__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_595_exp));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_3_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_627_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT___io_d_output_valid_T)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_626_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2522(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2522\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_0_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_19) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_275_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_275_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_275_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_275_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_18) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_18_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_274_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_274_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_274_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_18_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_3_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_3_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_3_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_18_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_18_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2523(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2523\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_35) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_35_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_35_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_35_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_291_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_35_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_291_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_291_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_35_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_291_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_34) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_34_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_290_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_290_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_290_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_34_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_624_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_624_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_624_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_34_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_34_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2524(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2524\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_2_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_51) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_51_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_51_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_51_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_307_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_51_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_307_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_307_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_51_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_307_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_50) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_50_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_306_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_306_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_306_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_50_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_625_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_625_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_625_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_50_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_50_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2525(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2525\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_67) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_67_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_67_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_67_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_323_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_67_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_323_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_323_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_67_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_323_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_66) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_66_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_322_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_322_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_322_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_66_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_626_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_626_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_626_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_66_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_66_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2526(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2526\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_4_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_83) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_83_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_83_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_83_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_339_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_83_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_339_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_339_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_83_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_339_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_82) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_82_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_338_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_338_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_338_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_82_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_627_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_627_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_627_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_82_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_82_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2527(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2527\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_99) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_99_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_99_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_99_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_355_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_99_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_355_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_355_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_99_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_355_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_98) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_98_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_354_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_354_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_354_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_98_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_628_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_628_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_628_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_98_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_98_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2528(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2528\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_115) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_115_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_115_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_115_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_371_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_115_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_371_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_371_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_115_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_371_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_114) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_114_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_370_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_370_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_370_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_114_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_629_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_629_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_629_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_114_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_114_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2529(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2529\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_131) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_131_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_131_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_131_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_387_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_131_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_387_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_387_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_131_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_387_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_130) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_130_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_386_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_386_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_386_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_130_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_630_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_630_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_630_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_130_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_130_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2530(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2530\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_8_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_147) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_403_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_403_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_403_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_403_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_146) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_146_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_402_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_402_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_402_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_146_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_631_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_631_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_631_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_146_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_146_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2531(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2531\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_9_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_163) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_163_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_163_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_163_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_419_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_163_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_419_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_419_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_163_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_419_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_162) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_162_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_418_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_418_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_418_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_162_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_632_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_632_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_632_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_162_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_162_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2532(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2532\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_10_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_179) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_179_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_179_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_179_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_435_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_179_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_435_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_435_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_179_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_435_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_178) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_178_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_434_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_434_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_434_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_178_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_633_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_633_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_633_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_178_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_178_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2533(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2533\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_11_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_195) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_195_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_195_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_195_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_195_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_195_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_194) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_450_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_450_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_450_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_634_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_634_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_634_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_194_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2534(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2534\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_12_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_211) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_210) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_210_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_466_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_466_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_466_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_210_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_635_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_635_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_635_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_210_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_210_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2535(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2535\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_13_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_227) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_483_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_483_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_483_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_483_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_226) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_226_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_482_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_482_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_482_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_226_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_636_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_636_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_636_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_226_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_226_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2536(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2536\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_14_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_243) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
        = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_exp2)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_exp) 
                         - (IData)(0x7fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_499_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_499_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_499_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_499_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_242) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_242_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_498_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_498_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_498_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_242_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_637_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_637_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_637_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_242_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_242_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2537(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2537\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_110_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1012_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1033_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_15_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1032_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1031_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___io_out_elemType_resMantissa_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_isZero));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & ((0x600U & ((- (IData)((1U 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp) 
                                                   >> 8U)))) 
                                    << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
                                       >> 0x1eU)) << 1U)) 
               | (0U != (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp 
            = (0x7ffU & (((IData)(3U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                         - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
            = ((0x3fffffeU & ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           (0x3fffffffU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs)))) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)) 
                                          >> 5U))) 
                              << 1U)) | (0U != (0x1fU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc)))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored)) 
           & (0U == (0x3fffffffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__lzc 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                          >> 0x1dU))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                             >> 0x1cU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                              >> 0x1bU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                               >> 0x1aU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                >> 0x19U)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                 >> 0x18U)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                  >> 0x17U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                   >> 0x16U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                    >> 0x15U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                     >> 0x14U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                      >> 0x13U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                       >> 0x12U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                        >> 0x11U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                         >> 0x10U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                          >> 0xfU)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                           >> 0xeU)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                            >> 0xdU)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                             >> 0xcU)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                              >> 0xbU)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                               >> 0xaU)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 9U)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 8U)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 7U)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 6U)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 5U)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 4U)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 3U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 2U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           (0x1cU 
                                                                            | (1U 
                                                                               & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
}

extern const VlWide<66>/*2111:0*/ VTestDriver__ConstPool__CONST_h4b6776b8_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2538(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2538\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_1;
    VlWide<66>/*2111:0*/ __Vtemp_2;
    // Body
    VL_EXTEND_WQ(2101,54, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs);
    VL_SHIFTL_WWI(2101,2101,11, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt));
    VL_AND_W(66, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T, VTestDriver__ConstPool__CONST_h4b6776b8_0, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_h1129a276__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_15_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_126) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_15__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_126_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_110_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1012_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1033_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_15_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1032_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_15__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1031_exp));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2539(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2539\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT__io_out_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_15__DOT__cmpUnit__DOT__fma__DOT___rawFMA_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_14__DOT____Vcellinp__macUnit__io_in_c_sign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_77_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_978_sign)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1003_sign));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_14_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1002_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1001_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT___io_out_elemType_resExp_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT___mulAddExp2_io_out_isInf) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
        = (0x7fffffffffffffULL & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub)
                                    ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0)
                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0) 
                                  + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt 
        = ((IData)(vlSelf->__VdfgTmp_hae882254__0) ? 0U
            : (0x7ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_14__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2540(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2540\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_4_14_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_93) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_14__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_93_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_14__DOT____Vcellinp__macUnit__io_in_c_exp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_77_acc_ui)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_978_exp)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1003_exp));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_14_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1002_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_14__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_1001_exp));
    }
    VL_SUB_W(3, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT____VdfgTmp_h0cff1cb3__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___addProd_T_1);
    if ((0x800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U] 
            = __Vtemp_2[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U] 
            = __Vtemp_2[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[2U] 
            = (0x7ffU & __Vtemp_2[2U]);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__adderOutAbs[2U] 
            = (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_14__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT___pMinusC_T_4[2U]);
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_44_acc_ui) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT____Vcellinp__macUnit__io_in_c_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_944_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT____Vcellinp__macUnit__io_in_c_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_944_exp;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT____Vcellinp__macUnit__io_in_c_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_973_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_13__DOT____Vcellinp__macUnit__io_in_c_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_973_exp;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_13_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_972_sign 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT___macUnit_io_out_accType_sign)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_971_sign));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT____Vcellinp__macUnit__io_in_c_mantissa))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
        = ((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)
                             ? 0U : (0x800000U | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT____Vcellinp__macUnit__io_in_c_mantissa)))) 
           << 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff 
        = (0xfffU & (((0x800U & (((IData)(0x1bU) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)) 
                                 << 1U)) | (0x7ffU 
                                            & ((IData)(0x1bU) 
                                               + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___GEN)))) 
                     - ((0xe00U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                                                >> 8U)))) 
                                   << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_13__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_2_13_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_60) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_13__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_60_flow_du)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2541(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2541\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_13_io_u_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_972_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT___io_u_output_bits_T_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_13__DOT___macUnit_io_out_accType_exp)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_971_exp));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__cAnchored 
        = (((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__newMax_exp)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0)));
    vlSelf->__VdfgTmp_hd3562d83__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT__rawFMA__DOT__expDiff)) 
                                      | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_13__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_12_io_u_output_valid) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT___io_u_output_bits_T_1) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_942_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_942_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_12__DOT___macUnit_io_out_accType_exp;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_942_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_941_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_942_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_941_exp;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_0_12_io_u_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_27) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_12__DOT___io_u_output_bits_T_1) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_27_flow_du)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__downCastDIn_rawA_isNaN 
        = ((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_exp)) 
           & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_mantissa));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__downCastDIn_rawA_isInf 
        = ((~ (IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_mantissa))) 
           & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__downCastDIn_roundedExp 
        = (0x3ffU & (((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_exp) 
                                  - (IData)(0x7fU)) 
                                 << 1U)) | (0x1ffU 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_exp) 
                                               - (IData)(0x7fU)))) 
                     + (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__downCastDIn_roundedMantissa) 
                              >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___cmp_array_12_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_11) 
           & (4U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_11_cmd)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT___GEN_1 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_11_cmd)) 
           | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_11_cmd)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2542(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2542\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_11_cmd))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT____Vcellinp__cmpUnit__io_in_a_sign 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_sign;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_mantissa;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_12_exp;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT____Vcellinp__cmpUnit__io_in_a_sign 
            = ((1U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_11_cmd)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__oldMax_sign));
        if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_11_cmd))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0 = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0 = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc779de5c__0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__oldMax_mantissa;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__cmpUnit__DOT__fma__DOT____VdfgTmp_hc712cc53__0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_12__DOT__oldMax_exp;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_10 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_mbus_0_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_9));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_0_11_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_26) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_11__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_26_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_11__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_42_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_880_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_909_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___cmp_array_11_io_d_output_valid) {
        __Vtemp_1[0U] = 0x48800000U;
        __Vtemp_1[1U] = 0xc028bf1eU;
        __Vtemp_1[2U] = 0x5ed1b9feU;
        __Vtemp_1[3U] = 0xab711d6U;
        __Vtemp_1[4U] = 0x90141f57U;
        __Vtemp_1[5U] = 0xb95c1fU;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_out_pipe_b_11_mantissa 
            = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_10_cmd))
                ? 0U : (0x7fffffU & ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_10_cmd))
                                      ? ((0xb7U >= 
                                          (0xffU & 
                                           ((IData)(0x17U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__exp2_counter_value))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x17U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__exp2_counter_value))))
                                               ? 0U
                                               : (__Vtemp_1[
                                                  (((IData)(0x16U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__exp2_counter_value)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__exp2_counter_value)))))) 
                                             | (__Vtemp_1[
                                                (7U 
                                                 & (((IData)(0x17U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__exp2_counter_value)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__exp2_counter_value)))))
                                          : 0U) : (
                                                   (0U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_10_cmd))
                                                    ? 
                                                   ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_rawA_isNaN)) 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_11_sign)) 
                                                     << 0xfU) 
                                                    | (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_rawA_isInf) 
                                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_rawA_isNaN) 
                                                             | VL_LTS_III(10, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_roundedExp))))
                                                          ? 0xffU
                                                          : 
                                                         (((0U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_11_exp)) 
                                                           | VL_GTS_III(10, 0x382U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_roundedExp)))
                                                           ? 0U
                                                           : 
                                                          (0xffU 
                                                           & ((IData)(0x7fU) 
                                                              + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_roundedExp))))) 
                                                        << 7U) 
                                                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_rawA_isNaN)
                                                           ? 0x40U
                                                           : 
                                                          (((0U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_in_pipe_b_11_exp)) 
                                                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_rawA_isInf) 
                                                               | (VL_GTS_III(10, 0x382U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_roundedExp)) 
                                                                  | VL_LTS_III(10, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_roundedExp)))))
                                                            ? 0U
                                                            : 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT__downCastDIn_roundedMantissa))))))
                                                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__cmp_array_11__DOT___cmpUnit_io_out_diff_mantissa))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2543(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2543\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_2_10_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_57) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_10__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_57_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_10__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_73_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_850_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_875_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_1_10_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_849_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_10__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_848_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_4_9_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_88) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_9__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_88_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_9__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_104_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_820_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_841_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_3_9_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_819_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_9__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_818_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_6_8_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_119) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_8__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_119_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_8__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_135_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_790_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_807_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_5_8_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_789_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_8__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_788_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_262_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h82ba0655__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h82ba0655__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2544(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2544\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_7__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_8_7_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_150) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_7__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_150_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_7__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_166_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_760_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_773_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_7_7_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_759_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_7__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_758_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_6__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_10_6_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_181) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_6__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_181_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_6__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_197_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_730_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_739_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_9_6_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_729_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_6__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_6__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_728_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_h338ce415__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_12_5_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_212) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_5__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_212_flow_ud)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2545(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2545\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_5__DOT____Vcellinp__macUnit__io_in_c_mantissa 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_228_acc_ui)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_700_mantissa
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_705_mantissa);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_11_5_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_699_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_5__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_698_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_260_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_5__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_15_4_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_259) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_15_4_io_r_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_259) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_flow_lr) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_load_reg_li)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_exp2) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_acc_ui)
                ? (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_670_exp) 
                         >> 1U)) : 0U) == (7U & (VL_GTS_III(9, 0U, 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                                                                - (IData)(0x7fU))))
                                                  ? 
                                                 (VL_GTS_III(9, 3U, 
                                                             (0x1ffU 
                                                              & ((IData)(0x1ffU) 
                                                                 - 
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                                                                  - (IData)(0x7fU)))))
                                                   ? 
                                                  (7U 
                                                   & (((0x80U 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_mantissa)) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(3U) 
                                                           - 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                                                            - (IData)(3U))))) 
                                                      >> 5U))
                                                   : 0U)
                                                  : 
                                                 ((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                                                        - (IData)(0x7fU)) 
                                                       >> 3U)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                   >> 4U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_exp2)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_acc_ui) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_670_exp))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2546(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2546\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_exp2)) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT____Vcellinp__macUnit__io_in_c_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
            = (0x1ffU & ((0x7eU | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_acc_ui) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_670_exp))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                             - (IData)(0x7fU)) : ((0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                   ? 0U
                                                   : 
                                                  ((0x1f0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)) 
                                                                      >> 3U)))) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14)))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT____Vcellinp__macUnit__io_in_c_exp) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                         - (IData)(0x7fU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_14_4_io_d_output_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_243) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT___io_d_output_valid_T) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_flow_ud)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____VdfgTmp_hb81aa0ad__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_acc_ui) 
           & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_670_mantissa));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT___mesh_13_4_io_d_output_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_669_mantissa 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT___io_d_output_valid_T)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT___macUnit_io_out_accType_mantissa
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_668_mantissa);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_sign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_exp2)
             ? ((VL_LTES_III(9, 0U, (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                                               - (IData)(0x7fU)))) 
                 & (0U != (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp) 
                                     - (IData)(0x7fU)) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_mantissa)))) 
              & (0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_exp))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2547(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2547\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_259_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))) 
                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp)))
             : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_4__DOT__reg_exp))) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_515_exp)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_v_258) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_load_reg_li) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_514_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_exp 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_514_exp;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_mantissa 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_514_mantissa;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_load_reg_ui) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_sign 
                = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_638_mantissa 
                         >> 0xfU));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_exp 
                = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_638_mantissa 
                            >> 7U));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_mantissa 
                = (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_638_mantissa);
        } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_update_reg) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT___macUnit_io_out_exp2) 
                       & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__exp2Done))))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_sign 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT___macUnit_io_out_accType_sign;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_exp 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT___io_out_elemType_resExp_T) 
                    | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                    ? 0xffU : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT___mulAddExp2_io_out_isZero) 
                                | VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))
                                ? 0U : (0xffU & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__reg_mantissa 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)
                    ? 0x40U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT___io_out_elemType_resMantissa_T) 
                                | (VL_GTS_III(12, 0xf82U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT__io_out_elemType_roundedExp)) 
                                   | VL_LTS_III(12, 0x7fU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT__io_out_elemType_roundedExp))))
                                ? 0U : (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__macUnit__DOT__io_out_elemType_roundedMantissa))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__exp2Done 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_258_exp2) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT__exp2Done) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_15_3__DOT___macUnit_io_out_exp2)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2548(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2548\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_275_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_275_exp) 
                                                 - (IData)(0x7fU))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2549(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2549\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_19_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_275_mantissa))) 
                                       << 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_291_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_291_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_35_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_291_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2550(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2550\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_307_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_307_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_51_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_307_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2551(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2551\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_323_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_323_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_67_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_323_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2552(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2552\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_339_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_339_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_83_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_339_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2553(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2553\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_355_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_355_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_99_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_355_mantissa))) 
                                       << 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_371_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_371_exp) 
                                                 - (IData)(0x7fU))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2554(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2554\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_115_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_6_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_371_mantissa))) 
                                       << 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_387_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_387_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_131_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_7_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_387_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2555(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2555\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_403_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_403_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_147_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_8_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_403_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2556(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2556\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_419_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_419_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_163_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_9_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_419_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2557(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2557\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_435_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_435_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_179_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_10_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_435_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2558(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2558\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_195_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_11_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_451_mantissa))) 
                                       << 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_exp) 
                                                 - (IData)(0x7fU))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2559(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2559\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_211_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_12_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_467_mantissa))) 
                                       << 0xcU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_483_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_483_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_227_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_13_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_483_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2560(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2560\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodExp 
        = (0x3ffU & (((0x200U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp)) 
                     + ((0x200U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_499_exp) 
                                    - (IData)(0x7fU)) 
                                   << 1U)) | (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_499_exp) 
                                                 - (IData)(0x7fU))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero)
            ? 0ULL : (QData)((IData)((0xffff000U & 
                                      (((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_243_exp2)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                    ? 
                                                   (0x80U 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_mantissa))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3386a3be__0) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___lzc_T_14))))
                                                   : 
                                                  (0x80U 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_14_4__DOT__reg_mantissa)))) 
                                        * (0x80U | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_499_mantissa))) 
                                       << 0xcU)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2561(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2561\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT____Vcellinp__macUnit__io_in_c_sign));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_exp 
        = (0x7ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_30_exp2)
                      ? (((0x600U & ((- (IData)(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h6ecd4eac__0) 
                                                    >> 8U)))) 
                                     << 9U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                                                 ? 0U
                                                 : (IData)(vlSelf->__VdfgTmp_h6ecd4eac__0))) 
                         + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_exp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__io_out_elemType_roundedMantissa 
        = (0xffU & ((0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                              >> 0x12U)) + (1U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                   >> 0x11U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x5ffffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT__io_out_accType_roundedMantissa 
        = (0xffffffU & ((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                      >> 2U)) + (1U 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                     >> 1U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_0_15__DOT__macUnit__DOT___mulAddExp2_io_out_mantissa 
                                                          >> 2U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2562(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2562\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT___macUnit_io_out_accType_sign 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_46_exp2)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT____Vcellinp__macUnit__io_in_c_sign)
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T)
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT____Vcellinp__macUnit__io_in_c_sign) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))
                          : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)) 
                             & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                               >> 0x36U)))
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT____Vcellinp__macUnit__io_in_c_sign)
                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodSign))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT___mulAddExp2_io_out_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_46_exp2)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf)
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___io_out_isZero_T) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h168c39b6__0)));
    if ((0x400000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & VL_SHIFTL_QQI(55,55,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)));
    } else if ((0x200000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___cAnchoredMantissa_T[1U])) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffeULL 
                                      & (VL_SHIFTL_QQI(54,54,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 1U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredExp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_exp) 
                         - (IData)(1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchoredNormMantissa 
            = (0x7fffffffffffffULL & (0x7ffffffffffffcULL 
                                      & (VL_SHIFTL_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_1_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)) 
                                         << 2U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__adderOutAbs 
        = (0x3fffffffffffffULL & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4 
                                                 >> 0x36U)))
                                   ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
                                      - vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___addProd_T_1)
                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_2_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT___pMinusC_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT___mulAddExp2_io_out_isInf 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_78_exp2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT___fma_io_out_isInf));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2563(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2563\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____VdfgTmp_h0cf0c0d5__0 
        = ((((0x35U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt))
              ? 0ULL : (0x1fffffffffffffULL & VL_SHIFTR_QQI(53,53,11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))) 
            << 1U) | (QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT____Vcellinp__shiftRightJam__io_in 
                                             & (((1ULL 
                                                  << 
                                                  ((IData)(vlSelf->__VdfgTmp_h1129a276__0)
                                                    ? 0U
                                                    : 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)))) 
                                                 - 1ULL) 
                                                | (- (QData)((IData)(
                                                                     (0x35U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_3_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__alignShiftAmt)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT___mulAddExp2_io_out_isNaN 
        = (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__reg_exp)) 
            & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__reg_mantissa))) 
           | (((0xffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_350_exp)) 
               & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_350_mantissa))) 
              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____VdfgTmp_h250a88a6__0) 
                  & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT____Vcellinp__macUnit__io_in_c_mantissa)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isInf) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__doSub))) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__cAnchored 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT____Vcellinp__mulAddExp2__io_in_c_isZero)) 
            & VL_GTS_III(12, 0x19U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->__VdfgTmp_he597b43f__0 = (VL_GTS_III(12, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__expDiff)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_4_15__DOT__macUnit__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT___macUnit_io_out_exp2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__pipe_b_110_exp2) 
           & ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT____Vcellinp__macUnit__io_in_c_exp) 
                     >> 1U)) == (7U & (VL_GTS_III(9, 0U, 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__reg_exp) 
                                                      - (IData)(0x7fU))))
                                        ? (VL_GTS_III(9, 3U, 
                                                      (0x1ffU 
                                                       & ((IData)(0x1ffU) 
                                                          - 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__reg_exp) 
                                                           - (IData)(0x7fU)))))
                                            ? (7U & 
                                               (((0x80U 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__reg_mantissa)) 
                                                 >> 
                                                 (3U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__reg_exp) 
                                                      - (IData)(3U))))) 
                                                >> 5U))
                                            : 0U) : 
                                       ((0U != (0x1fU 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__reg_exp) 
                                                    - (IData)(0x7fU)) 
                                                   >> 3U)))
                                         ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__sa__DOT__mesh_5_15__DOT__macUnit__DOT__mulAddExp2__DOT__split__DOT__shiftedMantissa) 
                                                 >> 4U))))));
}
