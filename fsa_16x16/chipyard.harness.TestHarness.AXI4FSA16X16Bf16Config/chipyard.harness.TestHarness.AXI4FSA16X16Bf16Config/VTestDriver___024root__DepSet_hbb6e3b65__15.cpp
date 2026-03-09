// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h693d6aa2_0;
extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h7c6b3dae_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1527(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1527\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_0__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_0_sign))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
            ? (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT___reciprocal_io_fma_rawC_isZero)
                : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_0__io_in_c_exp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_0__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_0__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1528(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1528\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT___reciprocal_io_fma_rawC_isZero))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__cnt))
                              ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_0__io_in_a_exp) 
                                    - (IData)(0x7fU)))
                              : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__cnt))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__reciprocal__DOT__reg_p_exp)
                                  : 0U)));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_0__io_in_c_exp) 
                             - (IData)(0x7fU)));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_0__io_in_b_exp) 
                             - (IData)(0x7fU)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____VdfgTmp_h10150967__0));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1529(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1529\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_1__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____VdfgTmp_hb22102e1__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                  ? (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                  : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_104_sign)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_1__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_1_sign))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1530(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1530\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT___reciprocal_io_fma_rawC_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT___reciprocal_io_fma_rawC_isZero))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__cnt))
                          ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_1__io_in_a_exp) 
                                - (IData)(0x7fU))) : 
                         ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__reg_p_exp)
                           : 0U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_1__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_1__io_in_c_exp) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_1__io_in_b_exp) 
                         - (IData)(0x7fU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_1__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_1__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_1__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1531(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1531\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____VdfgTmp_h10150967__0));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_2__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____VdfgTmp_hb22102e1__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1532(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1532\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_90_sign))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT___reciprocal_io_fma_rawC_isZero)
                : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_2__io_in_c_exp)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_2__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_2_sign))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_2__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_2__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1533(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1533\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT___reciprocal_io_fma_rawC_isZero))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__cnt))
                              ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_2__io_in_a_exp) 
                                    - (IData)(0x7fU)))
                              : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__cnt))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__reciprocal__DOT__reg_p_exp)
                                  : 0U)));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_2__io_in_c_exp) 
                             - (IData)(0x7fU)));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_2__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_2__io_in_b_exp) 
                             - (IData)(0x7fU)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____VdfgTmp_h10150967__0));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1534(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1534\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_3__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____VdfgTmp_hb22102e1__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                  ? (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                  : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_77_sign)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_3__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_3_sign))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1535(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1535\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT___reciprocal_io_fma_rawC_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT___reciprocal_io_fma_rawC_isZero))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__cnt))
                          ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_3__io_in_a_exp) 
                                - (IData)(0x7fU))) : 
                         ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__reg_p_exp)
                           : 0U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_3__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_3__io_in_c_exp) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_3__io_in_b_exp) 
                         - (IData)(0x7fU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_3__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_3__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_3__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1536(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1536\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____VdfgTmp_h10150967__0));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_4__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____VdfgTmp_hb22102e1__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1537(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1537\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_65_sign))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT___reciprocal_io_fma_rawC_isZero)
                : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_4__io_in_c_exp)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_4__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_4_sign))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_4__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_4__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1538(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1538\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT___reciprocal_io_fma_rawC_isZero))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__cnt))
                              ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_4__io_in_a_exp) 
                                    - (IData)(0x7fU)))
                              : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__cnt))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__reciprocal__DOT__reg_p_exp)
                                  : 0U)));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_4__io_in_c_exp) 
                             - (IData)(0x7fU)));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_4__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_4__io_in_b_exp) 
                             - (IData)(0x7fU)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____VdfgTmp_h10150967__0));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1539(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1539\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_5__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____VdfgTmp_hb22102e1__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                  ? (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                  : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_54_sign)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_5__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_5_sign))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1540(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1540\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT___reciprocal_io_fma_rawC_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT___reciprocal_io_fma_rawC_isZero))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__cnt))
                          ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_5__io_in_a_exp) 
                                - (IData)(0x7fU))) : 
                         ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__reg_p_exp)
                           : 0U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_5__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_5__io_in_c_exp) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_5__io_in_b_exp) 
                         - (IData)(0x7fU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_5__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_5__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_5__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1541(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1541\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____VdfgTmp_h10150967__0));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_6__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____VdfgTmp_hb22102e1__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1542(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1542\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_44_sign))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT___reciprocal_io_fma_rawC_isZero)
                : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_6__io_in_c_exp)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_6__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_6_sign))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_6__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_6__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1543(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1543\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT___reciprocal_io_fma_rawC_isZero))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__cnt))
                              ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_6__io_in_a_exp) 
                                    - (IData)(0x7fU)))
                              : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__cnt))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__reciprocal__DOT__reg_p_exp)
                                  : 0U)));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_6__io_in_c_exp) 
                             - (IData)(0x7fU)));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_6__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_6__io_in_b_exp) 
                             - (IData)(0x7fU)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____VdfgTmp_h10150967__0));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1544(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1544\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_7__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____VdfgTmp_hb22102e1__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                  ? (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                  : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_35_sign)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_7__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_7_sign))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1545(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1545\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT___reciprocal_io_fma_rawC_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT___reciprocal_io_fma_rawC_isZero))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__cnt))
                          ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_7__io_in_a_exp) 
                                - (IData)(0x7fU))) : 
                         ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__reg_p_exp)
                           : 0U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_7__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_7__io_in_c_exp) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_7__io_in_b_exp) 
                         - (IData)(0x7fU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_7__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_7__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_7__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1546(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1546\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____VdfgTmp_h10150967__0));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_8__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____VdfgTmp_hb22102e1__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1547(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1547\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_27_sign))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT___reciprocal_io_fma_rawC_isZero)
                : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_8__io_in_c_exp)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_8__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_8_sign))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_8__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_8__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1548(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1548\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT___reciprocal_io_fma_rawC_isZero))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__cnt))
                              ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_8__io_in_a_exp) 
                                    - (IData)(0x7fU)))
                              : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__cnt))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__reciprocal__DOT__reg_p_exp)
                                  : 0U)));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_8__io_in_c_exp) 
                             - (IData)(0x7fU)));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_8__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_8__io_in_b_exp) 
                             - (IData)(0x7fU)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____VdfgTmp_h10150967__0));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1549(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1549\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_9__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____VdfgTmp_hb22102e1__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                  ? (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                  : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_20_sign)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_9__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_9_sign))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1550(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1550\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT___reciprocal_io_fma_rawC_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT___reciprocal_io_fma_rawC_isZero))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__cnt))
                          ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_9__io_in_a_exp) 
                                - (IData)(0x7fU))) : 
                         ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__reg_p_exp)
                           : 0U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_9__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_9__io_in_c_exp) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_9__io_in_b_exp) 
                         - (IData)(0x7fU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_9__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_9__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1551(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1551\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____VdfgTmp_h10150967__0));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_10__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____VdfgTmp_hb22102e1__0)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1552(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1552\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_14_sign))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT___reciprocal_io_fma_rawC_isZero)
                : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_10__io_in_c_exp)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_10__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_10_sign))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_10__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_10__io_in_b_exp)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1553(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1553\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__split__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_exp)
                : ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)
                    ? 0U : ((0x1c0U & ((- (IData)((1U 
                                                   & ((- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46)) 
                                                      >> 5U)))) 
                                       << 6U)) | (0x3fU 
                                                  & (- (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__split__DOT___lzc_T_46))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)((0U != (0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                 ? 0U
                                                 : 
                                                (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
               & (0xffU == (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                       ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                               (((IData)(0x1eU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                     | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                        (((IData)(0x17U) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))));
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT___reciprocal_io_fma_rawC_isZero))));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__cnt))
                              ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_10__io_in_a_exp) 
                                    - (IData)(0x7fU)))
                              : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__cnt))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__reciprocal__DOT__reg_p_exp)
                                  : 0U)));
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_10__io_in_c_exp) 
                             - (IData)(0x7fU)));
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_10__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_10__io_in_b_exp) 
                             - (IData)(0x7fU)));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_a_exp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_exp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isInf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____VdfgTmp_hb81aa0ad__0)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____VdfgTmp_h10150967__0));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1554(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1554\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__prodHasInf 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? ((VL_LTES_III(9, 0U, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_exp)) 
                 & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_exp) 
                                    >> 3U)))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_isInf))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_isInf)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? ((~ (IData)((0U != (0x7fffffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))
                                                    ? 0U
                                                    : 
                                                   (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                    (((IData)(0x16U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))) 
                                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))) 
                  & (0xffU == (0xffU & (((0U == (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                          ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                                  (((IData)(0x1eU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xffU 
                                                        & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                        | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                           (((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__cnt))
                       ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_11__io_in_a_exp))
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__reg_p_isInf)
                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__xm_isInf)))
                   : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____VdfgTmp_hb67b23a4__0)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____VdfgTmp_hb22102e1__0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_sign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                  ? (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                  : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)) 
                     & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__outputDelayer__DOT__impl__DOT__out_delay_r_9_sign)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__prodSign 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_sign) 
                 ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
                     ? (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                        (((IData)(0x1fU) + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                         ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__cnt))
                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_11__io_in_a_sign)
                             : ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__cnt)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__reg_p_sign)))
                         : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT___mxControl_io_acc_ctrl_bits_cmd)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT____Vcellinp__accumulator__io_sram_in_11_sign))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1555(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1555\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (0xffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                 ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                         (((IData)(0x1eU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x17U) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                               | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                  (((IData)(0x17U) 
                                    + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h7c6b3dae_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0xffU & (((0U == (0x1fU & 
                                            ((IData)(0x17U) 
                                             + (0xffU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                     ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                             (((IData)(0x1eU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                   | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                      (((IData)(0x17U) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                         - (IData)(0x7fU)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT___reciprocal_io_fma_rawC_isZero;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT___reciprocal_io_fma_rawC_isZero))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__cnt))
                          ? (- ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_11__io_in_a_exp) 
                                - (IData)(0x7fU))) : 
                         ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__reg_p_exp)
                           : 0U)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_isZero 
            = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_11__io_in_c_exp));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_c_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_11__io_in_c_exp) 
                         - (IData)(0x7fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT____Vcellinp__fma__io_b_exp 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_11__io_in_b_exp) 
                         - (IData)(0x7fU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__fma__DOT__prodIsZero 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
             ? (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__split__DOT___GEN_1)) 
                 & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT__split__DOT____VdfgTmp_h3cc47fe0__0)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_isZero))
             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT____Vcellinp__mulAddExp2__io_in_a_isZero)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_0__DOT____Vcellinp__mulAddExp2__io_in_exp2)
               ? (0U == (0xffU & (((0U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U)))))
                                    ? 0U : (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                            (((IData)(0x1eU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))) 
                                  | (VTestDriver__ConstPool__CONST_h693d6aa2_0[
                                     (((IData)(0x17U) 
                                       + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x17U) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__mulAddExp2__DOT___split_io_outFracMSBs), 5U))))))))
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_9_multiCycleIO_reciprocal_in_valid)
                   ? ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__cnt))
                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__xm_isInf)
                       : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__cnt))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT__accUnit_11__DOT__reciprocal__DOT__reg_p_isZero)
                           : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_11__io_in_a_exp))))
                   : (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__fsa__DOT__fsa__DOT__accumulator__DOT____Vcellinp__accUnit_11__io_in_b_exp)))));
}
